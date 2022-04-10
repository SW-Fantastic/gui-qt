package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextCharFormat;
import org.swdc.qt.widgets.graphics.*;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class TextCharFormat extends TextFormat {

    private STextCharFormat charFormat = new STextCharFormat();

    public void allocate()throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = charFormat.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text char format , invalid pointer");
        }
        charFormat.address(pointer);
    }

    @Override
    public void allocate(TextFormatType type) throws Exception {
        throw new Exception("please call the allocator without parameter");
    }

    public void dispose() {
        if (accessible() ) {
            charFormat.dispose(getPointer());
        }
    }

    public boolean isValid() {
        if (accessible()) {
            return charFormat.isValid(getPointer());
        }
        return false;
    }

    public void setFont(Font font, TextCharFormatFontBehavior behavior) {
        if (accessible(font,behavior)) {
            charFormat.setFont(getPointer(),font.getPointer(),behavior.getVal());
        }
    }

    public void setFont(Font font) {
        if (accessible(font)) {
            charFormat.setFont(getPointer(),font.getPointer());
        }
    }

    public Font getFont() {
        if (accessible()) {
            long pointer = charFormat.font(getPointer());
            if (pointer > 0) {
                return Font.asFont(pointer);
            }
        }
        return null;
    }

    public void setFontFamily(String family) {
        if (accessible(family)) {
            charFormat.setFontFamily(getPointer(),family);
        }
    }

    public String getFontFamily() {
        if (accessible()) {
            return charFormat.fontFamily(getPointer());
        }
        return null;
    }

    public void setFontFamilies(List<String> families) {
        if (accessible(families)) {
            String[] vals = families.toArray(new String[0]);
            charFormat.setFontFamilies(getPointer(),vals);
        }
    }

    public List<String> fontFamilies() {
        if (accessible()) {

            List<String> result = new ArrayList<>();
            String[] vals = charFormat.fontFamilies(getPointer());
            if (vals != null) {
                result.addAll(Arrays.asList(vals));
            }
            return result;
        }
        return Collections.emptyList();
    }

    public void setFontStyleName(String styleName) {
        if (accessible(styleName)) {
            charFormat.setFontStyleName(getPointer(),styleName);
        }
    }

    public String getFontStyleName() {
        if (accessible()) {
            return charFormat.fontStyleName(getPointer());
        }
        return null;
    }

    public void setFontPointSize(double size) {
        if (accessible()) {
            charFormat.setFontPointSize(getPointer(),size);
        }
    }

    public double fontPointSize() {
        if (accessible()) {
            return charFormat.fontPointSize(getPointer());
        }
        return 0;
    }

    public void setFontWeight(int weight) {
        if (accessible()) {
            charFormat.setFontWeight(getPointer(),weight);
        }
    }

    public int getFontWeight() {
        if (accessible()) {
            return charFormat.fontWeight(getPointer());
        }
        return 0;
    }

    public void setFontItalic(boolean italic) {
        if (accessible()) {
            charFormat.setFontItalic(getPointer(),italic);
        }
    }

    public boolean getFontItalic() {
        if (accessible()) {
            return charFormat.fontItalic(getPointer());
        }
        return false;
    }

    public void setFontCapitalization(FontCapitalization capitalization) {
        if (accessible(capitalization)) {
            charFormat.setFontCapitalization(getPointer(),capitalization.getVal());
        }
    }

    public FontCapitalization getFontCapitalization() {
        if (accessible()) {
            int val = charFormat.fontCapitalization(getPointer());
            return FontCapitalization.valueOf(val);
        }
        return null;
    }

    public void setFontLetterSpacingType(FontSpacingType letterSpacingType) {
        if (accessible(letterSpacingType)) {
            charFormat.setFontLetterSpacingType(getPointer(),letterSpacingType.getVal());
        }
    }

    public FontSpacingType getFontLetterSpacingType() {
        if (accessible()) {
            int val = charFormat.fontLetterSpacingType(getPointer());
            return FontSpacingType.valueOf(val);
        }
        return null;
    }

    public void setFontLetterSpacing(double spacing) {
        if (accessible()) {
            charFormat.setFontLetterSpacing(getPointer(),spacing);
        }
    }

    public double getFontLetterSpacing() {
        if (accessible()) {
            return charFormat.fontLetterSpacing(getPointer());
        }
        return 0;
    }

    public void setFontWordSpacing(double spacing) {
        if (accessible()) {
            charFormat.setFontWordSpacing(getPointer(),spacing);
        }
    }

    public double getFontWordSpacing() {
        if (accessible()) {
            return charFormat.fontWordSpacing(getPointer());
        }
        return 0;
    }

    public void setFontUnderline(boolean underline) {
        if (accessible()) {
            charFormat.setFontUnderline(getPointer(),underline);
        }
    }

    public boolean getFontUnderline() {
        if (accessible()) {
            return charFormat.fontUnderline(getPointer());
        }
        return false;
    }

    public void setFontOverline(boolean overline) {
        if (accessible()) {
            charFormat.setFontOverline(getPointer(),overline);
        }
    }

    public boolean getFontOverline() {
        if (accessible()) {
            return charFormat.fontOverline(getPointer());
        }
        return false;
    }

    public void setFontStrikeOut(boolean strikeOut) {
        if (accessible()) {
            charFormat.setFontStrikeOut(getPointer(),strikeOut);
        }
    }

    public boolean getFontStrikeOut() {
        if (accessible()) {
            return charFormat.fontStrikeOut(getPointer());
        }
        return false;
    }

    public void setUnderlineColor(Color color) {
        if (accessible() && color != null) {
            charFormat.setUnderlineColor(getPointer(),color.getVal());
        }
    }

    public Color getUnderlineColor() {
        if (accessible()) {
            long val = charFormat.underlineColor(getPointer());
            Color color = new Color();
            color.allocate(val);
            return color;
        }
        return null;
    }

    public void setFontFixedPitch(boolean fixedPitch) {
        if (accessible()) {
            charFormat.setFontFixedPitch(getPointer(),fixedPitch);
        }
    }

    public boolean getFontFixedPitch() {
        if (accessible()) {
            return charFormat.fontFixedPitch(getPointer());
        }
        return false;
    }

    public void setFontStretch(int val) {
        if (accessible()) {
            charFormat.setFontStretch(getPointer(),val);
        }
    }

    public int getFontStretch() {
        if (accessible()) {
            return charFormat.fontStretch(getPointer());
        }
        return 0;
    }

    public void setFontStyleHint(int hint, FontStyleStrategy strategy) {
        if (accessible()) {
            charFormat.setFontStyleHint(getPointer(),hint,strategy.getVal());
        }
    }

    public void setFontStyleStrategy(FontStyleStrategy strategy) {
        if (accessible()) {
            charFormat.setFontStyleStrategy(getPointer(),strategy.getVal());
        }
    }
    public FontStyleHint getFontStyleHint() {
        if (accessible()) {
            int val = charFormat.fontStyleHint(getPointer());
            return FontStyleHint.valueOf(val);
        }
        return null;
    }

    public FontStyleStrategy fontStyleStrategy() {
        if (accessible()) {
            long val = charFormat.fontStyleStrategy(getPointer());
            return FontStyleStrategy.valueOf(val);
        }
        return null;
    }

    public void setFontHintingPreference(FontHintingPreference hintingPreference) {
        if (accessible()) {
            charFormat.setFontHintingPreference(getPointer(),hintingPreference.getVal());
        }
    }

    public FontHintingPreference getFontHintingPreference() {
        if (accessible()) {
            int val = charFormat.fontHintingPreference(getPointer());
            return FontHintingPreference.valueOf(val);
        }
        return null;
    }

    public void setFontKerning(boolean enable) {
        if (accessible()) {
            charFormat.setFontKerning(getPointer(),enable);
        }
    }

    public boolean getFontKerning() {
        if (accessible()) {
            return charFormat.fontKerning(getPointer());
        }
        return false;
    }

    public void setUnderlineStyle(TextCharFormatUnderLineStyle style) {
        if (accessible()) {
            charFormat.setUnderlineStyle(getPointer(),style.getVal());
        }
    }

    public TextCharFormatUnderLineStyle getUnderlineStyle() {
        if (accessible()) {
            int val = charFormat.underlineStyle(getPointer());
            return TextCharFormatUnderLineStyle.valueOf(val);
        }
        return null;
    }

    public void setVerticalAlignment(TextCharFormatVerticalAlignment alignment) {
        if (accessible()) {
            charFormat.setVerticalAlignment(getPointer(),alignment.getVal());
        }
    }

    public TextCharFormatVerticalAlignment getVerticalAlignment() {
        if (accessible()) {
            int val = charFormat.verticalAlignment(getPointer());
            return TextCharFormatVerticalAlignment.valueOf(val);
        }
        return null;
    }

    public void setTextOutline(Pen pen) {
        if (accessible(pen)) {
            charFormat.setTextOutline(getPointer(),pen.getPointer());
        }
    }

    public Pen getTextOutline() {
        if (accessible()) {
            long pointer = charFormat.textOutline(getPointer());
            if (pointer > 0) {
                return Pen.asPen(pointer);
            }
        }
        return null;
    }

    public void setToolTip(String tip) {
        if (accessible()) {
            charFormat.setToolTip(getPointer(),tip);
        }
    }

    public String getToolTip() {
        if (accessible()) {
            return charFormat.toolTip(getPointer());
        }
        return null;
    }

    public void setAnchor(boolean anchor) {
        if (accessible()) {
            charFormat.setAnchor(getPointer(),anchor);
        }
    }

    public boolean isAnchor() {
        if (accessible()) {
            return charFormat.isAnchor(getPointer());
        }
        return false;
    }

    public void setAnchorHref(String value) {
        if (accessible(value)) {
            charFormat.setAnchorHref(getPointer(),value);
        }
    }

    public String getAnchorHref() {
        if (accessible()) {
            return charFormat.anchorHref(getPointer());
        }
        return null;
    }


    public long getPointer() {
        return charFormat.address();
    }

    public static TextCharFormat asTextCharFormat(long pointer ){
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap a text-char-format because the pointer is invalid");
        }
        TextCharFormat format = new TextCharFormat();
        format.charFormat.address(pointer);
        return format;
    }

}
