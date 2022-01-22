package org.swdc.qt.internal.dialogs;

public class SMessageDialog extends SDialog {

    public native long create(long parent);
    public native void addButton(long pointer,long button, int role);
    public native long addButton(long pointer,String text, int role);
    public native long addButton(long pointer, int button);
    public native void removeButton(long pointer,long button);

    public native long[] buttons(long pointer);
    public native int buttonRole(long pointer,long button);

    public native void setStandardButtons(long pointer,int buttons);
    public native int standardButton(long pointer,long button);
    public native long button(long pointer,int stdButton);

    public native long defaultButton(long pointer);
    public native void setDefaultButton(long pointer,long button);
    public native void setDefaultButton(long pointer,int button);

    public native long escapeButton(long pointer);
    public native void setEscapeButton(long pointer,long button);
    public native void setEscapeButton(long pointer,int button);

    public native long clickedButton(long pointer);

    public native String text(long pointer);
    public native void setText(long pointer,String text);

    public native int icon(long pointer);
    public native void setIcon(long pointer,int icon);

    public native long iconPixmap(long pointer);
    public native void setIconPixmap(long pointer,long pixmap);

    public native String informativeText(long pointer);
    public native void setInformativeText(long pointer,String text);

    public native void dispose(long pointer);


}
