package org.swdc.qt.internal.widgets;

public class SToolBar extends SWidget {

    public native long create();

    public native void setMovable(long pointer,boolean movable);
    public native boolean isMovable(long pointer);

    public native void setOrientation(long pointer,long orientation);
    public native long orientation(long pointer);

    public native void clear(long pointer);

    public native long addAction(long pointer,String text);
    public native long addAction(long pointer,long icon, String text);

    public native long addSeparator(long pointer);
    public native long insertSeparator(long pointer,long actionBefore);

    public native long addWidget(long pointer,long widget);
    public native long insertWidget(long pointer,long actionBefore, long widget);

    public native long actionGeometry(long pointer,long action);

    public native void setAllowedAreas(long pointer,long areas);
    public native boolean isAreaAllowed(long pointer,long area);

    public native boolean isFloatable(long pointer);
    public native void setFloatable(long pointer,boolean floatable);
    public native boolean isFloating(long pointer);

    public native long iconSize(long pointer);
    public native void setIconSize(long pointer,long iconSize);

    public native int toolButtonStyle(long pointer);
    public native void setToolButtonStyle(long pointer,int toolButtonStyle);

    public native void dispose(long pointer);

}
