package org.swdc.qt.widgets.graphics;

import org.swdc.qt.beans.*;
import org.swdc.qt.internal.graphics.SImage;
import org.swdc.qt.internal.graphics.SRgb;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;

import java.io.File;

public class Image {

    private SImage image = new SImage();

    public void allocate(File file) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        String path = file.getAbsolutePath();
        long pointer = image.create(path);
        if (pointer <= 0) {
            throw new Exception("can not create image with path: " + file.getAbsolutePath());
        }
        image.address(pointer);
    }

    public void allocate(byte[] data) throws Exception {
        if (getPointer() > 0) {
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
    }

    void wrap(long pointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer");
        }
        image.address(pointer);
    }

    public int width() {
        if (getPointer() > 0) {
            return image.width(getPointer());
        }
        return 0;
    }

    public int height() {
        if (getPointer() > 0) {
            return image.height(getPointer());
        }
        return 0;
    }

    public Size size() {
        if (getPointer() > 0) {
            long pointer = image.size(getPointer());
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

    public Rect rect() {
        if (getPointer() > 0) {
            long pointer = image.rect(getPointer());
            if (pointer <= 0){
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public int depth(){
        if (getPointer() > 0) {
            return image.depth(getPointer());
        }
        return 0;
    }

    public int colorCount() {
        if (getPointer() > 0) {
            return image.colorCount(getPointer());
        }
        return 0;
    }

    public int bitPlaneCount() {
        if (getPointer() > 0) {
            return image.bitPlaneCount(getPointer());
        }
        return 0;
    }

    public boolean allGray(){
        if (getPointer() > 0) {
            return image.allGray(getPointer());
        }
        return false;
    }

    public boolean isGrayscale() {
        if (getPointer() > 0) {
            return image.isGrayscale(getPointer());
        }
        return false;
    }


    public Image copy(int x, int y, int w, int h) {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            int formate = image.format(getPointer());
            return ImageFormat.valueOf(formate);
        }
        return null;
    }

    public SRgb color(int i) {
        if (getPointer() > 0) {
            return image.color(getPointer(),i);
        }
        return null;
    }

    public void setColor(int i, Color rgb) {
        if (getPointer() > 0) {
            image.setColor(getPointer(),i,rgb.getVal());
        }
    }

    public void setColorCount(int count) {
        if (getPointer() > 0) {
            image.setColorCount(getPointer(),count);
        }
    }

    public boolean valid(int x, int y) {
        if (getPointer() > 0) {
            return image.valid(getPointer(),x,y);
        }
        return false;
    }

    public int pixelIndex(int x, int y) {
        if (getPointer() > 0) {
            return image.pixelIndex(getPointer(),x,y);
        }
        return 0;
    }

    public Color pixel(int x, int y) {
        if (getPointer() > 0) {
            SRgb val = image.pixel(getPointer(),x,y);
            Color result = new Color();
            result.allocate(val.getVal());
            return result;
        }
        return null;
    }

    public void setPixel(int x, int y, Color rgb){
        if (getPointer() > 0) {
            image.setPixel(getPointer(),x,y,rgb.getVal());
        }
    }

    public void setPixel(int x,int y,int index) {
        if (getPointer() > 0) {
            image.setPixel(getPointer(),x,y,index);
        }
    }

    public boolean hasAlphaChannel() {
        if (getPointer() > 0) {
            return image.hasAlphaChannel(getPointer());
        }
        return false;
    }

    public void setAlphaChannel(Image alphaChannelImage) {
        if (getPointer() > 0 && alphaChannelImage.getPointer() > 0){
            image.setAlphaChannel(getPointer(),alphaChannelImage.getPointer());
        }
    }

    public Image alphaChannel() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0 && matrix.getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0 && file.exists() && file.isFile()) {
            file = file.getAbsoluteFile();
            return image.load(getPointer(),file.getAbsolutePath());
        } else {
            return false;
        }
    }

    public boolean loadFromData(byte[] data) {
        if (getPointer() > 0) {
            return image.loadFromData(getPointer(),data);
        }
        return false;
    }

    public boolean save(File file,String format) {
        if (getPointer() > 0) {
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


    public long getPointer() {
        return image.address();
    }

    public void dispose() {
        if (getPointer() > 0) {
            image.dispose(getPointer());
            image.cleanAddress();
        }
    }

}
