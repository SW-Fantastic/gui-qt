package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.text.STextDocumentLayoutPaintContext;
import org.swdc.qt.widgets.RealRect;
import org.swdc.qt.widgets.graphics.Palette;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class AbstractTextDocumentPaintContext implements NativeAllocated {

    private STextDocumentLayoutPaintContext paintContext = new STextDocumentLayoutPaintContext();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = paintContext.create();
        if (pointer <= 0) {
            throw new Exception("can not create a context");
        }
        paintContext.address(pointer);
        MemoryHolder.allocated(this);
    }

    public int getCursorPosition() {
        if (accessible()) {
            return paintContext.cursorPosition(getPointer());
        }
        return 0;
    }

    public void setCursorPosition(int val) {
        if (accessible()) {
            paintContext.cursorPosition(getPointer(),val);
        }
    }

    public Palette getPalette() {
        if (accessible()) {
            long pointer = paintContext.palette(getPointer());
            if (pointer > 0) {
                return Palette.asPalette(pointer);
            }
        }
        return null;
    }

    public void setPalette(Palette palette) {
        if (accessible(palette)) {
            paintContext.palette(getPointer(),palette.getPointer());
        }
    }

    public RealRect getClip() {
        if (accessible()) {
            long rect = paintContext.clip(getPointer());
            if (rect > 0) {
                return RealRect.asRealRect(rect);
            }
        }
        return null;
    }

    public void setClip(RealRect rectF) {
        if (accessible(rectF)) {
            paintContext.clip(getPointer(),rectF.getPointer());
        }
    }

    public List<TextDocumentLayoutSelection> selections() {
        if (accessible()) {
            long[] selections = paintContext.selections(getPointer());
            return Arrays.stream(selections)
                    .filter(Objects::nonNull)
                    .filter(p -> p > 0)
                    .mapToObj(TextDocumentLayoutSelection::asDocumentLayoutSelection)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void selections(List<TextDocumentLayoutSelection> selections) {
        if (accessible(selections)) {
            paintContext.selections(getPointer(),selections
                    .stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextDocumentLayoutSelection::getPointer)
                    .filter(l -> l > 0)
                    .toArray());
        }
    }

    public long getPointer() {
        return paintContext.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return STextDocumentLayoutPaintContext.CLEANER;
    }

    public void dispose() {
        if (accessible()) {
            paintContext.dispose(getPointer());
            paintContext.cleanAddress();
        }
    }

}
