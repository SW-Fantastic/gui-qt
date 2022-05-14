package org.swdc.qt.widgets;

import java.util.ArrayList;
import java.util.List;

public class ItemModelNode<T> {

    private ItemModelNode<T> parent;
    private List<ItemModelNode<T>> children = new ArrayList<>();
    private ItemModel<T> model;

    private T value;

    public ItemModelNode<T> getParent() {
        return parent;
    }

    public void setParent(ItemModelNode<T> parent) {
        this.parent = parent;
    }

    public int count() {
        return children.size();
    }

    public ItemModelNode<T> get(int row) {
        return children.get(row);
    }

    public T getValue() {
        return value;
    }

    public void setModel(ItemModel<T> model) {
        this.model = model;
    }

    public ItemModel<T> getModel() {
        return model;
    }

    public void setValue(T value) {
        this.value = value;
    }

    public void addItem(ItemModelNode<T> item) {
        this.children.add(item);
    }

    public void removeItem(ItemModelNode<T> item) {
        this.children.remove(item);
    }

    public int rowIndexOf(ItemModelNode<T> item) {
        if (children.contains(item)) {
            return children.indexOf(item);
        }
        return 0;
    }

}
