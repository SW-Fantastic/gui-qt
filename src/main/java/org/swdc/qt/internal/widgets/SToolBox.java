package org.swdc.qt.internal.widgets;

public class SToolBox extends SFrame {

    public native long create(long parent);

    public native int addItem(long pointer,long widget, String text);
    public native int addItem(long pointer,long widget, long icon, String text);
    public native int insertItem(long pointer,int index,long widget,String text);
    public native int insertItem(long pointer,int index,long widget, long icon, String text);

    public native void removeItem(long pointer,int index);

    public native void setItemEnabled(long pointer,int index, boolean enabled);
    public native boolean isItemEnabled(long pointer,int index);

    public native void setItemText(long pointer,int index, String text);
    public native String itemText(long pointer,int index);

    public native void setItemIcon(long pointer,int index,long icon);
    public native long itemIcon(long pointer,int index);

    public native void setItemToolTip(long pointer,int index,String toolTip);
    public native String itemToolTip(long pointer,int index);

    public native int currentIndex(long pointer);
    public native long currentWidget(long pointer);
    public native long widget(long pointer,int index);
    public native int indexOf(long pointer,long widget);
    public native int count(long pointer);

}
