package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.PaletteColorGroup;
import org.swdc.qt.beans.PaletteColorRole;
import org.swdc.qt.internal.graphics.SPalette;

public class Palette implements NativeAllocated {

    private SPalette palette = new SPalette();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = palette.create();
        if (pointer <= 0) {
            throw new Exception("can not create a palette.");
        }
        palette.address(pointer);
    }

    public void allocate(Palette another) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = palette.create(another.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a palette.");
        }
        palette.address(pointer);
    }

    public void allocate(Color button, Color window) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = palette.create(button.getVal(),window.getVal());
        if (pointer <= 0) {
            throw new Exception("can not create a palette.");
        }
        palette.address(pointer);
    }

    public void allocate(Brush windowTextBrush,Brush buttonBrush,Brush lightBrush,
                         Brush darkBrush,Brush midBrush,Brush textBrush,
                         Brush brightTextBrush,Brush baseBrush,Brush windowBrush) throws Exception {
        if (accessible()) {
            return;
        }

        if (!accessibleParam(
                windowTextBrush,
                baseBrush,
                lightBrush,
                darkBrush,
                midBrush,
                textBrush,
                brightTextBrush,
                baseBrush,
                windowBrush)) {
            throw new Exception("some brush has invalid pointer, can not create a palette.");
        }

        long pointer = palette.create(windowTextBrush.getPointer(),
                buttonBrush.getPointer(),
                lightBrush.getPointer(),
                darkBrush.getPointer(),
                midBrush.getPointer(),
                textBrush.getPointer(),
                brightTextBrush.getPointer(),
                baseBrush.getPointer(),
                windowBrush.getPointer()
        );

        if (pointer <= 0) {
            throw new Exception("can not create a palette.");
        }
        palette.address(pointer);
    }

    public void allocate(Color windowText,Color window,Color light,
                         Color dark,Color mid,Color text,Color base) throws Exception {

        if (accessible()) {
            return;
        }

        long pointer = palette.create(windowText.getVal(),
                window.getVal(),
                light.getVal(),
                dark.getVal(),
                mid.getVal(),
                text.getVal(),
                base.getVal()
        );

        if (pointer <= 0) {
            throw new Exception("can not create a palette.");
        }
        palette.address(pointer);
    }

    public PaletteColorGroup getCurrentColorGroup() {
        if (accessible()) {
            int cg = palette.currentColorGroup(getPointer());
            return PaletteColorGroup.valueOf(cg);
        }
        return null;
    }

    public void setCurrentColorGroup(PaletteColorGroup cg) {
        if (accessible()) {
            palette.setCurrentColorGroup(getPointer(),cg.getVal());
        }
    }

    public Color getColor(PaletteColorGroup cg, PaletteColorRole cr) {
        if (accessible()) {
            long color = palette.color(getPointer(),cg.getVal(),cr.getVal());
            Color result = new Color();
            result.allocate(color);
            return result;
        }
        return null;
    }

    public Brush brush(PaletteColorGroup cg,PaletteColorRole cr) {
        if (accessible()) {
            long pointer = palette.brush(getPointer(),cg.getVal(),cr.getVal());
            return Brush.asBrush(pointer);
        }
        return null;
    }

    public void setColor(PaletteColorGroup cg, PaletteColorRole cr,Color color) {
        if (accessible()) {
            palette.setColor(getPointer(),cg.getVal(),cr.getVal(),color.getVal());
        }
    }

    public void setColor(PaletteColorGroup cr,Color color) {
        if (accessible()) {
            palette.setColor(getPointer(),cr.getVal(),color.getVal());
        }
    }

    public void setBrush(PaletteColorRole cr,Brush brush) {
        if (accessible(brush)) {
            palette.setBrush(getPointer(),cr.getVal(),brush.getPointer());
        }
    }

    public boolean isBrushSet(PaletteColorGroup cg,PaletteColorRole cr) {
        if (accessible()) {
            return palette.isBrushSet(getPointer(),cg.getVal(),cr.getVal());
        }
        return false;
    }

    public void setBrush(PaletteColorGroup cg, PaletteColorRole cr,Brush brush) {
        if (accessible(brush,cg,cr)) {
            palette.setBrush(cg.getVal(),cr.getVal(),brush.getPointer());
        }
    }

    public void setColorGroup(PaletteColorGroup gp, Brush windowTextBrush,Brush buttonBrush,Brush lightBrush,
                              Brush darkBrush,Brush midBrush,Brush textBrush,
                              Brush brightTextBrush,Brush baseBrush,Brush windowBrush) {

        if (!accessible(
                windowTextBrush,
                baseBrush,
                lightBrush,
                darkBrush,
                midBrush,
                textBrush,
                brightTextBrush,
                baseBrush,
                windowBrush)) {
            throw new RuntimeException("some brush has invalid pointer, can not create a palette.");
        }
        palette.setColorGroup(getPointer(),
                gp.getVal(),
                windowTextBrush.getPointer(),
                buttonBrush.getPointer(),
                lightBrush.getPointer(),
                darkBrush.getPointer(),
                midBrush.getPointer(),
                textBrush.getPointer(),
                brightTextBrush.getPointer(),
                baseBrush.getPointer(),
                windowBrush.getPointer()
        );
    }

    public boolean isEqual(PaletteColorGroup cg1,PaletteColorGroup cg2) {
        if (accessible()) {
            return palette.isEqual(getPointer(),cg1.getVal(),cg2.getVal());
        }
        return false;
    }

    public Color color(PaletteColorRole cr) {
        if (accessible()) {
            long color = palette.color(getPointer(),cr.getVal());
            Color result = new Color();
            result.allocate(color);
            return result;
        }
        return null;
    }

    public Brush brush(PaletteColorRole cr) {
        if (accessible()) {
            long pointer = palette.brush(getPointer(),cr.getVal());
            return Brush.asBrush(pointer);
        }
        return null;
    }

    public Color getWindowText() {
        if (accessible()) {
            long color = palette.windowText(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getButton() {
        if (accessible()) {
            long color = palette.button(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getLight() {
        if (accessible()) {
            long color = palette.light(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getDark() {
        if (accessible()) {
            long color = palette.dark(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getMid() {
        if (accessible()) {
            long color = palette.mid(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getText(){
        if (accessible()) {
            long color = palette.text(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getBase() {
        if (accessible()) {
            long color = palette.base(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getAlternateBase() {
        if (accessible()) {
            long color = palette.alternateBase(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getToolTipBase(){
        if (accessible()) {
            long color = palette.toolTipBase(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getToolTipText() {
        if (accessible()) {
            long color = palette.toolTipText(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getWindow() {
        if (accessible()) {
            long color = palette.windowText(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getMidLight() {
        if (accessible()) {
            long color = palette.midlight(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getBrightText() {
        if (accessible()) {
            long color = palette.brightText(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getButtonText() {
        if (accessible()) {
            long color = palette.buttonText(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getShadow() {
        if (accessible()) {
            long color = palette.shadow(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getHighlight() {
        if (accessible()) {
            long color = palette.highlight(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getHighlightedText() {
        if (accessible()) {
            long color = palette.highlightedText(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getLink() {
        if (accessible()) {
            long color = palette.link(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getLinkVisited() {
        if (accessible()) {
            long color = palette.linkVisited(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public Color getPlaceholderText() {
        if (accessible()) {
            long color = palette.placeholderText(getPointer());
            Color rs = new Color();
            rs.allocate(color);
            return rs;
        }
        return null;
    }

    public void dispose() {
        if (accessible()) {
            palette.dispose(getPointer());
        }
    }

    public long getPointer() {
        return palette.address();
    }

    public static Palette asPalette(long address) {
        if (address <= 0) {
            throw new RuntimeException("invalid palette pointer address!");
        }
        Palette palette = new Palette();
        palette.palette.address(address);
        return palette;
    }

}
