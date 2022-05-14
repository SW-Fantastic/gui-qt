package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.CaretMode;
import org.swdc.qt.beans.CaseSensitive;
import org.swdc.qt.beans.RegExpPatternSyntax;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.text.SRegExp;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.function.Consumer;

public class RegExp implements NativeAllocated {

    private SRegExp regExp = new SRegExp();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = regExp.create();
        if (pointer <= 0) {
            throw new Exception("can not create a regexp , failed to allocate object");
        }
        regExp.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(RegExp exp) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessibleParam(exp)) {
            throw new Exception("can not allocate a regexp, invalid parameter");
        }
        long pointer = regExp.create(exp.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a regexp , failed to allocate object");
        }
        regExp.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(String pattern, CaseSensitive caseSensitive, RegExpPatternSyntax syntax) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessibleParam(pattern,caseSensitive,syntax)) {
            throw new Exception("can not create a regexp , invalid parameter");
        }
        long pointer = regExp.create(pattern,caseSensitive.getVal(),syntax.getVal());
        if (pointer <= 0) {
            throw new Exception("can not create a regexp , failed to allocate object");
        }
        regExp.address(pointer);
        MemoryHolder.allocated(this);
    }

    public boolean isEmpty() {
        if (accessible()) {
            return regExp.isEmpty(getPointer());
        }
        return true;
    }

    public boolean isValid() {
        if (accessible()) {
            return regExp.isValid(getPointer());
        }
        return false;
    }

    public String pattern() {
        if (accessible()) {
            return regExp.pattern(getPointer());
        }
        return null;
    }

    public void setPattern(String pattern) {
        if (accessible(pattern)) {
            regExp.setPattern(getPointer(),pattern);
        }
    }

    public CaseSensitive caseSensitivity() {
        if (accessible()) {
            int val = regExp.caseSensitivity(getPointer());
            return CaseSensitive.valueOf(val);
        }
        return null;
    }

    public void setCaseSensitivity(CaseSensitive caseSensitivity) {
        if (accessible(caseSensitivity)) {
            regExp.setCaseSensitivity(getPointer(),caseSensitivity.getVal());
        }
    }

    public RegExpPatternSyntax patternSyntax() {
        if (accessible()) {
            int val = regExp.patternSyntax(getPointer());
            return RegExpPatternSyntax.valueOf(val);
        }
        return null;
    }

    public void setPatternSyntax(RegExpPatternSyntax syntax) {
        if (accessible(syntax)) {
            regExp.setPatternSyntax(getPointer(),syntax.getVal());
        }
    }

    public boolean isMinimal() {
        if (accessible()) {
            return regExp.isMinimal(getPointer());
        }
        return false;
    }

    public void setMinimal(boolean minimal){
        if (accessible()) {
            regExp.setMinimal(getPointer(),minimal);
        }
    }

    public boolean exactMatch(String str) {
        if (accessible(str)) {
            return regExp.exactMatch(getPointer(),str);
        }
        return false;
    }

    public int indexIn(String str, int offset, CaretMode caretMode) {
        if (accessible(str,offset,caretMode)) {
            return regExp.indexIn(getPointer(),str,offset,caretMode.getVal());
        }
        return 0;
    }

    public int lastIndexIn(String str, int offset, CaretMode caretMode) {
        if (accessible(str,offset,caretMode)) {
            return regExp.lastIndexIn(getPointer(),str,offset,caretMode.getVal());
        }
        return 0;
    }

    public int matchedLength() {
        if (accessible()) {
            return regExp.matchedLength(getPointer());
        }
        return 0;
    }

    public int captureCount() {
        if (accessible()) {
            return regExp.captureCount(getPointer());
        }
        return 0;
    }

    public List<String> capturedTexts() {
        if (accessible()) {
            return Arrays.asList(regExp.capturedTexts(getPointer()));
        }
        return Collections.emptyList();
    }

    public String cap(int nth) {
        if (accessible()) {
            return regExp.cap(getPointer(),nth);
        }
        return null;
    }

    public int pos(int nth) {
        if (accessible()) {
            return regExp.pos(getPointer(),nth);
        }
        return 0;
    }

    public String errorString() {
        if (accessible()) {
            return regExp.errorString(getPointer());
        }
        return null;
    }

    public static String escape(String str) {
        return SRegExp.escape(str);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            regExp.dispose(getPointer());
            regExp.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return regExp.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SRegExp.CLEANER;
    }
}
