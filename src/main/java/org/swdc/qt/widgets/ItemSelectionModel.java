package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SItemSelectionModel;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class ItemSelectionModel implements NativeAllocated {

    private SItemSelectionModel selectionModel = new SItemSelectionModel();

    public void allocate(ItemModel model) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessibleParam(model)) {
            throw new Exception("can not allocate selection model, invalid model");
        }
        long pointer = selectionModel.create(model.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create selection model, allocation failed");
        }
        selectionModel.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void dispose() {
        if (accessible()) {
            selectionModel.dispose(getPointer());
            selectionModel.cleanAddress();
        }
    }

    public ModelIndex getCurrentIndex() {
        if (accessible()) {
            long pointer = selectionModel.currentIndex(getPointer());
            if (pointer > 0) {
                return ModelIndex.asModelIndex(pointer);
            }
        }
        return null;
    }

    public boolean isSelected(ModelIndex index) {
        return accessible(index) && selectionModel.isSelected(
                getPointer(),
                index.getPointer()
        );
    }

    public boolean isRowSelected(int row,ModelIndex parent){
        return accessible() && selectionModel
                .isRowSelected(
                        getPointer(),
                        row,
                        accessible(parent) ? parent.getPointer() : 0L
                );
    }

    public boolean isColumnSelected(int column,ModelIndex parent) {
        return accessible() && selectionModel
                .isColumnSelected(
                        getPointer(),
                        column,
                        accessible(parent) ? parent.getPointer() : 0L
                );
    }

    public boolean isRowIntersectsSelection(int row,ModelIndex parent) {
        return accessible() && selectionModel
                .rowIntersectsSelection(
                        getPointer(),
                        row,
                        accessible(parent) ? parent.getPointer() : 0L
                );
    }

    public boolean isColumnIntersectsSelection(int column, ModelIndex parent) {
        return accessible() && selectionModel
                .columnIntersectsSelection(
                        getPointer(),
                        column,accessible(parent) ? parent.getPointer() : 0L
                );
    }

    public boolean hasSelection() {
        return accessible() && selectionModel.hasSelection(getPointer());
    }

    public List<ModelIndex> getSelectedIndexes() {
        if (accessible()) {
            long[] indexes = selectionModel.selectedIndexes(getPointer());
            if (indexes == null) {
                return Collections.emptyList();
            }
            return Arrays.stream(indexes)
                    .filter(p -> p > 0)
                    .mapToObj(ModelIndex::asModelIndex)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public List<ModelIndex> getSelectedRows(int column) {
        if(accessible(column)) {
            long[] indexes = selectionModel.selectedRows(getPointer(),column);
            if (indexes != null) {
                return Collections.emptyList();
            }
            return Arrays.stream(indexes)
                    .filter(p -> p > 0)
                    .mapToObj(ModelIndex::asModelIndex)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public List<ModelIndex> getSelectedColumns(int row) {
        if(accessible(row)) {
            long[] indexes = selectionModel.selectedColumns(getPointer(),row);
            if (indexes != null) {
                return Collections.emptyList();
            }
            return Arrays.stream(indexes)
                    .filter(p -> p > 0)
                    .mapToObj(ModelIndex::asModelIndex)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public <T> ItemModel<T> getModel() {
        if (accessible()) {
            long pointer = selectionModel.model(getPointer());
            if (pointer > 0) {
                return ItemModel.asItemModel(pointer);
            }
        }
        return null;
    }

    public <T> void setModel(ItemModel<T> model) {
        if (accessible(model)) {
            selectionModel.setModel(getPointer(),model.getPointer());
        }
    }

    public void setCurrentIndex(ModelIndex index, ItemSelectionModelFlags itemSelectionFlag) {
        if (accessible(index,itemSelectionFlag)) {
            selectionModel.setCurrentIndex(getPointer(),index.getPointer(),itemSelectionFlag.getVal());
        }
    }

    public void select(ModelIndex index, ItemSelectionModelFlags itemSelectionFlags) {
        if (accessible(index,itemSelectionFlags)) {
           selectionModel.select(getPointer(),index.getPointer(),itemSelectionFlags.getVal());
        }
    }

    public void clear() {
        if (accessible()) {
            selectionModel.clear(getPointer());
        }
    }

    public void reset() {
        if (accessible()) {
            selectionModel.reset(getPointer());
        }
    }

    public void clearSelection() {
        if (accessible()) {
            selectionModel.clearSelection(getPointer());
        }
    }

    public void clearCurrentIndex() {
        if (accessible()) {
            selectionModel.clearCurrentIndex(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return selectionModel.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SItemSelectionModel.CLEANER;
    }

    public static ItemSelectionModel asSelectionModel(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap the model, invalid pointer");
        }
        ItemSelectionModel model = new ItemSelectionModel();
        model.selectionModel.address(pointer);
        return model;
    }

}
