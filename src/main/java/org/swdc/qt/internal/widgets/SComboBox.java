package org.swdc.qt.internal.widgets;

public class SComboBox extends SWidget {

    public native long create(long parentPointer);

    public native int maxVisibleItems(long pointer);
    public native void setMaxVisibleItems(long pointer,int maxItems);

    public native int count(long pointer);
    public native void setMaxCount(long pointer,int max);
    public native int maxCount(long pointer);

    public native boolean duplicatesEnabled(long pointer);
    public native void setDuplicatesEnabled(long pointer,boolean enable);

    public native void setFrame(long pointer,boolean val);
    public native boolean hasFrame(long pointer);

    public native int findText(long pointer,String text, int matchFlag);

    public native int insertPolicy(long pointer);
    public native void setInsertPolicy(long pointer,int policy);

    public native int sizeAdjustPolicy(long pointer);
    public native void setSizeAdjustPolicy(long pointer,int policy);

    public native int minimumContentsLength(long pointer);
    public native void setMinimumContentsLength(long pointer,int characters);
    public native long iconSize(long pointer);
    public native void setIconSize(long pointer,long size);

    public native void setPlaceholderText(long pointer,String placeholderText);
    public native String placeholderText(long pointer);

    public native boolean isEditable(long pointer);
    public native void setEditable(long pointer,boolean editable);
    public native void setLineEdit(long pointer,long edit);
    public native long lineEdit(long pointer);

    public native long model(long pointer);
    public native void setModel(long pointer,long model);

    public native long rootModelIndex(long pointer);
    public native void setRootModelIndex(long pointer,long index);

    public native int modelColumn(long pointer);
    public native void setModelColumn(long pointer,int visibleColumn);

    public native int currentIndex(long pointer);
    public native String currentText(long pointer);
    public native long currentData(long pointer,int role);

    public native String itemText(long pointer,int index);
    public native long itemIcon(long pointer,int index);
    public native long itemData(long pointer,int index, int role);

    public native void addItem(long pointer,String text, long userData);
    public native void addItem(long pointer,long icon, String text,long userData);
    public native void addItems(long pointer,String[] texts);

    public native void insertItem(long pointer,int index, String text, long data);
    public native void insertItem(long pointer,int index, long iconPointer, String text,long pointerData);
    public native void insertItems(long pointer,int index,String[] texts);
    public native void insertSeparator(long pointer,int index);

    public native void removeItem(long pointer,int index);

    public native void setItemText(long pointer,int index, String text);
    public native void setItemIcon(long pointer,int index, long iconPointer);
    public native void setItemData(long pointer,int index, long valuePointer, int role);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native void showPopup(long pointer);
    public native void hidePopup(long pointer);

}
