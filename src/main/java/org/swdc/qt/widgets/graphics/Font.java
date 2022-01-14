package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SFont;

import java.io.File;

public class Font{

    private SFont font = new SFont();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = font.create();
        if (pointer <= 0) {
            throw new Exception("can not create a font");
        }
        font.address(pointer);
    }

    public void allocate(String family, int pointSize, int weight, boolean italic) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = font.create(family, pointSize, weight, italic);
        if (pointer <= 0) {
            throw new Exception("can not create a font");
        }
        font.address(pointer);
    }

    private void wrap(long pointer) {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        font.address(pointer);
    }

    public String getFamily() {
        if (getPointer() > 0) {
            return font.family(getPointer());
        }
        return null;
    }

    public void setFamily(String family) {
        if (getPointer() > 0) {
            font.setFamily(getPointer(),family);
        }
    }

    public String getStyleName() {
        if (getPointer() > 0) {
            return font.styleName(getPointer());
        }
        return null;
    }

    public void setStyleName(String name) {
        if (getPointer() > 0) {
            font.setStyleName(getPointer(),name);
        }
    }

    public int getPointSize() {
        if (getPointer() > 0) {
            return font.pointSize(getPointer());
        }
        return 0;
    }

    public void setPointSize(int size) {
        if (getPointer() > 0) {
            font.setPointSize(getPointer(),size);
        }
    }

    public double getPointSizeF() {
        if (getPointer() > 0) {
            font.pointSizeF(getPointer());
        }
        return 0;
    }

    public void setPointSizeF(double size) {
        if (getPointer() > 0) {
            font.setPointSizeF(getPointer(),size);
        }
    }

    public int getPixelSize() {
        if (getPointer() > 0) {
            return font.pixelSize(getPointer());
        }
        return 0;
    }

    public void setPixelSize(int size) {
        if (getPointer() > 0) {
            font.setPixelSize(getPointer(),size);
        }
    }

    public int getWeight() {
        if (getPointer() > 0) {
            return font.weight(getPointer());
        }
        return 0;
    }

    public void setWeight(int weight) {
        if (getPointer() > 0) {
            font.setWeight(getPointer(),weight);
        }
    }

    public boolean isBold() {
        if (getPointer() > 0) {
            return font.bold(getPointer());
        }
        return false;
    }

    public void setBold(boolean bold) {
        if (getPointer() > 0) {
            font.setBold(getPointer(),bold);
        }
    }

    public void setStyle(FontStyle fontStyle) {
        if (getPointer() > 0) {
            font.setStyle(getPointer(),fontStyle.getVal());
        }
    }

    public FontStyle getStyle() {
        if (getPointer() > 0) {
            int val = font.style(getPointer());
            return FontStyle.valueOf(val);
        }
        return null;
    }

    public boolean isItalic(){
        if (getPointer() > 0) {
            return font.italic(getPointer());
        }
        return false;
    }

    public void setItalic(boolean b) {
        if (getPointer() > 0) {
            font.setItalic(getPointer(),b);
        }
    }

    public boolean isUnderline() {
        if (getPointer() > 0) {
            return font.underline(getPointer());
        }
        return false;
    }

    public void setUnderline(boolean val) {
        if (getPointer() > 0) {
            font.setUnderline(getPointer(),val);
        }
    }

    public boolean isOverLine() {
        if (getPointer() > 0) {
            return font.overline(getPointer());
        }
        return false;
    }

    public void setOverLine(boolean val) {
        if (getPointer() > 0) {
            font.setOverline(getPointer(),val);
        }
    }

    public boolean isStrikeOut() {
        if (getPointer() > 0) {
            return font.strikeOut(getPointer());
        }
        return false;
    }

    public void setStrikeOut(boolean val) {
        if (getPointer() > 0) {
            font.setStrikeOut(getPointer(),val);
        }
    }

    public boolean isFixedPitch() {
        if(getPointer() > 0) {
            return font.fixedPitch(getPointer());
        }
        return false;
    }

    public void setFixedPitch(boolean val) {
        if (getPointer() > 0) {
            font.setFixedPitch(getPointer(),val);
        }
    }

    public boolean isKerning() {
        if (getPointer() > 0) {
            return font.kerning(getPointer());
        }
        return false;
    }

    public void setKerning(boolean val) {
        if (getPointer() > 0) {
            font.setKerning(getPointer(),val);
        }
    }

    public FontStyleHint styleHint() {
        if (getPointer() > 0) {
            int val = font.styleHint(getPointer());
            return FontStyleHint.valueOf(val);
        }
        return null;
    }

    public FontStyleStrategy getStyleStrategy() {
        if (getPointer() > 0) {
            long val = font.styleStrategy(getPointer());
            return FontStyleStrategy.valueOf(val);
        }
        return null;
    }

    public void setStyleHint(FontStyleHint styleHint, FontStyleStrategy fontStyleStrategy) {
        if (getPointer() > 0) {
            font.setStyleHint(getPointer(),styleHint.getVal(),fontStyleStrategy.getVal());
        }
    }

    public void setStyleStrategy(FontStyleStrategy fontStyleStrategy) {
        if (getPointer() > 0) {
            font.setStyleStrategy(getPointer(),fontStyleStrategy.getVal());
        }
    }

    public int getStretch() {
        if (getPointer() > 0) {
            return font.stretch(getPointer());
        }
        return 0;
    }

    public void setStretch(int val) {
        if (getPointer() > 0) {
            font.setStretch(getPointer(),val);
        }
    }

    public double getLetterSpacing(){
        if(getPointer() > 0) {
            return font.letterSpacing(getPointer());
        }
        return 0;
    }

    public FontSpacingType getLetterSpacingType() {
        if (getPointer() > 0) {
            int val = font.letterSpacingType(getPointer());
            return FontSpacingType.valueOf(val);
        }
        return null;
    }

    public void setLetterSpacing(FontSpacingType spacingType, double spacing){
        if (getPointer() > 0) {
           font.setLetterSpacing(getPointer(),spacingType.getVal(),spacing);
        }
    }

    public double getWordSpacing() {
        if (getPointer() > 0) {
            return font.wordSpacing(getPointer());
        }
        return 0;
    }

    public void setWordSpacing(double spacing) {
        if (getPointer() > 0) {
            font.setWordSpacing(getPointer(),spacing);
        }
    }

    public void setCapitalization(FontCapitalization capitalization) {
        if (getPointer() > 0) {
            font.setCapitalization(getPointer(),capitalization.getVal());
        }
    }

    public FontCapitalization getCapitalization() {
        if (getPointer() > 0) {
            int val = font.capitalization(getPointer());
            return FontCapitalization.valueOf(val);
        }
        return null;
    }

    public void setHintingPreference(FontHintingPreference hintingPreference) {
        if (getPointer() > 0) {
            font.setHintingPreference(getPointer(),hintingPreference.getVal());
        }
    }

    public FontHintingPreference getHintingPreference() {
        if (getPointer() > 0) {
            int val = font.hintingPreference(getPointer());
            return FontHintingPreference.valueOf(val);
        }
        return null;
    }

    public boolean isCopyOf(Font anotherFont) {
        if (getPointer() > 0 && anotherFont.getPointer() > 0) {
            return font.isCopyOf(getPointer(),anotherFont.getPointer());
        }
        return false;
    }

    public String key() {
        if (getPointer() > 0) {
            return font.key(getPointer());
        }
        return null;
    }

    public long getPointer() {
        return font.address();
    }

    public void dispose() {
        if (getPointer() > 0) {
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
