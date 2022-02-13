package org.swdc.qt.internal.widgets;

public class SMdiArea extends SAbstractScrollArea {

    public native long create(long parent);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native long currentSubWindow(long pointer);
    public native long activeSubWindow(long pointer);
    public native long[] subWindowList(long pointer,int order);

    public native long addSubWindow(long pointer,long widget);
    public native void removeSubWindow(long pointer,long widget);

    public native long background(long pointer);
    public native void setBackground(long pointer,long background);

    public native int activationOrder(long pointer);
    public native void setActivationOrder(long pointer,int order);

    public native void setOption(long pointer,int option, boolean on);
    public native void setViewMode(long pointer,int mode);
    public native int  viewMode(long pointer);

    public native boolean documentMode(long pointer);
    public native void setDocumentMode(long pointer,boolean enabled);

    public native void setTabsClosable(long pointer,boolean closable);
    public native boolean tabsClosable(long pointer);

    public native void setTabsMovable(long pointer,boolean movable);
    public native boolean tabsMovable(long pointer);

    public native void setTabShape(long pointer,int shape);
    public native int tabShape(long pointer);

    public native void setTabPosition(long pointer,int position);
    public native int tabPosition(long pointer);

    public native void setActiveSubWindow(long pointer,long window);
    public native void tileSubWindows(long pointer);
    public native void cascadeSubWindows(long pointer);
    public native void closeActiveSubWindow(long pointer);
    public native void closeAllSubWindows(long pointer);
    public native void activateNextSubWindow(long pointer);
    public native void activatePreviousSubWindow(long pointer);


}
