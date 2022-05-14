package org.swdc.qt.widgets;

import org.swdc.qt.beans.*;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SListView;

import java.util.function.Consumer;

public class ListView<T> extends AbstractItemView<T> {

    private SListView view = new SListView();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = view.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create list-view, allocate failed");
        }
        view.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void dispose() {
        if (accessible()) {
            view.dispose(getPointer());
            view.cleanAddress();
        }
    }

    @Override
    public Consumer<Long> disposer() {
        return SListView.CLEANER;
    }

    @Override
    public long getPointer() {
        return view.address();
    }

    public void setMovement(ListViewMovement movement) {
        if (accessible(movement)) {
            view.setMovement(getPointer(),movement.getVal());
        }
    }

    public ListViewMovement getMovement() {
        if (accessible()) {
            return ListViewMovement.valueOf(view.movement(getPointer()));
        }
        return null;
    }

    public void setFlow(ListViewFlow flow) {
        if (accessible(flow)) {
            view.setFlow(getPointer(),flow.getVal());
        }
    }
    public ListViewFlow getFlow() {
        if (accessible()) {
            return ListViewFlow.valueOf(view.flow(getPointer()));
        }
        return null;
    }

    public void setWrapping(boolean enable) {
        if (accessible()) {
            view.setWrapping(getPointer(),enable);
        }
    }

    public boolean isWrapping() {
        return accessible() && view.isWrapping(getPointer());
    }

    public void setResizeMode(ListViewResizeMode mode) {
        if (accessible(mode)) {
            view.setResizeMode(getPointer(),mode.getVal());
        }
    }

    public ListViewResizeMode getResizeMode() {
        if (accessible()) {
            return ListViewResizeMode.valueOf(view.resizeMode(getPointer()));
        }
        return null;
    }

    public void setLayoutMode(ListViewLayoutMode mode) {
        if (accessible(mode)) {
            view.setLayoutMode(getPointer(),mode.getVal());
        }
    }

    public ListViewLayoutMode getLayoutMode() {
        if (accessible()) {
            return ListViewLayoutMode.valueOf(view.layoutMode(getPointer()));
        }
        return null;
    }

    public void setSpacing(int space) {
        if (accessible()) {
            view.setSpacing(getPointer(),space);
        }
    }

    public int getSpacing() {
        if (accessible()) {
            return view.spacing(getPointer());
        }
        return 0;
    }

    public void setBatchSize(int batchSize) {
        if (accessible()) {
            view.setBatchSize(getPointer(),batchSize);
        }
    }

    public int getBatchSize() {
        if (accessible()) {
            return view.batchSize(getPointer());
        }
        return 0;
    }

    public void setGridSize(Size size) {
        if (accessible(size)) {
            view.setGridSize(getPointer(),size.getPointer());
        }
    }

    public Size getGridSize() {
        if (accessible()) {
            long pointer = view.gridSize(getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public void setViewMode(ListViewViewMode mode) {
        if (accessible(mode)) {
            view.setViewMode(getPointer(),mode.getVal());
        }
    }

    public ListViewViewMode getViewMode(){
        if (accessible()) {
            return ListViewViewMode.valueOf(view.viewMode(getPointer()));
        }
        return null;
    }

    public void clearPropertyFlags() {
        if (accessible()) {
            view.clearPropertyFlags(getPointer());
        }
    }

    public boolean isRowHidden(int row){
        return accessible() && view.isRowHidden(getPointer(),row);
    }

    public void setRowHidden(int row, boolean hide){
        if (accessible()) {
            view.setRowHidden(getPointer(),row,hide);
        }
    }

    public void setModelColumn(int column) {
        if (accessible()) {
            view.setModelColumn(getPointer(),column);
        }
    }

    public int getModelColumn() {
        if (accessible()) {
            return view.modelColumn(getPointer());
        }
        return 0;
    }

    public void setUniformItemSizes(boolean enable){
        if (accessible()) {
            view.setUniformItemSizes(getPointer(),enable);
        }
    }

    public boolean isUniformItemSizes() {
        return accessible() && view.uniformItemSizes(getPointer());
    }

    public void setWordWrap(boolean on) {
        if (accessible()) {
            view.setWordWrap(getPointer(),on);
        }
    }

    public boolean isWordWrap() {
        return accessible() && view.wordWrap(getPointer());
    }

    public void setSelectionRectVisible(boolean show) {
        if (accessible()) {
            view.setSelectionRectVisible(getPointer(),show);
        }
    }

    public boolean isSelectionRectVisible() {
        return accessible() && view.isSelectionRectVisible(getPointer());
    }

    public void setItemAlignment(Alignment alignment) {
        if (accessible(alignment)) {
            view.setItemAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Alignment getItemAlignment() {
        if (accessible()) {
            return Alignment.valueOf(view.itemAlignment(getPointer()));
        }
        return null;
    }

    public Rect getVisualRect(ModelIndex index){
        if (accessible(index)) {
            long pointer = view.visualRect(getPointer(),index.getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public void scrollTo(ModelIndex index,ItemViewScrollHint hint) {
        if (accessible(index,hint)) {
            view.scrollTo(getPointer(),index.getPointer(),hint.getVal());
        }
    }

    public ModelIndex indexAt(Point p) {
        if (accessible(p)) {
            long pointer = view.indexAt(getPointer(),p.getPointer());
            if (pointer > 0) {
                return ModelIndex.asModelIndex(pointer);
            }
        }
        return null;
    }

    public void doItemsLayout() {
        if (accessible()) {
            view.doItemsLayout(getPointer());
        }
    }

    public void reset() {
        if (accessible()) {
            view.reset(getPointer());
        }
    }

    public void setRootIndex(ModelIndex index) {
        if (accessible(index)){
            view.setRootIndex(getPointer(),index.getPointer());
        }
    }

}
