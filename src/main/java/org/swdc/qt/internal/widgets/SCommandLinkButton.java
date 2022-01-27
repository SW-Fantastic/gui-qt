package org.swdc.qt.internal.widgets;

public class SCommandLinkButton extends SAbstractButton {

    public native long create(long parent);
    public native long sizeHint(long pointer);
    public native int heightForWidth(long pointer,int val);
    public native long minimumSizeHint(long pointer);
    public native String description(long pointer);
    public native void setDescription(long pointer,String description);

}
