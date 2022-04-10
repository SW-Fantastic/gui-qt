package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SBitmap;

import java.io.File;

public class Bitmap extends Pixmap {

    private SBitmap bitmap = new SBitmap();

    public void allocate(int width, int height) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = bitmap.create(width,height);
        if (pointer <= 0) {
            throw new Exception("failed to create bitmap");
        }

        bitmap.address(pointer);
    }

    public void allocate(Pixmap pixmap) throws Exception {
        if (accessible() || !accessibleParam(pixmap)) {
            return;
        }
        long pointer = bitmap.create(pixmap.getPointer());
        if (pointer <= 0) {
            throw new Exception("failed to create bitmap");
        }
        bitmap.address(pointer);
    }

    public void allocate(File file) throws Exception {
        if (accessible() || file == null || !file.exists() ) {
            return;
        }
        file = file.getAbsoluteFile();
        long pointer = bitmap.create(file.getAbsolutePath());
        if (pointer <= 0) {
            throw new Exception("failed to create bitmap");
        }
        bitmap.address(pointer);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        bitmap.address(pointer);
    }

    public void swap(Bitmap otherBitmap) {
        if (accessible(otherBitmap)) {
            bitmap.swap(getPointer(),otherBitmap.getPointer());
        }
    }

    public void clear() {
        if (accessible()) {
            bitmap.clear(getPointer());
        }
    }

    public Bitmap transformed(Transformation transaction) {
        if (accessible(transaction)) {
            long pointer = bitmap.transformed(getPointer(),transaction.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Bitmap.asBitmap(pointer);
        } else {
            return null;
        }
    }

    public void dispose() {
        if (accessible()) {
            bitmap.dispose(getPointer());
        }
    }

    public static Bitmap asBitmap(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid Pointer");
        }
        Bitmap bitmap = new Bitmap();
        bitmap.wrap(nativePointer);
        return bitmap;
    }

    @Override
    public long getPointer() {
        return bitmap.address();
    }
}
