package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.AspectRatioMode;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SPixmap;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;
import org.swdc.qt.widgets.pane.Widget;

import java.io.File;
import java.util.function.Consumer;

public class Pixmap implements NativeAllocated {

    private SPixmap pixmap = new SPixmap();

    public void allocate(int width, int height) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = pixmap.create(width,height);
        if (pointer <= 0) {
            throw new Exception("failed to create pixmap!");
        }
        pixmap.address(pointer);
        MemoryHolder.allocated(this);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        pixmap.address(pointer);
    }

    public int width() {
        if (accessible()) {
            return pixmap.width(getPointer());
        }
        return 0;
    }

    public int height() {
        if (accessible()) {
            return pixmap.height(getPointer());
        }
        return 0;
    }

    public Size size() {
        if (accessible()) {
            long pointer = pixmap.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Rect rect(){
        if (accessible()) {
            long pointer = pixmap.rect(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public int depth() {
        if (accessible()) {
            return pixmap.depth(getPointer());
        }
        return 0;
    }

    public void fill(Color color) {
        if (accessible(color)) {
            pixmap.fill(getPointer(),color.getVal());
        }
    }

    public double devicePixelRatio() {
        if (accessible()) {
            return pixmap.devicePixelRatio(getPointer());
        }
        return 0;
    }

    public void setDevicePixelRatio(double scaleFactor) {
        if (accessible()) {
            pixmap.setDevicePixelRatio(getPointer(),scaleFactor);
        }
    }

    public boolean hasAlpha() {
        if (accessible() ) {
            return pixmap.hasAlpha(getPointer());
        }
        return false;
    }

    public boolean hasAlphaChannel() {
        if (accessible()) {
            return pixmap.hasAlphaChannel(getPointer());
        }
        return false;
    }

    public Pixmap scaled(int width, int height, AspectRatioMode aspectMode, TransformationMode transformationMode) {
        if (accessible(width,height,aspectMode,transformationMode)) {
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
        if (accessible(w,transformationMode)) {
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
        if (accessible(h,transformationMode)) {
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

    public Pixmap transformed(Transformation transform, TransformationMode transformationMode) {
        if (accessible(transformationMode,transform)) {
            long pointer = pixmap.transformed(getPointer(),transform.getPointer(),transformationMode.getVal());
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
        if (accessible()) {
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
        if (accessible(file,format,conversation) && file.exists()) {
            file = file.getAbsoluteFile();
            return pixmap.load(getPointer(),file.getAbsolutePath(),format,conversation.getVal());
        }
        return false;
    }

    public boolean loadFromData(byte[] data, String format, ImageConversation conversation) {
        if (accessible(data,format,conversation)) {
            return pixmap.loadFromData(getPointer(),data,format,conversation.getVal());
        } else {
            return false;
        }
    }

    public boolean save(File absolutePath, String format) {
        if (accessible(absolutePath,format)) {
            absolutePath = absolutePath.getAbsoluteFile();
            return pixmap.save(getPointer(),absolutePath.getAbsolutePath(),format);
        } else {
            return false;
        }
    }

    public boolean convertFromImage(Image image, ImageConversation conversation) {
        if (accessible(image,conversation)) {
            return pixmap.convertFromImage(getPointer(),image.getPointer(),conversation.getVal());
        }
        return false;
    }

    public Pixmap copy(int x, int y, int width, int height) {
        if (accessible()) {
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
        if (accessible()) {
            return pixmap.isQBitmap(getPointer());
        } else {
            return false;
        }
    }

    public Bitmap mask() {
        if (accessible()) {
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
        if (accessible(bitmap)) {
            this.pixmap.setMask(getPointer(),bitmap.getPointer());
        }
    }

    public Bitmap createHeuristicMask(boolean clipTight) {
        if (accessible()) {
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
        if (accessible(maskColor,imageMaskMode)) {
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
        if (accessible() ) {
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
        MemoryHolder.allocated(pixmap);
        return pixmap;
    }

    @Override
    public Consumer<Long> disposer() {
        return SPixmap.CLEANER;
    }

    public long getPointer() {
        return pixmap.address();
    }


}
