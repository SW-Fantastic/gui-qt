package org.swdc.qt.widgets.graphics;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.beans.IconMode;
import org.swdc.qt.beans.IconState;
import org.swdc.qt.internal.graphics.SIcon;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;

import java.io.File;

public class Icon {

    private SIcon icon = new SIcon();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = icon.create();
        if (pointer <= 0) {
            throw new Exception("can not create a icon");
        }
        icon.address(pointer);
    }

    public void allocate(File file) throws Exception {
        if (getPointer() > 0 || !file.exists()) {
            return;
        }
        long pointer = icon.createWithFile(file.getAbsolutePath());
        if (pointer <= 0 ) {
            throw new Exception("can not create a icon");
        }
        icon.address(pointer);
    }

    public void allocate(Pixmap pixmap) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (pixmap.getPointer() <= 0) {
            throw new Exception("invalid pixmap, pointer is null");
        }
        long pointer = icon.createWithPixmap(pixmap.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a icon");
        }
        icon.address(pointer);
    }


    public Size getActualSize(Size size, IconMode mode, IconState state) {
        if (getPointer() > 0 && size.getPointer() > 0) {
            long pointer = icon.actualSize(getPointer(),size.getPointer(),mode.getVal(),state.getVal());
            if (pointer <= 0) {
                return null;
            }
            try {
                Size result = new Size();
                result.wrap(pointer);
                return result;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public String getName() {
        if (getPointer() > 0) {
            return icon.name(getPointer());
        }
        return null;
    }

    public void paint(Painter painter, Rect rect, Alignment alignment, IconMode iconMode, IconState iconState) {
        if (getPointer() > 0 && painter.getPointer() > 0 && rect.getPointer() > 0) {
            icon.paint(
                    getPointer(),
                    painter.getPointer(),
                    rect.getPointer(),
                    alignment.getFlagValue(),
                    iconMode.getVal(),
                    iconState.getVal()
            );
        }
    }

    public void paint(Painter painter, int x, int y, int w, int h,Alignment alignment, IconMode iconMode, IconState iconState) {
        if (getPointer() > 0 && painter.getPointer() > 0) {
            icon.paint(getPointer(),painter.getPointer(),x,y,w,h,alignment.getFlagValue(),iconMode.getVal(),iconState.getVal());
        }
    }

    public void addPixmap(Pixmap pixmap, IconMode iconMode, IconState iconState) {
        if (getPointer() > 0 && pixmap.getPointer() > 0) {
            icon.addPixmap(getPointer(),pixmap.getPointer(),iconMode.getVal(),iconState.getVal());
        }
    }

    public void addFile(File file, Size size, IconMode iconMode, IconState state) {
        if (getPointer() > 0 && size.getPointer() > 0 && file.exists()) {
            icon.addFile(getPointer(),file.getAbsolutePath(),size.getPointer(),iconMode.getVal(),state.getVal());
        }
    }

    public void setMask(boolean isMask) {
        if (getPointer() > 0) {
            icon.setIsMask(getPointer(),isMask);
        }
    }

    public boolean isMask() {
        if (getPointer() > 0) {
            return icon.isMask(getPointer());
        }
        return false;
    }

    public void dispose() {
        if (getPointer() > 0) {
            icon.dispose(getPointer());
        }
    }

    public long getPointer() {
        return icon.address();
    }

}
