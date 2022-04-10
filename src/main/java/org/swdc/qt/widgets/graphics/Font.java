package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.graphics.SFont;

import java.io.File;

public class Font implements NativeAllocated {

    private SFont font = new SFont();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = font.create();
        if (pointer <= 0) {
            throw new Exception("can not create a font");
        }
        font.address(pointer);
    }

    public void allocate(String family, int pointSize, int weight, boolean italic) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = font.create(family, pointSize, weight, italic);
        if (pointer <= 0) {
            throw new Exception("can not create a font");
        }
        font.address(pointer);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        font.address(pointer);
    }

    public String getFamily() {
        if (accessible()) {
            return font.family(getPointer());
        }
        return null;
    }

    public void setFamily(String family) {
        if (accessible()) {
            font.setFamily(getPointer(),family);
        }
    }

    public String getStyleName() {
        if (accessible()) {
            return font.styleName(getPointer());
        }
        return null;
    }

    public void setStyleName(String name) {
        if (accessible()) {
            font.setStyleName(getPointer(),name);
        }
    }

    public int getPointSize() {
        if (accessible()) {
            return font.pointSize(getPointer());
        }
        return 0;
    }

    public void setPointSize(int size) {
        if (accessible()) {
            font.setPointSize(getPointer(),size);
        }
    }

    public double getPointSizeF() {
        if (accessible()) {
            font.pointSizeF(getPointer());
        }
        return 0;
    }

    public void setPointSizeF(double size) {
        if (accessible()) {
            font.setPointSizeF(getPointer(),size);
        }
    }

    public int getPixelSize() {
        if (accessible()) {
            return font.pixelSize(getPointer());
        }
        return 0;
    }

    public void setPixelSize(int size) {
        if (accessible()) {
            font.setPixelSize(getPointer(),size);
        }
    }

    public int getWeight() {
        if (accessible()) {
            return font.weight(getPointer());
        }
        return 0;
    }

    public void setWeight(int weight) {
        if (accessible()) {
            font.setWeight(getPointer(),weight);
        }
    }

    public boolean isBold() {
        if (accessible()) {
            return font.bold(getPointer());
        }
        return false;
    }

    public void setBold(boolean bold) {
        if (accessible()) {
            font.setBold(getPointer(),bold);
        }
    }

    public void setStyle(FontStyle fontStyle) {
        if (accessible()) {
            font.setStyle(getPointer(),fontStyle.getVal());
        }
    }

    public FontStyle getStyle() {
        if (accessible()) {
            int val = font.style(getPointer());
            return FontStyle.valueOf(val);
        }
        return null;
    }

    public boolean isItalic(){
        if (accessible()) {
            return font.italic(getPointer());
        }
        return false;
    }

    public void setItalic(boolean b) {
        if (accessible()) {
            font.setItalic(getPointer(),b);
        }
    }

    public boolean isUnderline() {
        if (accessible()) {
            return font.underline(getPointer());
        }
        return false;
    }

    public void setUnderline(boolean val) {
        if (accessible()) {
            font.setUnderline(getPointer(),val);
        }
    }

    public boolean isOverLine() {
        if (accessible()) {
            return font.overline(getPointer());
        }
        return false;
    }

    public void setOverLine(boolean val) {
        if (accessible()) {
            font.setOverline(getPointer(),val);
        }
    }

    public boolean isStrikeOut() {
        if (accessible()) {
            return font.strikeOut(getPointer());
        }
        return false;
    }

    public void setStrikeOut(boolean val) {
        if (accessible()) {
            font.setStrikeOut(getPointer(),val);
        }
    }

    public boolean isFixedPitch() {
        if(accessible()) {
            return font.fixedPitch(getPointer());
        }
        return false;
    }

    public void setFixedPitch(boolean val) {
        if (accessible()) {
            font.setFixedPitch(getPointer(),val);
        }
    }

    public boolean isKerning() {
        if (accessible()) {
            return font.kerning(getPointer());
        }
        return false;
    }

    public void setKerning(boolean val) {
        if (accessible()) {
            font.setKerning(getPointer(),val);
        }
    }

    public FontStyleHint styleHint() {
        if (accessible()) {
            int val = font.styleHint(getPointer());
            return FontStyleHint.valueOf(val);
        }
        return null;
    }

    public FontStyleStrategy getStyleStrategy() {
        if (accessible()) {
            long val = font.styleStrategy(getPointer());
            return FontStyleStrategy.valueOf(val);
        }
        return null;
    }

    public void setStyleHint(FontStyleHint styleHint, FontStyleStrategy fontStyleStrategy) {
        if (accessible()) {
            font.setStyleHint(getPointer(),styleHint.getVal(),fontStyleStrategy.getVal());
        }
    }

    public void setStyleStrategy(FontStyleStrategy fontStyleStrategy) {
        if (accessible()) {
            font.setStyleStrategy(getPointer(),fontStyleStrategy.getVal());
        }
    }

    public int getStretch() {
        if (accessible()) {
            return font.stretch(getPointer());
        }
        return 0;
    }

    public void setStretch(int val) {
        if (accessible()) {
            font.setStretch(getPointer(),val);
        }
    }

    public double getLetterSpacing(){
        if(accessible()) {
            return font.letterSpacing(getPointer());
        }
        return 0;
    }

    public FontSpacingType getLetterSpacingType() {
        if (accessible()) {
            int val = font.letterSpacingType(getPointer());
            return FontSpacingType.valueOf(val);
        }
        return null;
    }

    public void setLetterSpacing(FontSpacingType spacingType, double spacing){
        if (accessible()) {
           font.setLetterSpacing(getPointer(),spacingType.getVal(),spacing);
        }
    }

    public double getWordSpacing() {
        if (accessible()) {
            return font.wordSpacing(getPointer());
        }
        return 0;
    }

    public void setWordSpacing(double spacing) {
        if (accessible()) {
            font.setWordSpacing(getPointer(),spacing);
        }
    }

    public void setCapitalization(FontCapitalization capitalization) {
        if (accessible()) {
            font.setCapitalization(getPointer(),capitalization.getVal());
        }
    }

    public FontCapitalization getCapitalization() {
        if (accessible()) {
            int val = font.capitalization(getPointer());
            return FontCapitalization.valueOf(val);
        }
        return null;
    }

    public void setHintingPreference(FontHintingPreference hintingPreference) {
        if (accessible()) {
            font.setHintingPreference(getPointer(),hintingPreference.getVal());
        }
    }

    public FontHintingPreference getHintingPreference() {
        if (accessible()) {
            int val = font.hintingPreference(getPointer());
            return FontHintingPreference.valueOf(val);
        }
        return null;
    }

    public boolean isCopyOf(Font anotherFont) {
        if (accessible() && anotherFont.accessible()) {
            return font.isCopyOf(getPointer(),anotherFont.getPointer());
        }
        return false;
    }

    public String key() {
        if (accessible()) {
            return font.key(getPointer());
        }
        return null;
    }

    @Override
    public long getPointer() {
        return font.address();
    }

    @Override
    public void dispose() {
        if (accessible()) {
            font.dispose(getPointer());
            font.cleanAddress();
        }
    }

    public static Font asFont(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Font font = new Font();
        font.wrap(nativePointer);
        return font;
    }

    public static Font load(File file) {
        if (file == null || !file.exists()) {
            return null;
        }
        long pointer = SFont.loadFont(file.getAbsolutePath());
        if (pointer <= 0) {
            return null;
        }
        return asFont(pointer);
    }

}
