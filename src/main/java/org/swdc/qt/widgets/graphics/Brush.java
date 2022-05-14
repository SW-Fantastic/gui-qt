package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SBrush;

import java.util.function.Consumer;

public class Brush implements NativeAllocated {

    private SBrush brush = new SBrush();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = brush.create();
        if (pointer <= 0) {
            throw new Exception("failed to create brush");
        }
        brush.address(pointer);
        MemoryHolder.allocated(this);
    }

    public <T extends Gradient> void allocate(T gradient) throws Exception {
        if (accessible()) {
            return;
        }
        if (gradient.getPointer() <= 0) {
            throw new Exception("invalid gradient instance");
        }
        long pointer = brush.createWithGradient(gradient.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create brush");
        }
        brush.address(pointer);
        MemoryHolder.allocated(this);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        brush.address(pointer);
    }

    public BrushStyle getStyle(){
        if (accessible()) {
            int style = brush.style(getPointer());
            return BrushStyle.valueOf(style);
        }
        return null;
    }

    public void setStyle(BrushStyle style){
        if (accessible(style)) {
            brush.setStyle(getPointer(),style.getVal());
        }
    }

    public Transformation getTransform() {
        if (accessible()) {
            long pointer = brush.transform(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Transformation.asTransformation(pointer);
        } else {
            return null;
        }
    }

    public void setTransform(Transformation transform) {
        if (accessible(transform)) {
            brush.setTransform(getPointer(),transform.getPointer());
        }
    }

    public Pixmap getTexture() {
        if (accessible()) {
            long pointer = brush.texture(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Pixmap.asPixmap(pointer);
        } else {
            return null;
        }
    }

    public void setTexture(Pixmap pixmap) {
        if (accessible(pixmap)) {
            brush.setTexture(getPointer(),pixmap.getPointer());
        }
    }

    public Image getTextureImage() {
        if (accessible()) {
            long pointer = brush.textureImage(getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Image image = new Image();
                image.wrap(pointer);
                return image;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }

    public void setTextureImage(Image image) {
        if (accessible(image)) {
            brush.setTextureImage(getPointer(),image.getPointer());
        }
    }

    public Color getColor() {
        if (accessible()) {
            long color = brush.color(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        } else {
            return null;
        }
    }

    public void setColor(Color color) {
        if (accessible(color)) {
            brush.setColor(getPointer(),color.getVal());
        }
    }


    public static Brush asBrush(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Brush brush = new Brush();
        brush.wrap(nativePointer);
        MemoryHolder.allocated(brush);
        return brush;
    }

    @Override
    public void dispose() {
        if (accessible()) {
            brush.dispose(getPointer());
            brush.cleanAddress();
        }
    }

    @Override
    public Consumer<Long> disposer() {
        return SBrush.CLEANER;
    }

    public long getPointer() {
        return brush.address();
    }

}
