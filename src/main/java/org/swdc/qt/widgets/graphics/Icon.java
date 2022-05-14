package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SIcon;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;

import java.io.File;
import java.lang.reflect.Member;
import java.util.function.Consumer;

public class Icon implements NativeAllocated {

    private SIcon icon = new SIcon();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = icon.create();
        if (pointer <= 0) {
            throw new Exception("can not create a icon");
        }
        icon.address(pointer);
    }

    public void allocate(File file) throws Exception {
        if (accessible() || !file.exists()) {
            return;
        }
        long pointer = icon.createWithFile(file.getAbsolutePath());
        if (pointer <= 0 ) {
            throw new Exception("can not create a icon");
        }
        icon.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(Pixmap pixmap) throws Exception {
        if (accessible(pixmap)) {
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
        MemoryHolder.allocated(this);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        icon.address(pointer);
    }

    public Size getActualSize(Size size, IconMode mode, IconState state) {
        if (accessible(size,mode,size)) {
            long pointer = icon.actualSize(getPointer(),size.getPointer(),mode.getVal(),state.getVal());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public String getName() {
        if (accessible()) {
            return icon.name(getPointer());
        }
        return null;
    }

    public void paint(Painter painter, Rect rect, Alignment alignment, IconMode iconMode, IconState iconState) {
        if (accessible(painter,rect)) {
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
        if (accessible(painter,x,y,w,h,alignment,iconMode,iconState)) {
            icon.paint(getPointer(),painter.getPointer(),x,y,w,h,alignment.getFlagValue(),iconMode.getVal(),iconState.getVal());
        }
    }

    public void addPixmap(Pixmap pixmap, IconMode iconMode, IconState iconState) {
        if (accessible(pixmap,iconMode,iconState)) {
            icon.addPixmap(getPointer(),pixmap.getPointer(),iconMode.getVal(),iconState.getVal());
        }
    }

    public void addFile(File file, Size size, IconMode iconMode, IconState state) {
        if (accessible(file,size,iconMode,state) && file.exists()) {
            icon.addFile(getPointer(),file.getAbsolutePath(),size.getPointer(),iconMode.getVal(),state.getVal());
        }
    }

    public void setMask(boolean isMask) {
        if (accessible()) {
            icon.setIsMask(getPointer(),isMask);
        }
    }

    public boolean isMask() {
        if (accessible()) {
            return icon.isMask(getPointer());
        }
        return false;
    }

    public void dispose() {
        if (accessible()) {
            icon.dispose(getPointer());
        }
    }

    public static Icon asIcon(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Icon icon = new Icon();
        icon.wrap(pointer);
        MemoryHolder.allocated(icon);
        return icon;
    }

    public long getPointer() {
        return icon.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SIcon.CLEANER;
    }

}
