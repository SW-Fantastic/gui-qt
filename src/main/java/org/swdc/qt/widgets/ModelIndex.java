package org.swdc.qt.widgets;

import org.swdc.qt.beans.ItemDataRole;
import org.swdc.qt.internal.common.SModelIndex;

public class ModelIndex {

    private SModelIndex index = new SModelIndex();
    private ModelIndex parent;

    public static ModelIndex asModelIndex(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer!");
        }
        ModelIndex index = new ModelIndex();
        index.index.address(pointer);
        return index;
    }

    public void dispose() {
        if (getPointer() > 0 ) {
            index.dispose(getPointer());
        }
    }

    public long getPointer() {
        return index.address();
    }

    public int getRow() {
        if (getPointer() > 0 ) {
            return index.row(getPointer());
        }
        return 0;
    }

    public int getColumn() {
        if (getPointer() > 0) {
            return index.column(getPointer());
        }
        return 0;
    }

    public ModelIndex parent() {
        if (getPointer() > 0) {
            if (parent != null && parent.getPointer() > 0) {
                return parent;
            }
            long parent = index.parent(getPointer());
            if (parent <= 0) {
                return null;
            }
            return asModelIndex(parent);
        } else if (parent != null) {
            parent.dispose();
            parent = null;
        }
        return null;
    }

    public ModelIndex sibling(int row, int column){
        if (getPointer() > 0) {
            long pointer = index.sibling(getPointer(),row,column);
            if (pointer <= 0) {
                return null;
            }
            return asModelIndex(pointer);
        }
        return null;
    }

    public ModelIndex siblingAtColumn(int column) {
        if (getPointer() > 0) {
            long pointer = index.siblingAtColumn(getPointer(),column);
            if (pointer <= 0) {
                return null;
            }
            return asModelIndex(pointer);
        }
        return null;
    }

    public ModelIndex siblingAtRow(int row) {
        if (getPointer() > 0) {
            long pointer = index.siblingAtRow(getPointer(),row);
            if (pointer <= 0) {
                return null;
            }
            return asModelIndex(pointer);
        }
        return null;
    }

    public Variant data(ItemDataRole data) {
        if (getPointer() > 0) {
            long variantPointer = index.data(getPointer(),data.getVal());
            if (variantPointer > 0) {
                return Variant.asVariant(variantPointer);
            }
            return null;
        }
        return null;
    }

}
