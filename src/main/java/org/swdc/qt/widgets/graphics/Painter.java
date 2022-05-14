package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.BGMode;
import org.swdc.qt.beans.SizeMode;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SPainter;
import org.swdc.qt.widgets.*;
import org.swdc.qt.widgets.pane.Widget;

import java.util.List;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class Painter implements NativeAllocated {

    private SPainter painter = new SPainter();

    public <T extends Widget> void allocate(T widget) throws Exception {
        if (accessible() ) {
            return;
        }
        if (widget.getPointer() <= 0) {
            throw new Exception("invalid widget");
        }
        long pointer = painter.createWidget(widget.getPointer());
        if (pointer <= 0 ) {
            throw new Exception("failed to create painter");
        }
        painter.address(pointer);
        MemoryHolder.allocated(this);
    }

    public <T extends Pixmap> void allocate(T pixmap) throws Exception {
        if (accessible()) {
            return;
        }
        if (pixmap.getPointer() <= 0 ) {
            throw new Exception("invalid pixmap");
        }
        long pointer = painter.createPixmap(pixmap.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create painter");
        }
        painter.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocateNativeWidget(long widgetPointer) throws Exception{
        if (accessible()) {
            return;
        }
        if (widgetPointer <= 0) {
            throw new Exception("invalid pointer");
        }
        long pointer = painter.createWidget(widgetPointer);
        if (pointer <= 0) {
            throw new Exception("can not create pointer");
        }
        painter.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void setCompositionMode(PainterCompositionMode mode) {
        if (accessible()) {
            painter.setCompositionMode(getPointer(),mode.getVal());
        }
    }

    public PainterCompositionMode compositionMode() {
        if (accessible()) {
            int val = painter.compositionMode(getPointer());
            return PainterCompositionMode.valueOf(val);
        }
        return null;
    }

    public boolean isActive(){
        if (accessible()) {
            return painter.isActive(getPointer());
        }
        return false;
    }

    public void setColorPen(Color color) {
        if (accessible(color)) {
            painter.setColorPen(getPointer(),color.getVal());
        }
    }

    public void setPen(Pen pen) {
        if (accessible(pen)) {
            painter.setPen(getPointer(),pen.getPointer());
        }
    }

    public void setPen(PenStyle penStyle) {
        if (accessible(penStyle)) {
            painter.setPen(getPointer(),penStyle.getVal());
        }
    }

    public Pen pen() {
        if (accessible()) {
            long pointer = painter.pen(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Pen.asPen(pointer);
        } else {
            return null;
        }
    }

    public void setBrush(Brush brush) {
        if (accessible(brush)) {
            painter.setBrush(getPointer(),brush.getPointer());
        }
    }

    public void setBrush(BrushStyle brushStyle) {
        if (accessible()) {
            painter.setBrush(getPointer(),brushStyle.getVal());
        }
    }

    public Brush getBrush() {
        if (accessible()) {
            long pointer = painter.brush(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Brush.asBrush(pointer);
        } else {
            return null;
        }
    }

    public void setBackgroundMode(BGMode mode) {
        if (accessible(mode)) {
            painter.setBackgroundMode(getPointer(),mode.getVal());
        }
    }

    public BGMode getBackgroundMode() {
        if (accessible()) {
            int mode = painter.backgroundMode(getPointer());
            return BGMode.valueOf(mode);
        } else {
            return null;
        }
    }

    public void setBackground(Brush backgroundBrush) {
        if (accessible(backgroundBrush)) {
            painter.setBackground(getPointer(),backgroundBrush.getPointer());
        }
    }

    public Brush getBackground() {
        if (accessible()) {
            long pointer = painter.background(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Brush.asBrush(pointer);
        } else {
            return null;
        }
    }

    public double getOpacity() {
        if (accessible()) {
            return painter.opacity(getPointer());
        }
        return 0;
    }

    public void setOpacity(double opacity) {
        if (accessible()) {
            painter.setOpacity(getPointer(),opacity);
        }
    }

    public void setTransform(Transformation transform, boolean combine) {
        if (accessible(transform)) {
            painter.setTransform(getPointer(),transform.getPointer(),combine);
        }
    }

    public Transformation getTransform(){
        if (accessible()) {
            long pointer = painter.transform(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Transformation.asTransformation(pointer);
        } else {
            return null;
        }
    }

    public void resetTransform() {
        if (accessible()) {
            painter.resetTransform(getPointer());
        }
    }

    public void setWorldTransform(Transformation transform, boolean combine) {
        if (accessible(transform,combine)) {
            painter.setWorldTransform(getPointer(),transform.getPointer(),combine);
        }
    }

    public Transformation getWorldTransform() {
        if (accessible()) {
            long pointer = painter.worldTransform(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Transformation.asTransformation(pointer);
        } else {
            return null;
        }
    }

    public Transformation combinedTransform() {
        if (accessible()) {
            long pointer = painter.combinedTransform(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Transformation.asTransformation(pointer);
        } else {
            return null;
        }
    }

    public void setWorldMatrixEnabled(boolean enabled) {
        if (accessible()) {
            painter.setWorldMatrixEnabled(getPointer(),enabled);
        }
    }

    public boolean isWorldMatrixEnabled() {
        if (accessible()) {
            return painter.worldMatrixEnabled(getPointer());
        } else {
            return false;
        }
    }

    public void scale(double sx, double sy) {
        if (accessible()) {
            painter.scale(getPointer(),sx,sy);
        }
    }

    public void shear(double sh, double sv) {
        if (accessible()) {
            painter.shear(getPointer(),sh,sv);
        }
    }

    public void rotate(double a) {
        if (accessible()) {
            painter.rotate(getPointer(),a);
        }
    }

    public void translate(double dx, double dy) {
        if (accessible()) {
            painter.translate(getPointer(),dx,dy);
        }
    }

    public Rect window() {
        if (accessible()) {
            long pointer = painter.window(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        } else {
            return null;
        }
    }

    public void setWindow(int x, int y, int w, int h){
        if (accessible()) {
            painter.setWindow(getPointer(),x,y,w,h);
        }
    }

    public Rect getViewport() {
        if (accessible() ) {
            long pointer = painter.viewport(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public void setViewport(int x, int y, int w, int h) {
        if (accessible()) {
            painter.setViewport(getPointer(),x,y,w,h);
        }
    }

    public void setViewTransformEnabled(boolean enable) {
        if (accessible()) {
            painter.setViewTransformEnabled(getPointer(),enable);
        }
    }

    public boolean isViewTransformEnabled() {
        if (accessible()) {
            return painter.viewTransformEnabled(getPointer());
        }
        return false;
    }



    public void strokePath(PainterPath path, Pen pen) {
        if (accessible(path,pen)) {
            painter.strokePath(getPointer(),path.getPointer(),pen.getPointer());
        }
    }

    public void fillPath(PainterPath path, Brush brush) {
        if (accessible(path,brush)) {
            painter.fillPath(getPointer(),path.getPointer(),brush.getPointer());
        }
    }

    public void drawPath(PainterPath path) {
        if (accessible() && path.accessible()) {
            painter.drawPath(getPointer(),path.getPointer());
        }
    }

    public void drawPoint(int x, int y) {
        if (accessible()) {
            painter.drawPoint(getPointer(),x,y);
        }
    }

    public void drawPoint(Point point) {
        if (accessible(point)) {
            painter.drawPoint(getPointer(),point.getPointer());
        }
    }

    public void drawPoints(List<Point> points) {
        if (accessible()) {

            points = points
                    .stream()
                    .filter(p -> p != null && p.accessible())
                    .collect(Collectors.toList());

            long [] pointers = new long[points.size()];
            for (int idx = 0; idx < points.size(); idx ++) {
                Point p = points.get(idx);
                long pointer = p.getPointer();
                pointers[idx] = pointer;
            }

            painter.drawPoints(getPointer(),pointers);
        }
    }

    public void drawLine(int x1, int y1, int x2, int y2)  {
        if (accessible()) {
            painter.drawLine(getPointer(),x1,y1,x2,y2);
        }
    }

    public void drawLine(Point x, Point y) {
        if (accessible() && x.accessible() && y.accessible()) {
            painter.drawLine(getPointer(),x.getPointer(),y.getPointer());
        }
    }

    public void drawLine(Line line) {
        if (accessible(line)) {
            painter.drawLine(getPointer(),line.getPointer());
        }
    }

    public void drawRect(int x1, int y1, int w, int h) {
        if (accessible()) {
            painter.drawRect(getPointer(),x1,y1,w,h);
        }
    }

    public void drawRect(Rect rect) {
        if (accessible(rect)) {
            painter.drawRect(getPointer(),rect.getPointer());
        }
    }

    public void drawRect(RealRect rect) {
        if (accessible(rect)) {
            painter.drawRealRect(getPointer(),rect.getPointer());
        }
    }

    public void drawEllipse(int x, int y, int w, int h) {
        if (accessible()) {
            painter.drawEllipse(getPointer(),x,y,w,h);
        }
    }

    public void drawEllipse(Rect rect) {
        if (accessible(rect)) {
            painter.drawEllipse(getPointer(),rect.getPointer());
        }
    }

    public void drawEllipse(RealRect rect) {
        if (accessible(rect)) {
            painter.drawRealEllipse(getPointer(),rect.getPointer());
        }
    }

    public void drawArc(int x, int y, int w, int h, int a, int alen) {
        if (accessible()) {
            painter.drawArc(getPointer(),x,y,w,h,a,alen);
        }
    }

    public void drawArc(Rect rect, int a, int alen) {
        if (accessible(rect)){
            painter.drawArc(getPointer(),rect.getPointer(),a,alen);
        }
    }

    public void drawArc(RealRect rect, int a, int alen) {
        if (accessible(rect)) {
            painter.drawRealArc(getPointer(),rect.getPointer(),a,alen);
        }
    }

    public void drawPie(int x, int y, int w, int h, int a, int alen) {
        if (accessible()) {
            painter.drawPie(getPointer(),x,y,w,h,a,alen);
        }
    }

    public void drawPie(Rect rect, int a, int alen) {
        if (accessible(rect)) {
            painter.drawPie(getPointer(),rect.getPointer(),a,alen);
        }
    }

    public void drawPie(RealRect rect, int a, int alen) {
        if (accessible(rect)) {
            painter.drawRealPie(getPointer(),rect.getPointer(),a,alen);
        }
    }

    public void drawChord(Rect rect,int a, int alen) {
        if (accessible(rect)) {
            painter.drawChord(getPointer(),rect.getPointer(),a,alen);
        }
    }

    public void drawChord(RealRect rect,int a, int alen) {
        if (accessible(rect)) {
            painter.drawRealChord(getPointer(),rect.getPointer(),a,alen);
        }
    }

    public void drawChord(int x, int y, int w, int h, int a, int alen) {
        if (accessible()) {
            painter.drawChord(getPointer(),x,y,w,h,a,alen);
        }
    }

    public void drawRoundedRect(int x, int y, int w, int h, double xRadius, double yRadius,
                                       SizeMode sizeMode) {
        if (accessible(sizeMode)) {
            painter.drawRoundedRect(getPointer(),x,y,w,h,xRadius,yRadius,sizeMode.getVal());
        }
    }

    public void drawRoundedRect(Rect rect, double xRadius, double yRadius, SizeMode sizeMode) {
        if (accessible(rect,sizeMode)) {
            painter.drawRoundedRect(getPointer(),rect.getPointer(),xRadius,yRadius,sizeMode.getVal());
        }
    }

    public void drawRoundedRect(RealRect rect, double xRadius, double yRadius, SizeMode sizeMode) {
        if (accessible(rect,sizeMode)) {
           painter.drawRealRoundedRect(getPointer(),rect.getPointer(),xRadius,yRadius,sizeMode.getVal());
        }
    }

    public void drawTiledPixmap(int x, int y, int w, int h, Pixmap pixmap, int sx, int sy) {
        if (accessible(pixmap)) {
            painter.drawTiledPixmap(getPointer(),x,y,w,h,pixmap.getPointer(),sx,sy);
        }
    }

    public void drawPixmap(int x, int y, int w, int h, Pixmap pm,
                                  int sx, int sy, int sw, int sh) {

        if (accessible(pm)) {
            painter.drawPixmap(getPointer(),x,y,w,h,pm.getPointer(),sx,sy,sw,sh);
        }

    }

    public void drawPixmap(int x, int y, Pixmap pm, int sx, int sy, int sw, int sh) {

        if (accessible(pm)) {
            painter.drawPixmap(getPointer(),x,y,pm.getPointer(),sx,sy,sw,sh);
        }
    }

    public void drawPixmap(int x, int y, Pixmap pm) {
        if (accessible(pm)) {
            painter.drawPixmap(getPointer(),x,y,pm.getPointer());
        }
    }

    public void drawPixmap(int x, int y, int w, int h, Pixmap pm) {
        if (accessible(pm)) {
            painter.drawPixmap(getPointer(),x,y,w,h,pm.getPointer());
        }
    }

    public void drawPixmap(Point point, Pixmap pm, Rect sourceRect) {
        if (accessible(point,point,sourceRect)) {
            painter.drawPixmapPoint(getPointer(),point.getPointer(),pm.getPointer(),sourceRect.getPointer());
        }
    }

    public void drawPixmap(RealPoint point, Pixmap pm, RealRect sourceRect) {
        if (accessible(pm,point,sourceRect)) {
            painter.drawRealPixmap(getPointer(),point.getPointer(),pm.getPointer(),sourceRect.getPointer());
        }
    }

    public void drawPixmap(Rect targetRect,Pixmap pixmap, Rect sourceRect) {
        if (accessible(targetRect,pixmap,sourceRect)) {
            painter.drawPixmap(getPointer(),targetRect.getPointer(),pixmap.getPointer(),sourceRect.getPointer());
        }
    }

    public void drawPixmap(RealRect targetRect, Pixmap pixmap, RealRect sourceRect) {
        if (accessible(targetRect,pixmap,sourceRect) &&
                targetRect.accessible()) {
            painter.drawRealPixmap(getPointer(),targetRect.getPointer(),pixmap.getPointer(),sourceRect.getPointer());
        }
    }

    public void drawPixmap(Point point, Pixmap pm) {
        if (accessible(point,pm)) {
            painter.drawPixmap(getPointer(),point.getPointer(),pm.getPointer());
        }
    }

    public void drawPixmap(RealPoint point,Pixmap pm) {
        if (accessible(point,pm)) {
            painter.drawPixmapRealPoint(getPointer(),point.getPointer(),pm.getPointer());
        }
    }

    public void drawPixmap(Rect rect, Pixmap pm) {
        if (accessible(rect,pm)) {
            painter.drawPixmapRect(getPointer(),rect.getPointer(),pm.getPointer());
        }
    }

    public void drawImage(int x, int y, Image image, int sx, int sy,
                                 int sw, int sh, ImageConversation conversation) {
        if (accessible(image,conversation)) {
            painter.drawImage(getPointer(),x,y,image.getPointer(),sx,sy,sw,sh,conversation.getVal());
        }
    }


    public void drawText(int x, int y, String s) {
        if (accessible(s)) {
            painter.drawText(getPointer(),x,y,s);
        }
    }

    public void drawText(int x, int y, int w, int h, int flags, String text) {
        if (accessible(text)) {
            painter.drawText(getPointer(),x,y,w,h,flags,text);
        }
    }

    public void drawText(RealRect rect, int flags, String text) {
        if (accessible(rect,text)) {
            painter.drawTextRealRect(getPointer(),rect.getPointer(),flags,text);
        }
    }

    public void drawText(Rect rect, int flags, String text) {
        if (accessible(rect,text)) {
            painter.drawTextRect(getPointer(),rect.getPointer(),flags,text);
        }
    }

    public void drawText(Point point,String s) {
        if (accessible(point,s)) {
            painter.drawText(getPointer(),point.getPointer(),s);
        }
    }

    public void drawText(RealPoint point, String s) {
        if (accessible(point,s)) {
            painter.drawRealText(getPointer(),point.getPointer(),s);
        }
    }

    public Rect boundingRect(int x, int y, int w, int h, int flags, String text){
        if (accessible(text)) {
            long pointer = painter.boundingRect(getPointer(),x,y,w,h,flags,text);
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public void fillRect(int x, int y, int w, int h, Brush brush) {
        if (accessible(brush)) {
            painter.fillRectBrush(getPointer(),x,y,w,h,brush.getPointer());
        }
    }

    public void fillRect(int x, int y, int w, int h, Color color) {
        if (accessible(color)) {
            painter.fillRect(getPointer(),x,y,w,h,color.getVal());
        }
    }

    public void fillRect(int x, int y, int w, int h, BrushStyle brushStyle) {
        if (accessible(brushStyle)) {
            painter.fillRect(getPointer(),x,y,w,h,brushStyle.getVal());
        }
    }

    public void fillRect(int x, int y, int w, int h, GradientPresets preset) {
        if (accessible(preset)) {
            painter.fillRectWithPresetGradient(getPointer(),x,y,w,h,preset.getVal());
        }
    }

    public void fillRect(Rect rect, GradientPresets preset) {
        if (accessible(rect,preset)) {
            painter.fillRectWithRectPresetGradient(getPointer(),rect.getPointer(),preset.getVal());
        }
    }

    public void fillRect(Rect rect, Brush brush) {
        if (accessible(rect,brush)) {
            painter.fillRect(getPointer(),rect.getPointer(),brush.getPointer());
        }
    }

    public void fillRect(RealRect realRect,Brush brush) {
        if (accessible(realRect,brush)) {
            painter.fillRealRect(getPointer(),realRect.getPointer(),brush.getPointer());
        }
    }

    public void fillRect(Rect rect,Color color) {
        if (accessible(rect,color)) {
            painter.fillColorRect(getPointer(),rect.getPointer(),color.getVal());
        }
    }
    public void fillRect(RealRect rect,Color color) {
        if (accessible(rect,color)) {
            painter.fillColorRealRect(getPointer(),rect.getPointer(),color.getVal());
        }
    }

    public void fillRect(Rect rect, BrushStyle brushStyle) {
        if (accessible(rect,brushStyle)) {
            painter.fillRect(getPointer(),rect.getPointer(),brushStyle.getVal());
        }
    }
    public void fillRect(RealRect rect, BrushStyle brushStyle) {
        if (accessible(rect,brushStyle) ) {
            painter.fillRealRect(getPointer(),rect.getPointer(),brushStyle.getVal());
        }
    }

    public void fillRect(RealRect rect, GradientPresets preset) {
        if (accessible(rect,preset)) {
            painter.fillRealRectWithRectPresetGradient(getPointer(),rect.getPointer(),preset.getVal());
        }
    }

    public void eraseRect(int x, int y, int w, int h) {
        if (accessible()) {
            painter.eraseRect(getPointer(),x,y,w,h);
        }
    }

    public void eraseRect(Rect rect) {
        if (accessible(rect)) {
            painter.eraseRect(getPointer(),rect.getPointer());
        }
    }

    public void eraseRealRect(RealRect rect) {
        if (accessible(rect)) {
            painter.eraseRealRect(getPointer(),rect.getPointer());
        }
    }

    public void setRenderHint(RenderHint hint, boolean on) {
        if (accessible(hint)) {
            painter.setRenderHint(getPointer(),hint.getVal(),on);
        }
    }

    public void setRenderHints(boolean on,RenderHint ...hints) {
        if (accessible(on,hints)) {
            long val = hints[0].getVal();
            if (hints.length > 1) {
                for (int idx = 1; idx < hints.length; idx ++) {
                    val = val | hints[idx].getVal();
                }
            }
            painter.setRenderHints(getPointer(),val,on);
        }
    }

    public long getPointer(){
        return painter.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SPainter.CLEANER;
    }

    public void setFont(Font font) {
        if (accessible(font)) {
            this.painter.setFont(getPointer(),font.getPointer());
        }
    }

    public Font getFont() {
        if (accessible()) {
            long pointer = this.painter.font(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Font.asFont(pointer);
        }
        return null;
    }

    public void dispose() {
        if (accessible()) {
            painter.dispose(getPointer());
        }
    }

}
