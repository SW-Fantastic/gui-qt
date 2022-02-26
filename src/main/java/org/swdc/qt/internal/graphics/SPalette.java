package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class SPalette extends SPointer {

    public native long create();
    public native long create(long button, long window);
    public native long create(long windowTextBrush,long buttonBrush,long lightBrush,
             long darkBrush,long midBrush,long textBrush,
             long brightTextBrush,long baseBrush,long windowBrush);
    public native long create(long windowText,long window,long light,
             long dark, long mid,long text,long base);
    public native long create(long anotherPalette);

    public native void dispose(long pointer);


    public native int currentColorGroup(long pointer);
    public native void setCurrentColorGroup(long pointer,int cg);

    public native long color(long pointer,int cg,int cr);
    public native long brush(long pointer,int cg,int cr);
    public native void setColor(long pointer,int cg, int cr,long color);
    public native void setColor(long pointer,int cr, long color);
    public native void setBrush(long pointer,int cr,long brush);
    public native boolean isBrushSet(long pointer,int cg,int cr);
    public native void setBrush(long pointer,int cg, int cr,long brush);
    public native void setColorGroup(long pointer,int cr, long windowText,long button,
                       long light,long dark,long mid,
                       long text,long bright_text,long base,
                       long window);
    public native boolean isEqual(long pointer,int cr1,int cr2);

    public native long color(long pointer,int cr);
    public native long brush(long pointer,int cr);
    public native long windowText(long pointer);
    public native long button(long pointer);
    public native long light(long pointer);
    public native long dark(long pointer);
    public native long mid(long pointer);
    public native long text(long pointer);
    public native long base(long pointer);
    public native long alternateBase(long pointer);
    public native long toolTipBase(long pointer);
    public native long toolTipText(long pointer);
    public native long window(long pointer);
    public native long midlight(long pointer);
    public native long brightText(long pointer);
    public native long buttonText(long pointer);
    public native long shadow(long pointer);
    public native long highlight(long pointer);
    public native long highlightedText(long pointer);
    public native long link(long pointer);
    public native long linkVisited(long pointer);
    public native long placeholderText(long pointer);


}
