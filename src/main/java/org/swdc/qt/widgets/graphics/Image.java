package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.*;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SImage;
import org.swdc.qt.internal.graphics.SRgb;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;

import java.io.File;
import java.util.function.Consumer;

public class Image implements NativeAllocated {

    private SImage image = new SImage();

    public void allocate(File file) throws Exception {
        if (accessible()) {
            return;
        }
        String path = file.getAbsolutePath();
        long pointer = image.create(path);
        if (pointer <= 0) {
            throw new Exception("can not create image with path: " + file.getAbsolutePath());
        }
        image.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(byte[] data) throws Exception {
        if (accessible()) {
            return;
        }

        if (data == null || data.length == 0) {
            throw new Exception("invalid data");
        }
        long pointer = image.create(data);
        if (pointer <= 0) {
            throw new Exception("failed to create image.");
        }
        image.address(pointer);
        MemoryHolder.allocated(this);
    }

    void wrap(long pointer) throws Exception {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer");
        }
        image.address(pointer);
        MemoryHolder.allocated(this);
    }

    public int width() {
        if (accessible()) {
            return image.width(getPointer());
        }
        return 0;
    }

    public int height() {
        if (accessible()) {
            return image.height(getPointer());
        }
        return 0;
    }

    public Size size() {
        if (accessible()) {
            long pointer = image.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Rect rect() {
        if (accessible()) {
            long pointer = image.rect(getPointer());
            if (pointer <= 0){
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public int depth(){
        if (accessible()) {
            return image.depth(getPointer());
        }
        return 0;
    }

    public int colorCount() {
        if (accessible()) {
            return image.colorCount(getPointer());
        }
        return 0;
    }

    public int bitPlaneCount() {
        if (accessible()) {
            return image.bitPlaneCount(getPointer());
        }
        return 0;
    }

    public boolean allGray(){
        if (accessible()) {
            return image.allGray(getPointer());
        }
        return false;
    }

    public boolean isGrayscale() {
        if (accessible()) {
            return image.isGrayscale(getPointer());
        }
        return false;
    }


    public Image copy(int x, int y, int w, int h) {
        if (accessible()) {
            try {
                long result = image.copy(getPointer(),x,y,w,h);
                if (result <= 0) {
                    return null;
                }
                Image resultImage = new Image();
                resultImage.wrap(result);
                return resultImage;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public ImageFormat format() {
        if (accessible()) {
            int formate = image.format(getPointer());
            return ImageFormat.valueOf(formate);
        }
        return null;
    }

    public SRgb color(int i) {
        if (accessible()) {
            return image.color(getPointer(),i);
        }
        return null;
    }

    public void setColor(int i, Color rgb) {
        if (accessible()) {
            image.setColor(getPointer(),i,rgb.getVal());
        }
    }

    public void setColorCount(int count) {
        if (accessible()) {
            image.setColorCount(getPointer(),count);
        }
    }

    public boolean valid(int x, int y) {
        if (accessible()) {
            return image.valid(getPointer(),x,y);
        }
        return false;
    }

    public int pixelIndex(int x, int y) {
        if (accessible()) {
            return image.pixelIndex(getPointer(),x,y);
        }
        return 0;
    }

    public Color pixel(int x, int y) {
        if (accessible()) {
            SRgb val = image.pixel(getPointer(),x,y);
            Color result = new Color();
            result.allocate(val.getVal());
            return result;
        }
        return null;
    }

    public void setPixel(int x, int y, Color rgb){
        if (accessible()) {
            image.setPixel(getPointer(),x,y,rgb.getVal());
        }
    }

    public void setPixel(int x,int y,int index) {
        if (accessible()) {
            image.setPixel(getPointer(),x,y,index);
        }
    }

    public boolean hasAlphaChannel() {
        if (accessible()) {
            return image.hasAlphaChannel(getPointer());
        }
        return false;
    }

    public void setAlphaChannel(Image alphaChannelImage) {
        if (accessible(alphaChannelImage)){
            image.setAlphaChannel(getPointer(),alphaChannelImage.getPointer());
        }
    }

    public Image alphaChannel() {
        if (accessible()) {
            try {
                long pointer = image.alphaChannel(getPointer());
                if (pointer <= 0) {
                    return null;
                }
                Image image = new Image();
                image.wrap(pointer);
                return image;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Image createAlphaMask(ImageConversation val) {
        if (accessible()) {
            long pointer = image.createAlphaMask(getPointer(),val.getVal());
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
        }
        return null;
    }

    public Image createHeuristicMask(boolean clipTight) {
        if (accessible()) {
            try {
                long pointer = image.createHeuristicMask(getPointer(),clipTight);
                if (pointer <= 0) {
                    return null;
                }
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

    public Image createMaskFromColor(Color colorRgb, ImageMaskMode maskMode) {
        if (accessible()) {
            long pointer = image.createMaskFromColor(getPointer(),colorRgb.getVal(),maskMode.getVal());
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

    public Image scaled(int width, int height, AspectRatioMode aspectMode, TransformationMode transformationMode) {
        if (accessible()) {
            long pointer = image.scaled(getPointer(),width,height,aspectMode.getVal(),transformationMode.getVal());
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

    public Image scaledToWidth(int w,TransformationMode transformationMode) {
        if (accessible()) {
            long pointer = image.scaledToWidth(getPointer(),w,transformationMode.getVal());
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

    public Image scaledToHeight(int h, TransformationMode transformationMode) {
        if (accessible()) {
            long pointer = image.scaledToHeight(getPointer(),h,transformationMode.getVal());
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

    public Image transformed(Transformation matrix, TransformationMode mode) {
        if (accessible(matrix,mode)) {
            long pointer = image.transformed(getPointer(),matrix.getPointer(),mode.getVal());
            try {
                if (pointer <= 0) {
                    return null;
                }
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

    public Image mirrored(boolean horizontally, boolean vertically) {
        if (accessible()) {
            long pointer = image.mirrored(getPointer(),horizontally,vertically);
            try {

                if (pointer <= 0) {
                    return null;
                }

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

    public Image rgbSwapped(){
        if (accessible()) {
            long pointer = image.rgbSwapped(getPointer());
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

    public boolean load(File file) {
        if (accessible(file) && file.exists() && file.isFile()) {
            file = file.getAbsoluteFile();
            return image.load(getPointer(),file.getAbsolutePath());
        } else {
            return false;
        }
    }

    public boolean loadFromData(byte[] data) {
        if (accessible()) {
            return image.loadFromData(getPointer(),data);
        }
        return false;
    }

    public boolean save(File file,String format) {
        if (accessible(file,format)) {
            if (!file.exists()) {
                try {
                    file.createNewFile();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            return image.save(getPointer(),file.getAbsolutePath(),format);
        }
        return false;
    }


    @Override
    public long getPointer() {
        return image.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SImage.CLEANER;
    }

    @Override
    public void dispose() {
        if (accessible()) {
            image.dispose(getPointer());
            image.cleanAddress();
        }
    }

}
