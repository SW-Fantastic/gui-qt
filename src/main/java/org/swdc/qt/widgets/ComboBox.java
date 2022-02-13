package org.swdc.qt.widgets;

import org.swdc.qt.beans.ItemDataRole;
import org.swdc.qt.beans.MatchFlag;
import org.swdc.qt.internal.widgets.SComboBox;
import org.swdc.qt.widgets.graphics.Icon;
import org.swdc.qt.widgets.pane.Widget;

import java.util.List;

public class ComboBox extends Widget {

    private SComboBox comboBox = new SComboBox();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = comboBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a combo-box");
        }
        comboBox.address(pointer);
    }

    @Override
    public long getPointer() {
        return comboBox.address();
    }

    public int getMaxVisibleItems() {
        if (getPointer() > 0) {
            return comboBox.maxVisibleItems(getPointer());
        }
        return 0;
    }

    public void setMaxVisibleItems(int maxItems) {
        if (getPointer() > 0) {
            comboBox.setMaxVisibleItems(getPointer(),maxItems);
        }
    }

    public int getCount() {
        if (getPointer() > 0) {
            return comboBox.count(getPointer());
        }
        return 0;
    }

    public void setMaxCount(int max) {
        if (getPointer() > 0) {
            comboBox.setMaxCount(getPointer(),max);
        }
    }

    public int getMaxCount() {
        if (getPointer() > 0) {
            return comboBox.maxCount(getPointer());
        }
        return 0;
    }

    public boolean isDuplicatesEnabled() {
        if (getPointer() > 0) {
            return comboBox.duplicatesEnabled(getPointer());
        }
        return false;
    }

    public void setDuplicatesEnabled(boolean enable) {
        if (getPointer() > 0) {
            comboBox.setDuplicatesEnabled(getPointer(),enable);
        }
    }

    public void setFrame(boolean val) {
        if (getPointer() > 0) {
            comboBox.setFrame(getPointer(),val);
        }
    }

    public boolean hasFrame() {
        if (getPointer() > 0) {
            return comboBox.hasFrame(getPointer());
        }
        return false;
    }

    public int findText(String text, MatchFlag ...matchFlags) {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            int val = comboBox.insertPolicy(getPointer());
            return ComboInsertPolicy.valueOf(val);
        }
        return null;
    }

    public void setInsertPolicy(ComboInsertPolicy policy) {
        if (getPointer() > 0) {
            comboBox.setInsertPolicy(getPointer(),policy.getVal());
        }
    }

    public ComboSizeAdjustPolicy getSizeAdjustPolicy() {
        if (getPointer() > 0 ) {
            int val = comboBox.sizeAdjustPolicy(getPointer());
            return ComboSizeAdjustPolicy.valueOf(val);
        }
        return null;
    }

    public void setSizeAdjustPolicy(ComboSizeAdjustPolicy policy) {
        if (getPointer() > 0 ) {
            comboBox.setSizeAdjustPolicy(getPointer(),policy.getVal());
        }
    }

    public int getMinimumContentsLength() {
        if (getPointer() > 0) {
            return comboBox.minimumContentsLength(getPointer());
        }
        return 0;
    }

    public void setMinimumContentsLength(int characters) {
        if (getPointer() > 0) {
            comboBox.setMinimumContentsLength(getPointer(),characters);
        }
    }

    public Size getIconSize() {
        if (getPointer() > 0) {
            long pointer = comboBox.iconSize(getPointer());
            if (pointer <= 0){
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setIconSize(Size size) {
        if (getPointer() > 0  && size != null && size.getPointer() > 0) {
            comboBox.setIconSize(getPointer(),size.getPointer());
        }
    }

    public void setPlaceholderText(String placeholderText) {
        if (getPointer() > 0) {
            comboBox.setPlaceholderText(getPointer(),placeholderText);
        }
    }

    public String getPlaceholderText() {
        if (getPointer() > 0) {
            return comboBox.placeholderText(getPointer());
        }
        return null;
    }

    public boolean isEditable() {
        if (getPointer() > 0) {
            return comboBox.isEditable(getPointer());
        }
        return false;
    }

    public void setEditable(boolean editable) {
        if (getPointer() > 0) {
            comboBox.setEditable(getPointer(),editable);
        }
    }

    public void setLineEdit(LineEdit edit) {
        if (getPointer() > 0 && edit != null && edit.getPointer() > 0) {
            comboBox.setLineEdit(getPointer(),edit.getPointer());
        }
    }

    public LineEdit getLineEdit() {

        if (getPointer() > 0) {
            long pointer = comboBox.lineEdit(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return LineEdit.asLineEdit(pointer);
        }
        return null;
    }

    public AbstractItemModel getModel() {
        if (getPointer() > 0) {
            long pointer = comboBox.model(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return AbstractItemModel.asAbstractItemModel(pointer);
        }
        return null;
    }

    public void setModel(AbstractItemModel model) {
        if (getPointer() > 0 && model != null && model.getPointer() > 0) {
            comboBox.setModel(getPointer(),model.getPointer());
        }
    }

    public ModelIndex getRootModelIndex() {
        if (getPointer() > 0) {
            long pointer = comboBox.rootModelIndex(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return ModelIndex.asModelIndex(pointer);
        }
        return null;
    }

    public void setRootModelIndex(ModelIndex index) {
        if (getPointer() > 0 && index != null && index.getPointer() > 0) {
            comboBox.setRootModelIndex(getPointer(),index.getPointer());
        }
    }

    public int getModelColumn() {
        if (getPointer() > 0) {
            return comboBox.modelColumn(getPointer());
        }
        return 0;
    }

    public void setModelColumn(int visibleColumn) {
        if (getPointer() > 0) {
            comboBox.setModelColumn(getPointer(),visibleColumn);
        }
    }

    public int getCurrentIndex() {
        if (getPointer() > 0) {
            return comboBox.currentIndex(getPointer());
        }
        return 0;
    }

    public String currentText() {
        if (getPointer() > 0) {
            return comboBox.currentText(getPointer());
        }
        return null;
    }

    public Variant currentData(ItemDataRole role) {
        if (getPointer()  > 0) {
            long pointer = comboBox.currentData(getPointer(),role.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Variant.asVariant(pointer);
        }
        return null;
    }

    public String getItemText(int index) {
        if (getPointer() > 0) {
            return comboBox.itemText(getPointer(),index);
        }
        return null;
    }

    public Icon getItemIcon(int index) {
        if (getPointer() > 0) {
            long pointer = comboBox.itemIcon(getPointer(),index);
            if (pointer <= 0) {
                return null;
            }
            return Icon.asIcon(pointer);
        }
        return null;
    }

    public Variant getItemData(int index, ItemDataRole role) {
        if (getPointer() > 0) {
           long pointer = comboBox.itemData(getPointer(),index,role.getVal());
           if (pointer <= 0) {
               return null;
           }
           return Variant.asVariant(pointer);
        }
        return null;
    }

    public void addItem(String text, Variant userData) {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            comboBox.addItems(getPointer(),texts);
        }
    }

    public void insertItem(int index, String text, Variant data) {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            comboBox.insertItems(getPointer(),index,texts.toArray(new String[0]));
        }
    }

    public void insertSeparator(int index) {
        if (getPointer() > 0) {
            comboBox.insertSeparator(getPointer(),index);
        }
    }

    public void removeItem(int index) {
        if (getPointer() > 0) {
            comboBox.removeItem(getPointer(),index);
        }
    }

    public void setItemText(int index, String text) {
        if (getPointer() > 0) {
            comboBox.setItemText(getPointer(),index,text);
        }
    }

    public void setItemIcon(int index, Icon icon) {
        if (getPointer() > 0) {
            comboBox.setItemIcon(getPointer(),index,icon.getPointer());
        }
    }

    public void setItemData(int index, Variant data, ItemDataRole role) {
        if (getPointer() > 0) {
            comboBox.setItemData(getPointer(),index,
                    (data == null ||data.getPointer() <= 0) ? 0L : data.getPointer(),role.getVal());
        }
    }

    public Size getSizeHint() {
        if (getPointer() > 0) {
            long pointer = comboBox.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = comboBox.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void showPopup(){
        if (getPointer() > 0) {
            comboBox.showPopup(getPointer());
        }
    }

    public void hidePopup() {
        if (getPointer() > 0) {
            comboBox.hidePopup(getPointer());
        }
    }

}
