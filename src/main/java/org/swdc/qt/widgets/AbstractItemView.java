package org.swdc.qt.widgets;

import org.swdc.qt.beans.*;
import org.swdc.qt.internal.widgets.SAbstractItemView;
import org.swdc.qt.widgets.pane.AbstractScrollArea;
import org.swdc.qt.widgets.pane.Widget;

public abstract class AbstractItemView<T> extends AbstractScrollArea {

    private SAbstractItemView itemView = new SAbstractItemView();
    private ItemModel<T> model;

    public void setModel(ItemModel<T> model) {
        if (accessible(model)) {
            itemView.setModel(getPointer(),model.getPointer());
            this.model = model;
        }
    }

    public ItemModel<T> getModel() {
        return model;
    }

    public void setSelectionModel(ItemSelectionModel selectionModel) {
        if (accessible(selectionModel)) {
            itemView.setSelectionModel(getPointer(),selectionModel.getPointer());
        }
    }

    public ItemSelectionModel getSelectionModel() {
        if (accessible()) {
            long pointer = itemView.selectionModel(getPointer());
            if (pointer > 0) {
                return ItemSelectionModel.asSelectionModel(pointer);
            }
        }
        return null;
    }

    public void setSelectionMode(ItemViewSelectionMode mode) {
        if (accessible(mode)) {
            itemView.setSelectionMode(getPointer(),mode.getVal());
        }
    }

    public ItemViewSelectionMode getSelectionMode(){
        if (accessible()) {
            return ItemViewSelectionMode.valueOf(itemView.selectionMode(getPointer()));
        }
        return null;
    }

    public void setSelectionBehavior(ItemViewSelectionBehavior behavior) {
        if (accessible(behavior)) {
            itemView.setSelectionBehavior(getPointer(),behavior.getVal());
        }
    }

    public ItemViewSelectionBehavior getSelectionBehavior() {
        if (accessible()) {
            return ItemViewSelectionBehavior.valueOf(itemView.selectionBehavior(getPointer()));
        }
        return null;
    }

    public ModelIndex getCurrentIndex() {
        if (accessible()) {
            long pointer = itemView.currentIndex(getPointer());
            if (pointer > 0) {
                return ModelIndex.asModelIndex(pointer);
            }
        }
        return null;
    }

    public ModelIndex getRootIndex() {
        if (accessible()) {
            long pointer = itemView.rootIndex(getPointer());
            if (pointer > 0) {
                return ModelIndex.asModelIndex(pointer);
            }
        }
        return null;
    }

    public void setEditTriggers(ItemViewEditTrigger triggers) {
        if (accessible(triggers)) {
            itemView.setEditTriggers(getPointer(),triggers.getVal());
        }
    }

    public void setVerticalScrollMode(ItemViewScrollMode mode) {
        if (accessible(mode)) {
            itemView.setVerticalScrollMode(getPointer(),mode.getVal());
        }
    }

    public ItemViewScrollMode getVerticalScrollMode() {
        if (accessible()) {
            return ItemViewScrollMode.valueOf(itemView.verticalScrollMode(getPointer()));
        }
        return null;
    }

    public void resetVerticalScrollMode() {
        if (accessible()) {
            itemView.resetVerticalScrollMode(getPointer());
        }
    }

    public void setHorizontalScrollMode(ItemViewScrollMode mode) {
        if (accessible(mode)) {
            itemView.setHorizontalScrollMode(getPointer(),mode.getVal());
        }
    }

    public ItemViewScrollMode getHorizontalScrollMode()  {
        if (accessible()) {
            return ItemViewScrollMode.valueOf(itemView.horizontalScrollMode(getPointer()));
        }
        return null;
    }

    public void resetHorizontalScrollMode() {
        if (accessible()) {
            itemView.resetHorizontalScrollMode(getPointer());
        }
    }

    public void setAutoScroll(boolean enable) {
        if (accessible()) {
            itemView.setAutoScroll(getPointer(),enable);
        }
    }

    public boolean hasAutoScroll() {
        if (accessible()) {
            return itemView.hasAutoScroll(getPointer());
        }
        return false;
    }

    public void setAutoScrollMargin(int margin) {
        if (accessible()) {
            itemView.setAutoScrollMargin(getPointer(),margin);
        }
    }

    public int getAutoScrollMargin() {
        if (accessible()) {
            return itemView.autoScrollMargin(getPointer());
        }
        return 0;
    }

    public void setTabKeyNavigation(boolean enable) {
        if (accessible()) {
            itemView.setTabKeyNavigation(getPointer(),enable);
        }
    }

    public boolean getTabKeyNavigation() {
        if (accessible()) {
            return itemView.tabKeyNavigation(getPointer());
        }
        return false;
    }

    public void setDropIndicatorShown(boolean enable) {
        if (accessible()) {
            itemView.setDropIndicatorShown(getPointer(),enable);
        }
    }

    public boolean getShowDropIndicator() {
        if (accessible()) {
            return itemView.showDropIndicator(getPointer());
        }
        return false;
    }

    public void setDragEnabled(boolean enable) {
        if (accessible()) {
            itemView.setDragEnabled(getPointer(),enable);
        }
    }

    public boolean isDragEnabled() {
        if (accessible()) {
            return itemView.dragEnabled(getPointer());
        }
        return false;
    }

    public void setDragDropOverwriteMode(boolean overwrite){
        if (accessible()) {
            itemView.setDragDropOverwriteMode(getPointer(),overwrite);
        }
    }

