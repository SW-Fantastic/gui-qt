package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.RegularExpressionMatchType;
import org.swdc.qt.beans.RegularPatternOptions;
import org.swdc.qt.internal.text.SRegularExpression;
import org.swdc.qt.internal.text.SRegularExpressionMatchIterator;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;

public class RegularExpression implements NativeAllocated {

    private SRegularExpression regularExpression = new SRegularExpression();

    public static RegularExpression asRegularExpression(long pointer) {

        if (pointer <= 0) {
            throw new RuntimeException("can not create a regular-expression , invalid pointer");
        }
        RegularExpression expression = new RegularExpression();
        expression.regularExpression.address(pointer);
        return expression;
    }

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = regularExpression.create();
        if (pointer <= 0) {
            throw new Exception("can not create a regular-expression, invalid pointer");
        }
        regularExpression.address(pointer);
    }

    public void allocate(String pattern, RegularPatternOptions ...options) throws Exception {
        if (accessible()) {
            return;
        }
        if (options == null || options.length == 0) {
            options = new RegularPatternOptions[] { RegularPatternOptions.NoPatternOption };
        }

        int val = Arrays.stream(options)
                .filter(Objects::nonNull)
                .mapToInt(RegularPatternOptions::getVal)
                .reduce((a,b) -> a|b)
                .orElse(RegularPatternOptions.NoPatternOption.getVal());

        long pointer = regularExpression.create(pattern,val);
        if (pointer <= 0) {
            throw new Exception("can not create a regular-expression, invalid pointer");
        }
        regularExpression.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            regularExpression.dispose(getPointer());
            regularExpression.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return regularExpression.address();
    }

    public void setPatternOptions(RegularPatternOptions ...options) {
        if (accessible() && options != null && options.length > 0) {

            int val = Arrays.stream(options)
                    .filter(Objects::nonNull)
                    .mapToInt(RegularPatternOptions::getVal)
                    .reduce((a,b) -> a|b)
                    .orElse(RegularPatternOptions.NoPatternOption.getVal());

            regularExpression.setPatternOptions(getPointer(),val);
        }
    }

    public String getPattern() {
        if (accessible()) {
            return regularExpression.pattern(getPointer());
        }
        return null;
    }

    public void setPattern(String pattern) {
        if (accessible(pattern)) {
            regularExpression.setPattern(getPointer(),pattern);
        }
    }

    public boolean isValid() {
        if (accessible()) {
            return regularExpression.isValid(getPointer());
        }
        return false;
    }

    public int patternErrorOffset() {
        if (accessible()) {
            return regularExpression.patternErrorOffset(getPointer());
        }
        return 0;
    }

    public String errorString() {
        if (accessible()) {
            return regularExpression.errorString(getPointer());
        }
        return null;
    }

    public int captureCount() {
        if (accessible()) {
            return regularExpression.captureCount(getPointer());
        }
        return 0;
    }

    public List<String> namedCaptureGroups() {
        if (accessible()) {
            return Arrays.asList(regularExpression.namedCaptureGroups(getPointer()));
        }
        return Collections.emptyList();
    }

    public RegularExpressionMatch match(String subject,
                             int offset,
                             RegularExpressionMatchType matchType,
                             RegularPatternOptions ...matchOptions) {
        if (accessible()) {
            int val = Arrays.stream(matchOptions)
                    .filter(Objects::nonNull)
                    .mapToInt(RegularPatternOptions::getVal)
                    .reduce((a,b) -> a|b)
                    .orElse(RegularPatternOptions.NoPatternOption.getVal());

            long pointer = regularExpression.match(getPointer(),subject,offset,matchType.getVal(),val);
            if (pointer > 0) {
                return RegularExpressionMatch.asRegularExpressionMatch(pointer);
            }
        }
        return null;
    }

    public RegularExpressionMatch.RegularExpressionMatchIterator globalMatch(String subject,
                                                                              int offset,
                                                                              RegularExpressionMatchType matchType,
                                                                              RegularPatternOptions ...matchOptions) {
        if (accessible(subject,offset,matchType) && matchOptions != null) {
            int val = Arrays.stream(matchOptions)
                    .filter(Objects::nonNull)
                    .mapToInt(RegularPatternOptions::getVal)
                    .reduce((a,b) -> a|b)
                    .orElse(RegularPatternOptions.NoPatternOption.getVal());

            SRegularExpressionMatchIterator iter = regularExpression.globalMatch(subject,offset,matchType.getVal(),val);
            return new RegularExpressionMatch.RegularExpressionMatchIterator(iter);
        }
        return null;
    }


    public void optimize() {
        if (accessible()) {
            regularExpression.optimize(getPointer());
        }
    }

    public static String escape(String str) {
        return SRegularExpression.escape(str);
    }

    public static String wildcardToRegularExpression(String str) {
        return SRegularExpression.wildcardToRegularExpression(str);
    }

    public static String anchoredPattern(String expression) {
        return SRegularExpression.anchoredPattern(expression);
    }

}
