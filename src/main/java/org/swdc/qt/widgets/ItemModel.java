package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SItemModel;

import java.util.HashMap;
import java.util.Map;
import java.util.function.BiConsumer;
import java.util.function.Consumer;
import java.util.function.Function;

public class ItemModel<T> implements NativeAllocated {

    /**
     * Native Handler
     */
    private SItemModel model = new SItemModel();

    /**
     * Root节点
     */
    private ItemModelNode<T> node = new ItemModelNode<>();

    /**
     * Header的Section Id和标题的map。
     */
    private Map<Integer,String> headerIdTitlesMap = new HashMap<>();

    /**
     * Column Getter，从类型T读取指定Section Id 的数据并转换为String的形式，
     * 如果用户没有自定义delegate，那么模型将会使用它们读取需要渲染的字符串。
     */
    private Map<Integer, Function<ItemModelNode<T>,Variant>> columnGetters = new HashMap<>();

    /**
     * Column Setter，将指定类型的String设置到指定Section Id的字段中，如果
     * 用户没有自定义Delegate，那么模型将会使用此方法保存修改。
     */
    private Map<Integer, BiConsumer<ItemModelNode<T>,T>> columnSetters = new HashMap<>();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = model.create(this);
        if (pointer <= 0) {
            throw new Exception("can not allocate a item-model");
        }
        model.address(pointer);
        MemoryHolder.allocated(this);
    }

    private int count(ItemModelNode<T> node) {
        return node == null ? this.node.count() : node.count();
    }

    private int columnCounts() {
        return headerIdTitlesMap.size();
    }

    private ItemModelNode<T> getNode(int row, int column,ItemModelNode<T> parent) {
        if (parent == null && row < node.count() && column < columnCounts()) {
            return node.get(row);
        } else if (parent != null && parent.count() < row && column < columnCounts()){
            return parent.get(row);
        } else {
            return null;
        }
    }

    private ItemModelNode<T> getParent(ItemModelNode<T> child) {
        if (child == null || child.getParent() == null) {
            return null;
        }
        return child.getParent();
    }


    private int getParentRowIndex(ItemModelNode<T> parentNode) {
        if (parentNode.getParent() == null) {
            return 0;
        } else {
           return parentNode.getParent().rowIndexOf(parentNode);
        }
    }

    private long getData(ItemModelNode<T> node, int role) {

        if (node == null) {
            return 0;
        }

        if (!columnGetters.containsKey(role)) {
            return 0;
        }
        Variant variant = columnGetters.get(role).apply(node);
        if (variant != null) {
            return variant.getPointer();
        }
        return 0;
    }

    private String getHeaderString(int headerId, long origin, int role) {
        return headerIdTitlesMap.get(headerId);
    }

    public void addColumn(Enum section, String title,Function<ItemModelNode<T>,Variant> getter, BiConsumer<ItemModelNode<T>,T> setter) {
        this.headerIdTitlesMap.put(section.ordinal(),title);
        this.columnGetters.put(section.ordinal(),getter);
        this.columnSetters.put(section.ordinal(),setter);
    }

    public void removeColumn(Enum section) {
        this.headerIdTitlesMap.remove(section.ordinal());
        this.columnSetters.remove(section.ordinal());
        this.columnGetters.remove(section.ordinal());
    }

    public void addColumn(int section, String title,Function<ItemModelNode<T>,Variant> getter, BiConsumer<ItemModelNode<T>,T> setter) {
        this.headerIdTitlesMap.put(section,title);
        this.columnGetters.put(section,getter);
        this.columnSetters.put(section,setter);
    }

    public void removeColumn(int section) {
        this.headerIdTitlesMap.remove(section);
        this.columnSetters.remove(section);
        this.columnGetters.remove(section);
    }


    public ItemModelNode<T> getRootNode() {
        return node;
    }

    public void setRootNode(ItemModelNode<T> root) {
        model.resetReferences(getPointer());
        this.node = root;
        this.node.setModel(this);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            model.dispose(getPointer());
            model.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return model.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SItemModel.CLEANER;
    }

    public static <T> ItemModel<T> asItemModel(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not allocate item, invalid pointer");
        }
        ItemModel<T> model = new ItemModel();
        model.model.address(pointer);
        MemoryHolder.allocated(model);
        return model;
    }

}