    public boolean isDragDropOverwriteMode() {
        if (accessible()) {
            return itemView.dragDropOverwriteMode(getPointer());
        }
        return false;
    }

    public void setDragDropMode(ItemViewDragMode dragMode){
        if (accessible(dragMode)) {
            itemView.setDragDropMode(getPointer(),dragMode.getVal());
        }
    }

    public ItemViewDragMode getDragDropMode() {
        if (accessible()) {
            return ItemViewDragMode.valueOf(itemView.dragDropMode(getPointer()));
        }
        return null;
    }

    public void setDefaultDropAction(DropAction dropAction) {
        if (accessible(dropAction)) {
            itemView.setDefaultDropAction(getPointer(),dropAction.getVal());
        }
    }

    public DropAction getDefaultDropAction() {
        if (accessible()) {
            return DropAction.valueOf(itemView.defaultDropAction(getPointer()));
        }
        return null;
    }

    public void setAlternatingRowColors(boolean enable) {
        if (accessible()) {
            itemView.setAlternatingRowColors(getPointer(),enable);
        }
    }

    public boolean isAlternatingRowColors() {
        return accessible() && itemView.alternatingRowColors(getPointer());
    }

    public void setIconSize(Size size) {
        if (accessible(size)) {
            itemView.setIconSize(getPointer(),size.getPointer());
        }
    }

    public Size getIconSize() {
        if (accessible()) {
            long pointer = itemView.iconSize(getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public void setTextElideMode(TextElideMode mode) {
        if (accessible(mode)) {
            itemView.setTextElideMode(getPointer(),mode.getVal());
        }
    }

    public TextElideMode getTextElideMode() {
        if (accessible()) {
            return TextElideMode.valueOf(itemView.textElideMode(getPointer()));
        }
        return null;
    }

    public void keyboardSearch(String search) {
        if (accessible(search)) {
            itemView.keyboardSearch(getPointer(),search);
        }
    }

    public Rect getVisualRect(ModelIndex index) {
        if (accessible(index)) {
            long pointer = itemView.visualRect(getPointer(),index.getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public void scrollTo(ModelIndex index, ItemViewScrollHint hint) {
        if (accessible(index,hint)) {
            itemView.scrollTo(getPointer(),index.getPointer(),hint.getVal());
        }
    }

    public ModelIndex indexAt(Point point) {
        if (accessible(point)) {
            long pointer = itemView.indexAt(getPointer(),point.getPointer());
            if (pointer > 0) {
                return ModelIndex.asModelIndex(pointer);
            }
        }
        return null;
    }

    public Size sizeHintForIndex(ModelIndex index) {
        if (accessible(index)) {
            long pointer = itemView.sizeHintForIndex(getPointer(),index.getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public int sizeHintForRow(int row) {
        if (accessible()) {
            return itemView.sizeHintForRow(getPointer(),row);
        }
        return 0;
    }

    public int sizeHintForColumn(int column) {
        if (accessible()) {
            return itemView.sizeHintForColumn(getPointer(),column);
        }
        return 0;
    }

    public void openPersistentEditor(ModelIndex index){
        if (accessible(index)) {
            itemView.openPersistentEditor(getPointer(),index.getPointer());
        }
    }

    public void closePersistentEditor(ModelIndex index) {
        if (accessible(index)) {
            itemView.closePersistentEditor(getPointer(),index.getPointer());
        }
    }

    public boolean isPersistentEditorOpen(ModelIndex index) {
        if (accessible(index)) {
            return itemView.isPersistentEditorOpen(getPointer(),index.getPointer());
        }
        return false;
    }

    public void setIndexWidget(ModelIndex index, Widget widget) {
        if (accessible(index,widget)) {
            itemView.setIndexWidget(getPointer(),index.getPointer(),widget.getPointer());
        }
    }

    public Widget getIndexWidget(ModelIndex index){
        if (accessible(index)) {
            long pointer = itemView.indexWidget(getPointer(),index.getPointer());
            if (pointer > 0 ){
                return Widget.asWidget(pointer);
            }
        }
        return null;
    }

    public Variant inputMethodQuery(InputMethodQuery query) {
        if (accessible(query)) {
            long pointer = itemView.inputMethodQuery(getPointer(),query.getVal());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public void reset() {
        if (accessible()) {
            itemView.reset(getPointer());
        }
    }

    public void setRootIndex(ModelIndex index) {
        if (accessible(index)) {
            itemView.setRootIndex(getPointer(),index.getPointer());
        }
    }

    public void doItemsLayout() {
        if (accessible()) {
            itemView.doItemsLayout(getPointer());
        }
    }

    public void selectAll() {
        if (accessible()) {
            itemView.selectAll(getPointer());
        }
    }

    public void edit(ModelIndex index) {
        if (accessible(index)) {
            itemView.edit(getPointer(),index.getPointer());
        }
    }

    public void clearSelection() {
        if (accessible()) {
            itemView.clearSelection(getPointer());
        }
    }

    public void setCurrentIndex(ModelIndex index) {
        if (accessible(index)){
            itemView.setCurrentIndex(getPointer(),index.getPointer());
        }
    }

    public void scrollToTop() {
        if (accessible()) {
            itemView.scrollToTop(getPointer());
        }
    }

    public void scrollToBottom() {
        if (accessible()) {
            itemView.scrollToBottom(getPointer());
        }
    }

    public void update(ModelIndex index){
        if (accessible(index)) {
            itemView.update(getPointer(),index.getPointer());
        }
    }

}
