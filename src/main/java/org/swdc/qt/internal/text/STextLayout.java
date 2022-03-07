package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextLayout extends SPointer {

    public native long create();
    public native long create(String text);
    public native void dispose(long pointer);

    public native void setFont(long font);
    public native long font();

    public native void setText(String string);
    public native String text();

    //void setTextOption(TextOption option);
    //const QTextOption &textOption() const;

    public native void setPreeditArea(int position, String text);
    public native int preeditAreaPosition();
    public native String preeditAreaText();


}
