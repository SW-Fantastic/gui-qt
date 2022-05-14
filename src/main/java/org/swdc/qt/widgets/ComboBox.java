package org.swdc.qt.widgets;

import org.swdc.qt.beans.ItemDataRole;
import org.swdc.qt.beans.MatchFlag;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SComboBox;
import org.swdc.qt.widgets.graphics.Icon;
import org.swdc.qt.widgets.pane.Widget;

import java.util.List;

public class ComboBox extends Widget {

    private SComboBox comboBox = new SComboBox();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = comboBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a combo-box");
        }
        comboBox.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public long getPointer() {
        return comboBox.address();
    }

    public int getMaxVisibleItems() {
        if (accessible()) {
            return comboBox.maxVisibleItems(getPointer());
        }
        return 0;
    }

    public void setMaxVisibleItems(int maxItems) {
        if (accessible()) {
            comboBox.setMaxVisibleItems(getPointer(),maxItems);
        }
    }

    public int getCount() {
        if (accessible()) {
            return comboBox.count(getPointer());
        }
        return 0;
    }

    public void setMaxCount(int max) {
        if (accessible()) {
            comboBox.setMaxCount(getPointer(),max);
        }
    }

    public int getMaxCount() {
        if (accessible()) {
            return comboBox.maxCount(getPointer());
        }
        return 0;
    }

    public boolean isDuplicatesEnabled() {
        if (accessible()) {
            return comboBox.duplicatesEnabled(getPointer());
        }
        return false;
    }

    public void setDuplicatesEnabled(boolean enable) {
        if (accessible()) {
            comboBox.setDuplicatesEnabled(getPointer(),enable);
        }
    }

    public void setFrame(boolean val) {
        if (accessible()) {
            comboBox.setFrame(getPointer(),val);
        }
    }

    public boolean hasFrame() {
        if (accessible()) {
            return comboBox.hasFrame(getPointer());
        }
        return false;
    }

    public int findText(String text, MatchFlag ...matchFlags) {
        if (accessible(text,matchFlags)) {
            int flag = 0;
            if (matchFlags.length > 0) {
                flag = matchFlags[0].getVal();
                for (int idx = 1; idx < matchFlags.length; idx ++) {
                    flag = flag | matchFlags[idx].getVal();
                }
            }
            return comboBox.findText(getPointer(),text,flag);
        }
        return 0;
    }

    public ComboInsertPolicy getInsertPolicy() {
        if (accessible()) {
            int val = comboBox.insertPolicy(getPointer());
            return ComboInsertPolicy.valueOf(val);
        }
        return null;
    }

    public void setInsertPolicy(ComboInsertPolicy policy) {
        if (accessible()) {
            comboBox.setInsertPolicy(getPointer(),policy.getVal());
        }
    }

    public ComboSizeAdjustPolicy getSizeAdjustPolicy() {
        if (accessible() ) {
            int val = comboBox.sizeAdjustPolicy(getPointer());
            return ComboSizeAdjustPolicy.valueOf(val);
        }
        return null;
    }

    public void setSizeAdjustPolicy(ComboSizeAdjustPolicy policy) {
        if (accessible() ) {
            comboBox.setSizeAdjustPolicy(getPointer(),policy.getVal());
        }
    }

    public int getMinimumContentsLength() {
        if (accessible()) {
            return comboBox.minimumContentsLength(getPointer());
        }
        return 0;
    }

    public void setMinimumContentsLength(int characters) {
        if (accessible()) {
            comboBox.setMinimumContentsLength(getPointer(),characters);
        }
    }

    public Size getIconSize() {
        if (accessible()) {
            long pointer = comboBox.iconSize(getPointer());
            if (pointer <= 0){
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setIconSize(Size size) {
        if (accessible(size)) {
            comboBox.setIconSize(getPointer(),size.getPointer());
        }
    }

    public void setPlaceholderText(String placeholderText) {
        if (accessible(placeholderText)) {
            comboBox.setPlaceholderText(getPointer(),placeholderText);
        }
    }

    public String getPlaceholderText() {
        if (accessible()) {
            return comboBox.placeholderText(getPointer());
        }
        return null;
    }

    public boolean isEditable() {
        if (accessible()) {
            return comboBox.isEditable(getPointer());
        }
        return false;
    }

    public void setEditable(boolean editable) {
        if (accessible()) {
            comboBox.setEditable(getPointer(),editable);
        }
    }

    public void setLineEdit(LineEdit edit) {
        if (accessible(edit)) {
            comboBox.setLineEdit(getPointer(),edit.getPointer());
        }
    }

    public LineEdit getLineEdit() {

        if (accessible()) {
            long pointer = comboBox.lineEdit(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return LineEdit.asLineEdit(pointer);
        }
        return null;
    }

    public AbstractItemModel getModel() {
        if (accessible()) {
            long pointer = comboBox.model(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return AbstractItemModel.asAbstractItemModel(pointer);
        }
        return null;
    }

    public void setModel(AbstractItemModel model) {
        if (accessible(model)) {
            comboBox.setModel(getPointer(),model.getPointer());
        }
    }

    public ModelIndex getRootModelIndex() {
        if (accessible()) {
            long pointer = comboBox.rootModelIndex(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return ModelIndex.asModelIndex(pointer);
        }
        return null;
    }

    public void setRootModelIndex(ModelIndex index) {
        if (accessible(index)) {
            comboBox.setRootModelIndex(getPointer(),index.getPointer());
        }
    }

    public int getModelColumn() {
        if (accessible()) {
            return comboBox.modelColumn(getPointer());
        }
        return 0;
    }

    public void setModelColumn(int visibleColumn) {
        if (accessible()) {
            comboBox.setModelColumn(getPointer(),visibleColumn);
        }
    }

    public int getCurrentIndex() {
        if (accessible()) {
            return comboBox.currentIndex(getPointer());
        }
        return 0;
    }

    public String currentText() {
        if (accessible()) {
            return comboBox.currentText(getPointer());
        }
        return null;
    }

    public Variant currentData(ItemDataRole role) {
        if (accessible(role)) {
            long pointer = comboBox.currentData(getPointer(),role.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Variant.asVariant(pointer);
        }
        return null;
    }

    public String getItemText(int index) {
        if (accessible()) {
            return comboBox.itemText(getPointer(),index);
        }
        return null;
    }

    public Icon getItemIcon(int index) {
        if (accessible()) {
            long pointer = comboBox.itemIcon(getPointer(),index);
            if (pointer <= 0) {
                return null;
            }
            return Icon.asIcon(pointer);
        }
        return null;
    }

    public Variant getItemData(int index, ItemDataRole role) {
        if (accessible(role)) {
           long pointer = comboBox.itemData(getPointer(),index,role.getVal());
           if (pointer <= 0) {
               return null;
           }
           return Variant.asVariant(pointer);
        }
        return null;
    }

    public void addItem(String text, Variant userData) {
        if (accessible(text)) {
            comboBox.addItem(getPointer(),text,
                    (userData == null || userData.getPointer() <= 0) ? 0L : userData.getPointer());
        }
    }

    public void addItem(Icon icon, String text,Variant userData) {
        if (icon == null || icon.getPointer() <= 0) {
            return;
        }
        if (getPointer() <= 0) {
            return;
        }
        comboBox.addItem(getPointer(),icon.getPointer(),text,
                (userData == null || userData.getPointer() <= 0) ? 0L : userData.getPointer());
    }

    public void addItems(String... texts) {
        if (accessible()) {
            comboBox.addItems(getPointer(),texts);
        }
    }

    public void insertItem(int index, String text, Variant data) {
        if (accessible(text)) {
            comboBox.insertItem(getPointer(),index,text,
                    (data == null || data.getPointer() <= 0) ? 0L :data.getPointer());
        }
    }

    public void insertItem(int index, Icon icon, String text,Variant data) {
        if (getPointer() <= 0) {
            return;
        }
        if (icon == null || icon.getPointer() <= 0) {
            return;
        }
        comboBox.insertItem(getPointer(),index,icon.getPointer(),text,
                (data == null || data.getPointer() <= 0) ? 0L : data.getPointer());
    }

    public void insertItems(int index,List<String> texts) {
        if (accessible(texts)) {
            comboBox.insertItems(getPointer(),index,texts.toArray(new String[0]));
        }
    }

    public void insertSeparator(int index) {
        if (accessible()) {
            comboBox.insertSeparator(getPointer(),index);
        }
    }

    public void removeItem(int index) {
        if (accessible()) {
            comboBox.removeItem(getPointer(),index);
        }
    }

    public void setItemText(int index, String text) {
        if (accessible(text)) {
            comboBox.setItemText(getPointer(),index,text);
        }
    }

    public void setItemIcon(int index, Icon icon) {
        if (accessible(icon)) {
            comboBox.setItemIcon(getPointer(),index,icon.getPointer());
        }
    }

    public void setItemData(int index, Variant data, ItemDataRole role) {
        if (accessible(role)) {
            comboBox.setItemData(getPointer(),index,
                    (data == null ||data.getPointer() <= 0) ? 0L : data.getPointer(),role.getVal());
        }
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = comboBox.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (accessible()) {
            long pointer = comboBox.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void showPopup(){
        if (accessible()) {
            comboBox.showPopup(getPointer());
        }
    }

    public void hidePopup() {
        if (accessible()) {
            comboBox.hidePopup(getPointer());
        }
    }

}
