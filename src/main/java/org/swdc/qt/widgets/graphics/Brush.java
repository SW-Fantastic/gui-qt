package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SBrush;

public class Brush {

    private SBrush brush = new SBrush();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = brush.create();
        if (pointer <= 0) {
            throw new Exception("failed to create brush");
        }
        brush.address(pointer);
    }

    void wrap(long pointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer");
        }
        brush.address(pointer);
    }

    public BrushStyle getStyle(){
        if (getPointer() > 0) {
            int style = brush.style(getPointer());
            return BrushStyle.valueOf(style);
        }
        return null;
    }

    public void setStyle(BrushStyle style){
        if (getPointer() > 0) {
            brush.setStyle(getPointer(),style.getVal());
        }
    }

    public Transformation getTransform() {
        if (getPointer() > 0) {
            long pointer = brush.transform(getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Transformation transformation = new Transformation();
                transformation.wrap(pointer);
                return transformation;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }

    public void setTransform(Transformation transform) {
        if (getPointer() > 0 && transform.getPointer() > 0) {
            brush.setTransform(getPointer(),transform.getPointer());
        }
    }

    public Pixmap getTexture() {
        if (getPointer() > 0) {
            long pointer = brush.texture(getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Pixmap pixmap = new Pixmap();
                pixmap.wrap(pointer);
                return pixmap;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }

    public void setTexture(Pixmap pixmap) {
        if (getPointer() > 0 && pixmap.getPointer() > 0) {
            brush.setTexture(getPointer(),pixmap.getPointer());
        }
    }

    public Image getTextureImage() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0 && image.getPointer() > 0) {
            brush.setTextureImage(getPointer(),image.getPointer());
        }
    }

    public Color getColor() {
        if (getPointer() > 0) {
            long color = brush.color(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        } else {
            return null;
        }
    }

    public void setColor(Color color) {
        if (getPointer() > 0) {
            brush.setColor(getPointer(),color.getVal());
        }
    }


    public long getPointer() {
        return brush.address();
    }

}
