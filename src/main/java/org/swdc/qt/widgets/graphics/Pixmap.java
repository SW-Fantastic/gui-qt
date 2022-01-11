package org.swdc.qt.widgets.graphics;

import org.swdc.qt.beans.AspectRatioMode;
import org.swdc.qt.internal.graphics.SPixmap;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;
import org.swdc.qt.widgets.pane.Widget;

import java.io.File;

public class Pixmap {

    private SPixmap pixmap = new SPixmap();

    public void allocate(int width, int height) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = pixmap.create(width,height);
        if (pointer <= 0) {
            throw new Exception("failed to create pixmap!");
        }
        pixmap.address(pointer);
    }

    private void wrap(long pointer) {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        pixmap.address(pointer);
    }

    public int width() {
        if (getPointer() > 0) {
            return pixmap.width(getPointer());
        }
        return 0;
    }

    public int height() {
        if (getPointer() > 0) {
            return pixmap.height(getPointer());
        }
        return 0;
    }

    public Size size() {
        if (getPointer() > 0) {
            long pointer = pixmap.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Size size = new Size();
                size.wrap(pointer);
                return size;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Rect rect(){
        if (getPointer() > 0) {
            long pointer = pixmap.rect(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public int depth() {
        if (getPointer() > 0) {
            return pixmap.depth(getPointer());
        }
        return 0;
    }

    public void fill(Color color) {
        if (getPointer() > 0) {
            pixmap.fill(getPointer(),color.getVal());
        }
    }

    public double devicePixelRatio() {
        if (getPointer() > 0) {
            return pixmap.devicePixelRatio(getPointer());
        }
        return 0;
    }

    public void setDevicePixelRatio(double scaleFactor) {
        if (getPointer() > 0) {
            pixmap.setDevicePixelRatio(getPointer(),scaleFactor);
        }
    }

    public boolean hasAlpha() {
        if (getPointer() > 0 ) {
            return pixmap.hasAlpha(getPointer());
        }
        return false;
    }

    public boolean hasAlphaChannel() {
        if (getPointer() > 0) {
            return pixmap.hasAlphaChannel(getPointer());
        }
        return false;
    }

    public Pixmap scaled(int width, int height, AspectRatioMode aspectMode, TransformationMode transformationMode) {
        if (getPointer() > 0) {
            long pixmapPointer = pixmap.scaled(getPointer(),width,height,aspectMode.getVal(),transformationMode.getVal());
            if (pixmapPointer <= 0 ) {
                return null;
            }
            return Pixmap.asPixmap(pixmapPointer);
        } else {
            return null;
        }
    }

    public Pixmap scaled(int width, int height) {
        return scaled(width,height,AspectRatioMode.IgnoreAspectRatio,TransformationMode.FastTransformation);
    }

    public Pixmap scaledToWidth(int w, TransformationMode transformationMode) {
        if (getPointer() > 0) {
            long pointer = pixmap.scaledToWidth(getPointer(),w,transformationMode.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Pixmap.asPixmap(pointer);
        } else {
            return null;
        }
    }

    public Pixmap scaledToWidth(int w) {
        return scaledToWidth(w,TransformationMode.FastTransformation);
    }

    public Pixmap scaledToHeight(int h, TransformationMode transformationMode) {
        if (getPointer() > 0) {
            long pointer = pixmap.scaledToHeight(getPointer(),h,transformationMode.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Pixmap.asPixmap(pointer);
        } else {
            return null;
        }
    }

    public Pixmap scaledToHeight(int h) {
        return scaledToHeight(h,TransformationMode.FastTransformation);
    }

    public Pixmap transformed(Transformation transformPointer, TransformationMode transformationMode) {
        if (getPointer() > 0) {
            long pointer = pixmap.transformed(getPointer(),transformPointer.getPointer(),transformationMode.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Pixmap.asPixmap(pointer);
        } else {
            return null;
        }
    }

    public Pixmap transformed(Transformation transformation) {
        return transformed(transformation,TransformationMode.FastTransformation);
    }

    public Image toImage() {
        if (getPointer() > 0) {
            long imagePointer = pixmap.toImage(getPointer());
            if (imagePointer <= 0) {
                return null;
            }
            try {
                Image image = new Image();
                image.wrap(imagePointer);
                return image;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }

    public boolean load(File file, String format, ImageConversation conversation) {
        if (file.exists() && getPointer() > 0) {
            file = file.getAbsoluteFile();
            return pixmap.load(getPointer(),file.getAbsolutePath(),format,conversation.getVal());
        }
        return false;
    }

    public boolean loadFromData(byte[] data, String format, ImageConversation conversation) {
        if (getPointer() > 0) {
            return pixmap.loadFromData(getPointer(),data,format,conversation.getVal());
        } else {
            return false;
        }
    }

    public boolean save(File absolutePath, String format) {
        if (getPointer() > 0) {
            absolutePath = absolutePath.getAbsoluteFile();
            return pixmap.save(getPointer(),absolutePath.getAbsolutePath(),format);
        } else {
            return false;
        }
    }

    public boolean convertFromImage(Image image, ImageConversation conversation) {
        if (getPointer() > 0) {
            return pixmap.convertFromImage(getPointer(),image.getPointer(),conversation.getVal());
        }
        return false;
    }

    public Pixmap copy(int x, int y, int width, int height) {
        if (getPointer() > 0) {
            long pointer = pixmap.copy(getPointer(),x,y,width,height);
            if (pointer <= 0) {
                return null;
            }
            return Pixmap.asPixmap(pointer);
        } else {
            return null;
        }
    }

    public boolean isBitmap() {
        if (getPointer() > 0) {
            return pixmap.isQBitmap(getPointer());
        } else {
            return false;
        }
    }

    public Bitmap mask() {
        if (getPointer() > 0) {
            long pointer = pixmap.mask(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Bitmap.asBitmap(pointer);
        } else {
            return null;
        }
    }

    public void setMask(Bitmap bitmap) {
        if (getPointer() > 0 && bitmap.getPointer() > 0) {
            this.pixmap.setMask(getPointer(),bitmap.getPointer());
        }
    }

    public Bitmap createHeuristicMask(boolean clipTight) {
        if (getPointer() > 0) {
            long pointer = this.pixmap.createHeuristicMask(getPointer(),clipTight);
            if (pointer <= 0) {
                return null;
            }
            return Bitmap.asBitmap(pointer);
        } else  {
            return null;
        }
    }

    public Bitmap createMaskFromColor(Color maskColor, ImageMaskMode imageMaskMode) {
        if (getPointer() > 0) {
            long pointer = pixmap.createMaskFromColor(getPointer(),maskColor.getVal(),imageMaskMode.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Bitmap.asBitmap(pointer);
        } else {
            return null;
        }
    }

    public static Pixmap fromImage(Image image) {
        if (image.getPointer() <= 0) {
            return null;
        }
        long pointer = SPixmap.fromImage(image.getPointer(),TransformationMode.FastTransformation.getVal());
        if (pointer <= 0) {
            return null;
        }
        return Pixmap.asPixmap(pointer);
    }

    public static <T extends Widget> Pixmap grabWidget(T widget,int x,int y,int width, int height) {
        if(widget.getPointer() <= 0) {
            return null;
        }
        long pointer = SPixmap.grabWidget(widget.getPointer(),x,y,width,height);
        if (pointer <= 0) {
            return null;
        }
        return Pixmap.asPixmap(pointer);
    }

    public void dispose() {
        if (getPointer() > 0 ) {
            pixmap.dispose(getPointer());
            pixmap.cleanAddress();
        }
    }

    public static Pixmap asPixmap(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Pixmap pixmap = new Pixmap();
        pixmap.wrap(nativePointer);
        return pixmap;
    }

    public long getPointer() {
        return pixmap.address();
    }


}
