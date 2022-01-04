package org.swdc.qt.internal.graphics;

import org.swdc.qt.beans.SRect;
import org.swdc.qt.internal.SPointer;

public class SPainter extends SPointer {

    public native long createWidget(long widgetPointer);
    public native long createPixmap(long pixmapPointer);

    public native void setCompositionMode(long pointer,int mode);
    public native int compositionMode(long pointer);

    public native boolean isActive(long pointer);

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

    public native SRect window(long pointer);
    public native void setWindow(long pointer,int x, int y, int w, int h);

    public native SRect viewport(long pointer);
    public native void setViewport(long pointer,int x, int y, int w, int h);

    public native void setViewTransformEnabled(long pointer,boolean enable);
    public native boolean viewTransformEnabled(long pointer);

   // public native void strokePath(QPainterPath &path, const QPen &pen);
   // void fillPath(const QPainterPath &path, const QBrush &brush);
   // void drawPath(const QPainterPath &path);

    public native void drawPoint(long pointer,int x, int y);
    public native void drawLine(long pointer,int x1, int y1, int x2, int y2);
    public native void drawRect(long pointer,int x1, int y1, int w, int h);
    public native void drawEllipse(long pointer,int x, int y, int w, int h);
    public native void drawArc(long pointer,int x, int y, int w, int h, int a, int alen);
    public native void drawPie(long pointer,int x, int y, int w, int h, int a, int alen);
    public native void drawChord(long pointer,int x, int y, int w, int h, int a, int alen);
    public native void drawRoundedRect(long pointer,int x, int y, int w, int h, double xRadius, double yRadius,
                                int sizeMode);

    public native void drawTiledPixmap(long pointer,int x, int y, int w, int h, long pixmapPointer, int sx, int sy);
    public native void drawPixmap(long pointer,int x, int y, int w, int h, long pm,
                           int sx, int sy, int sw, int sh);
    public native void drawPixmap(long pointer,int x, int y, long pm,
                           int sx, int sy, int sw, int sh);
    public native void drawPixmap(long pointer,int x, int y, long pm);
    public native void drawPixmap(long pointer,int x, int y, int w, int h, long pm);

    public native void drawImage(long pointer,int x, int y, long image, int sx, int sy,
                          int sw, int sh, long conversation);
   // public native void drawStaticText(int left, int top, const QStaticText &staticText);

    public native void drawText(long pointer,int x, int y, String s);
    public native void drawText(long pointer,int x, int y, int w, int h, int flags, String text);
    public native SRect boundingRect(long pointer,int x, int y, int w, int h, int flags, String text);

    //public void drawTextItem(int x, int y, const QTextItem &ti);

    public native void fillRectBrush(long pointer,int x, int y, int w, int h, long brushPointer);
    public native void fillRect(long pointer,int x, int y, int w, int h, long color);
    public native void fillRect(long pointer,int x, int y, int w, int h, int brushStyle);

    //public void fillRect(int x, int y, int w, int h, QGradient::Preset preset);
    //public void fillRect(const QRect &r, QGradient::Preset preset);
    //public void fillRect(const QRectF &r, QGradient::Preset preset);

    public native void eraseRect(long pointer,int x, int y, int w, int h);

    //void setRenderHint(RenderHint hint, bool on = true);
    //void setRenderHints(RenderHints hints, bool on = true);
    //RenderHints renderHints() const;
    //public bool testRenderHint(RenderHint hint) const { return renderHints() & hint; }

    public native void dispose(long pointer);


}
