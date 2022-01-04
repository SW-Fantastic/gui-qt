package org.swdc.qt.internal.widgets;

import org.swdc.qt.beans.SSize;

public class SToolButton extends SAbstractButton {

    public native long create();
    public native SSize sizeHint(long pointer);
    public native SSize minimumSizeHint(long pointer);

    public native void setToolButtonStyle(long pointer,int style);
    public native int toolButtonStyle(long pointer);

    public native void setAutoRaise(long pointer,boolean enable);
    public native boolean autoRaise(long pointer);

    public native int arrowType(long pointer);
    public native void setArrowType(long pointer,int type);

    public native void setMenu(long pointer,long menuPointer);
    public native void setPopupMode(long pointer,int mode);
    public native int popupMode(long pointer);
    public native void showMenu(long pointer);

    public native void setDefaultAction(long pointer,long actionPointer);

}
