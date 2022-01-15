package org.swdc.qt.internal.widgets;

public class SMenu extends SWidget {

    public native long create();

    /**
     * add an action on the menu。
     * @param text title of menu item。
     * @return the QAction C++ address。
     */
    public native long addAction(long pointer,String text);


    public native void popup(long pointer,long point);
    public native void popup(long pointer,long widgetPointer,int x,int y);

    public native long icon(long pointer);
    public native void setIcon(long pointer,long icon);

    public native void wrap(long pointer);

    public native long addMenu(long pointer,long menuPointer);
    public native long addMenu(long pointer,String text);
    public native long addMenu(long pointer,long icon,String text);

    public native long addSeparator(long pointer);
    public native long addSection(long pointer,String text);

    public native long insertMenu(long pointer,long beforeActionPointer, long menuPointer);
    public native long insertSeparator(long pointer,long beforeActionPointer);
    public native long insertSection(long pointer,long beforeActionPointer, String text);

    public native void setTearOffEnabled(long pointer,boolean val);
    public native boolean isTearOffEnabled(long pointer);

    public native boolean isTearOffMenuVisible(long pointer);
    public native void showTearOffMenu(long pointer,int x, int y);
    public native void hideTearOffMenu(long pointer);

    public native void setDefaultAction(long pointer,long actionPointer);
    public native void setActiveAction(long pointer, long actionPointer);

    public native boolean separatorsCollapsible(long pointer);
    public native void setSeparatorsCollapsible(long pointer,boolean collapse);

    public native boolean toolTipsVisible(long pointer);
    public native void setToolTipsVisible(long pointer,boolean visible);

    public native String title(long pointer);
    public native void setTitle(long pointer,String title);
    public native boolean isEmpty(long pointer);
    public native void clear(long pointer);

}
