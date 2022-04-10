package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.ItemDataRole;
import org.swdc.qt.beans.MatchFlag;
import org.swdc.qt.beans.Orientation;
import org.swdc.qt.beans.SortOrder;
import org.swdc.qt.internal.common.SAbstractItemModel;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public abstract class AbstractItemModel implements NativeAllocated {


    private SAbstractItemModel model = new SAbstractItemModel();

    public abstract long getPointer();

    public void dispose() {
        if (accessible()) {
            model.dispose(getPointer());
        }
    }

    public boolean hasIndex(int row, int column,ModelIndex parent) {
        if (accessible()) {
            return model.hasIndex(getPointer(),row,column,
                    (parent == null || parent.getPointer() <= 0) ? 0L : parent.getPointer());
        }
        return false;
    }

    public ModelIndex getIndex(int row, int column, ModelIndex parent) {
        if (accessible()) {
            long pointer = model.index(getPointer(),row,column,
                    (parent == null || parent.getPointer() <= 0) ? 0L : parent.getPointer());
            if (pointer > 0) {
                return ModelIndex.asModelIndex(pointer);
            }
            return null;
        }
        return null;
    }

    public ModelIndex getParent(ModelIndex child) {
        if (accessible()) {
            long pointer = model.parent(getPointer(),
                    (child == null || child.getPointer() <= 0) ? 0L : child.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return ModelIndex.asModelIndex(pointer);
        }
        return null;
    }

    public ModelIndex sibling(int row, int column, ModelIndex idx) {
        if (accessible() ){
            long pointer = model.sibling(getPointer(),row,column,
                    (idx == null || idx.getPointer() <= 0) ? 0L : idx.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return ModelIndex.asModelIndex(pointer);
        }
        return null;
    }

    public int getRowCount(ModelIndex parent) {
        if (accessible()) {
            return model.rowCount(getPointer(),
                    (parent == null || parent.getPointer() <= 0) ? 0L : parent.getPointer());
        }
        return 0;
    }

    public int getColumnCount(ModelIndex parent) {
        if (accessible() ) {
            return model.columnCount(getPointer(),
                    (parent == null || parent.getPointer() <= 0) ? 0L : parent.getPointer());
        }
        return 0;
    }

    public boolean hasChildren(ModelIndex parent) {
        if (accessible()) {
            return model.hasChildren(getPointer(),
                    (parent == null || parent.getPointer() <= 0) ? 0L : parent.getPointer());
        }
        return false;
    }

    public Variant getData(ModelIndex index, ItemDataRole role) {
        if (accessible(index,role)) {
            long pointer = model.data(getPointer(),index.getPointer(),role.getVal());
            if (pointer <= 0 ){
                return null;
            }
            return Variant.asVariant(pointer);
        }
        return null;
    }

    public boolean setData(ModelIndex index,Variant value, ItemDataRole role) {
        if (accessible(index,value,role)) {
            return model.setData(getPointer(),index.getPointer(),value.getPointer(),role.getVal());
        }
        return false;
    }

    public Variant getHeaderData(int section, Orientation orientation, ItemDataRole role) {
        if (accessible(orientation,role)) {
            long pointer = model.headerData(getPointer(),section,orientation.getVal(),role.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Variant.asVariant(pointer);
        }
        return null;
    }

    public boolean setHeaderData(int section, Orientation orientation, Variant value, ItemDataRole role) {
        if (accessible(orientation,value,role)) {
            return model.setHeaderData(getPointer(),section,orientation.getVal(),value.getPointer(),role.getVal());
        }
        return false;
    }

    public boolean insertRows(int row, int count,ModelIndex parent) {
        if (accessible()) {
            return model.insertRows(getPointer(),row,count,
                    (parent == null || parent.getPointer() <= 0) ? 0L : parent.getPointer());
        }
        return false;
    }

    public boolean insertColumns(int column, int count, ModelIndex parent) {
        if (accessible()) {
            return model.insertColumns(getPointer(),column,count,
                    (parent == null || parent.getPointer() <= 0) ? 0L : parent.getPointer());
        }
        return false;
    }

    public boolean removeRows(int row, int count, ModelIndex parent) {
        if (accessible()) {
            return model.removeRows(getPointer(),row,count,
                    (parent == null || parent.getPointer() <= 0 ? 0L : parent.getPointer()));
        }
        return false;
    }

    public boolean removeColumns(int column, int count, ModelIndex parent) {
        if (accessible()) {
            return model.removeColumns(getPointer(),column,count,
                    (parent == null || parent.getPointer() <= 0 ? 0L : parent.getPointer()));
        }
        return false;
    }

    public boolean moveRows(ModelIndex sourceParent, int sourceRow, int count,
                                   ModelIndex destinationParent, int destinationChild) {

        if (sourceParent == null || sourceParent.getPointer() <= 0) {
            return false;
        }
        if (destinationParent == null || destinationParent.getPointer() <= 0) {
            return false;
        }
        if (getPointer() <= 0) {
            return false;
        }
        return model.moveRows(getPointer(),
                sourceParent.getPointer(),
                sourceRow,
                count,
                destinationParent.getPointer(),
                destinationChild);
    }

    public boolean moveColumns(ModelIndex sourceParent, int sourceColumn, int count,
                                      ModelIndex destinationParent, int destinationChild) {

        if (sourceParent == null || sourceParent.getPointer() <= 0) {
            return false;
        }
        if (destinationParent == null || destinationParent.getPointer() <= 0) {
            return false;
        }
        if (getPointer() <= 0) {
            return false;
        }

        return model.moveRows(getPointer(),
                sourceParent.getPointer(),
                sourceColumn,
                count,
                destinationParent.getPointer(),
                destinationChild);
    }

    public boolean insertRow(int row, ModelIndex parent) {
        if (accessible()) {
            return model.insertRow(getPointer(),row,
                    (parent == null || parent.getPointer() <= 0 ? 0L : parent.getPointer()));
        }
        return false;
    }

    public boolean insertColumn(int column, ModelIndex parent) {
        if (accessible()) {
            return model.insertColumn(getPointer(),column,
                    (parent == null || parent.getPointer() <= 0 ? 0L : parent.getPointer()));
        }
        return false;
    }

    public boolean removeRow(int row, ModelIndex parent) {
        if (accessible()) {
            return model.removeRow(getPointer(),row,
                    (parent == null || parent.getPointer() <= 0 ? 0L : parent.getPointer()));
        }
        return false;
    }

    public boolean removeColumn(int column, ModelIndex parent) {
        if (accessible()) {
            return model.removeColumn(getPointer(),column,
                    (parent == null || parent.getPointer() <= 0 ? 0L : parent.getPointer()));
        }
        return false;
    }

    public boolean moveRow(ModelIndex sourceParent, int sourceRow,
                                  ModelIndex destinationParent, int destinationChild) {

        if (sourceParent == null || sourceParent.getPointer() <= 0) {
            return false;
        }
        if (destinationParent == null || destinationParent.getPointer() <= 0) {
            return false;
        }
        if (getPointer() <= 0) {
            return false;
        }

        return model.moveRow(
                getPointer(),
                sourceParent.getPointer(),
                sourceRow,
                destinationParent.getPointer(),
                destinationChild
        );
    }

    public boolean moveColumn(ModelIndex sourceParent, int sourceColumn,
                                     ModelIndex destinationParent, int destinationChild) {
        if (sourceParent == null || sourceParent.getPointer() <= 0) {
            return false;
        }
        if (destinationParent == null || destinationParent.getPointer() <= 0) {
            return false;
        }
        if (getPointer() <= 0) {
            return false;
        }

        return model.moveColumn(
                getPointer(),
                sourceParent.getPointer(),
                sourceColumn,
                destinationParent.getPointer(),
                destinationChild
        );
    }

    public void fetchMore(ModelIndex parent) {
        if (parent == null || parent.getPointer() <= 0) {
            return;
        }
        model.fetchMore(getPointer(),parent.getPointer());
    }

    public boolean canFetchMore(ModelIndex parent) {
        if (parent == null || parent.getPointer() <= 0) {
            return false;
        }
        return model.canFetchMore(getPointer(),parent.getPointer());
    }

    public void sort(int column, SortOrder order) {
        if (accessible(order)) {
            model.sort(getPointer(),column,order.getVal());
        }
    }

    public ModelIndex buddy(ModelIndex index) {
        if (accessible(index)) {
            long pointer = model.buddy(getPointer(),index.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return ModelIndex.asModelIndex(pointer);
        }
        return null;
    }

    public List<ModelIndex> match(ModelIndex startIndex, ItemDataRole role, Variant value, int hits, MatchFlag ...flags) {

        if (getPointer() <= 0) {
            return Collections.emptyList();
        }

        if (value == null || value.getPointer() <= 0) {
            return Collections.emptyList();
        }

        int flag = 0;
        if (flags.length > 0) {
            flag = flags[0].getVal();
            for (int idx = 1; idx < flags.length; idx++) {
                flag = flag | flags[idx].getVal();
            }
        }

        long[] indexes = model.match(
                getPointer(),
                startIndex.getPointer(),
                role.getVal(),
                value.getPointer(),
                hits,
                flag
        );

        List<ModelIndex> data = new ArrayList<>();
        for (long idx: indexes) {
            if (idx <= 0) {
                continue;
            }
            data.add(ModelIndex.asModelIndex(idx));
        }
        return data;
    }

    public Size span(ModelIndex index) {
        if (getPointer() <= 0 || index == null || index.getPointer() <= 0) {
            return null;
        }
        long pointer = model.span(getPointer(),index.getPointer());
        if (pointer <= 0) {
            return null;
        }
        return Size.asSize(pointer);
    }

    public boolean submit() {
        if (accessible()) {
            return model.submit(getPointer());
        }
        return false;
    }

    public void revert() {
        if (accessible()) {
            model.submit(getPointer());
        }
    }

    public static AbstractItemModel asAbstractItemModel(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        AbstractItemModel model = new AbstractItemModel() {
            @Override
            public long getPointer() {
                return pointer;
            }
        };
        return model;
    }

}
