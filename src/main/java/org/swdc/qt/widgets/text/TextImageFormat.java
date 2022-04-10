package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextImageFormat;

public class TextImageFormat extends TextCharFormat {

    private STextImageFormat imageFormat = new STextImageFormat();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = imageFormat.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-format-image");
        }
        imageFormat.address(pointer);
    }

    @Override
    public void allocate(TextFormatType type) throws Exception {
        throw new Exception("please call the allocator without parameter");
    }

    @Override
    public void dispose() {
      if (accessible()) {
          imageFormat.dispose(getPointer());
          imageFormat.cleanAddress();
      }
    }

    @Override
    public long getPointer() {
        return imageFormat.address();
    }

    public void setName(String name) {
        if (accessible(name)) {
            imageFormat.setName(getPointer(),name);
        }
    }

    public String getName() {
        if (accessible()) {
            return imageFormat.name(getPointer());
        }
        return null;
    }

    public void setWidth(double width) {
        if (accessible()) {
            imageFormat.setWidth(getPointer(),width);
        }
    }

    public double getWidth() {
        if (accessible()) {
            return imageFormat.width(getPointer());
        }
        return 0;
    }

    public void setHeight(double height) {
        if (accessible()) {
            imageFormat.setHeight(getPointer(),height);
        }
    }

    public double getHeight() {
        if (accessible()) {
            return imageFormat.height(getPointer());
        }
        return 0;
    }

    public void setQuality(int quality) {
        if (accessible()) {
            imageFormat.setQuality(getPointer(),quality);
        }
    }

    public int getQuality() {
        if (accessible()) {
            return imageFormat.quality(getPointer());
        }
        return 0;
    }

    public static TextImageFormat asTextImageFormat(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text-image-format, invalid pointer");
        }
        TextImageFormat format = new TextImageFormat();
        format.imageFormat.address(pointer);
        return format;
    }
}
