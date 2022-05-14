package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SPainter extends SPointer {

    private static final SPainter instance = new SPainter();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long createWidget(long widgetPointer);
    public native long createPixmap(long pixmapPointer);

    public native void setCompositionMode(long pointer,int mode);
    public native int compositionMode(long pointer);

    public native boolean isActive(long pointer);

    public native long font(long pointer);
    public native void setFont(long pointer,long font);

    public native void setColorPen(long pointer,long color);
    public native void setPen(long pointer,long penPointer);
    public native void setPen(long pointer,int penStyle);
    public native long pen(long pointer);

    public native void setBrush(long pointer,long brushPointer);
    public native void setBrush(long pointer,int brushStyle);
    public native long brush(long pointer);

    public native void setBackgroundMode(long pointer,int mode);
    public native int backgroundMode(long pointer);

    public native void setBackground(long pointer,long backgroundBrush);
    public native long background(long pointer);

    public native double opacity(long pointer);
    public native void setOpacity(long pointer,double opacity);

    public native void setTransform(long pointer,long transform, boolean combine);
    public native long transform(long pointer);
    public native void resetTransform(long pointer);

    public native void setWorldTransform(long pointer,long transformPointer, boolean combine);
    public native long worldTransform(long pointer);

    public native long combinedTransform(long pointer);

    public native void setWorldMatrixEnabled(long pointer,boolean enabled);
    public native boolean worldMatrixEnabled(long pointer);

    public native void scale(long pointer,double sx, double sy);
    public native void shear(long pointer,double sh, double sv);
    public native void rotate(long pointer,double a);

    public native void translate(long pointer,double dx, double dy);

    public native long window(long pointer);
    public native void setWindow(long pointer,int x, int y, int w, int h);

    public native long viewport(long pointer);
    public native void setViewport(long pointer,int x, int y, int w, int h);

    public native void setViewTransformEnabled(long pointer,boolean enable);
    public native boolean viewTransformEnabled(long pointer);

    public native void strokePath(long pointer,long path, long pen);
    public native void fillPath(long pointer,long path, long brush);
    public native void drawPath(long pointer,long path);

    public native void drawPoint(long pointer,int x, int y);
    public native void drawPoint(long pointer, long point);
    public native void drawPoints(long pointer, long[] point);

    public native void drawLine(long pointer,int x1, int y1, int x2, int y2);
    public native void drawLine(long pointer,long p1, long p2);
    public native void drawLine(long pointer,long line);

    public native void drawRect(long pointer,int x1, int y1, int w, int h);
    public native void drawRect(long pointer,long rect);
    public native void drawRealRect(long pointer,long realRect);

    public native void drawEllipse(long pointer,int x, int y, int w, int h);
    public native void drawEllipse(long pointer,long rect);
    public native void drawRealEllipse(long pointer, long rect);

    public native void drawArc(long pointer,int x, int y, int w, int h, int a, int alen);
    public native void drawArc(long pointer,long rect, int a, int alen);
    public native void drawRealArc(long pointer,long rect, int a, int alen);

    public native void drawPie(long pointer,int x, int y, int w, int h, int a, int alen);
    public native void drawPie(long pointer,long rect, int a, int alen);
    public native void drawRealPie(long pointer,long rect, int a, int alen);

    public native void drawChord(long pointer,int x, int y, int w, int h, int a, int alen);
    public native void drawChord(long pointer, long rect,int a, int alen);
    public native void drawRealChord(long pointer, long rect,int a, int alen);

    public native void drawRoundedRect(long pointer,int x, int y, int w, int h, double xRadius, double yRadius,
                                       int sizeMode);
    public native void drawRoundedRect(long pointer,long rect, double xRadius, double yRadius,
                                           int sizeMode);
    public native void drawRealRoundedRect(long pointer,long rect, double xRadius, double yRadius,
                                           int sizeMode);

    public native void drawTiledPixmap(long pointer,int x, int y, int w, int h, long pixmapPointer, int sx, int sy);



    public native void drawPixmap(long pointer,int x, int y, int w, int h, long pm,
                           int sx, int sy, int sw, int sh);
    public native void drawPixmap(long pointer,int x, int y, long pm,
                           int sx, int sy, int sw, int sh);

    public native void drawPixmapPoint(long pointer,long pointPointer, long pm, long sourceRect);
    public native void drawPixmapRealPoint(long pointer,long pointPointer,long pm, long sourceRect);
    public native void drawPixmap(long pointer,long targetRect,long pixmap, long sourceRect);
    public native void drawRealPixmap(long pointer,long targetRect, long pixmap, long sourceRect);

    public native void drawPixmapRealPoint(long pointer,long pointPointer, long pm);
    public native void drawPixmap(long pointer,long pointPointer,long pm);
    public native void drawPixmapRect(long pointer,long rectPointer, long pm);
    public native void drawPixmap(long pointer,int x, int y, long pm);
    public native void drawPixmap(long pointer,int x, int y, int w, int h, long pm);

    public native void drawImage(long pointer,int x, int y, long image, int sx, int sy,
                          int sw, int sh, long conversation);
   // public native void drawStaticText(int left, int top, const QStaticText &staticText);

    public native void drawText(long pointer,int x, int y, String s);
    public native void drawText(long pointer,int x, int y, int w, int h, int flags, String text);

    public native void drawTextRealRect(long pointer,long rect, int flags, String text);
    public native void drawTextRect(long pointer,long rect, int flags, String text);

    public native void drawText(long pointer,long pointPointer,String s);
    public native void drawRealText(long pointer,long pointPointer, String s);


    public native long boundingRect(long pointer,int x, int y, int w, int h, int flags, String text);

    //public void drawTextItem(int x, int y, const QTextItem &ti);

    public native void fillRectBrush(long pointer,int x, int y, int w, int h, long brushPointer);
    public native void fillRect(long pointer, long rect, long brush);
    public native void fillRealRect(long pointer, long realRect, long brush);

    public native void fillRect(long pointer,int x, int y, int w, int h, long color);
    public native void fillColorRect(long pointer,long rectPointer,long color);
    public native void fillColorRealRect(long pointer,long rectPointer,long color);

    public native void fillRect(long pointer,int x, int y, int w, int h, int brushStyle);
    public native void fillRect(long pointer,long rect, int brushStyle);
    public native void fillRealRect(long pointer,long rect, int brushStyle);

    public native void fillRectWithPresetGradient(long pointer,int x, int y, int w, int h, int preset);
    public native void fillRectWithRectPresetGradient(long pointer,long rectPointer, int preset);
    public native void fillRealRectWithRectPresetGradient(long pointer,long rect, int preset);

    public native void eraseRect(long pointer,int x, int y, int w, int h);
    public native void eraseRect(long pointer,long rect);
    public native void eraseRealRect(long pointer, long rect);

    public native void setRenderHint(long pointer,long hint, boolean on);
    public native void setRenderHints(long pointer,long hints, boolean on);

    public native void dispose(long pointer);


}
