package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.RegularExpressionMatchType;
import org.swdc.qt.internal.text.SRegularExpressionMatch;
import org.swdc.qt.internal.text.SRegularExpressionMatchIterator;

import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

public class RegularExpressionMatch implements NativeAllocated {

    private SRegularExpressionMatch match = new SRegularExpressionMatch();

    public static class RegularExpressionMatchIterator implements Iterator<RegularExpressionMatch> {

        private SRegularExpressionMatchIterator iterator;

        public RegularExpressionMatchIterator(SRegularExpressionMatchIterator iterator) {
            this.iterator = iterator;
        }

        @Override
        public boolean hasNext() {
            return iterator != null && iterator.hasNext();
        }

        @Override
        public RegularExpressionMatch next() {
            return iterator != null ? RegularExpressionMatch
                    .asRegularExpressionMatch(iterator.next()) :
                    null;
        }
    }

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = match.create();
        if (pointer <= 0) {
            throw new Exception("can not create a regular-express-match");
        }
        match.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            match.dispose(getPointer());
            match.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return match.address();
    }

    public RegularExpression getRegularExpression() {
        if (accessible()) {
            long pointer = match.regularExpression(getPointer());
            if (pointer > 0) {
                return RegularExpression.asRegularExpression(pointer);
            }
        }
        return null;
    }

    public RegularExpressionMatchType getMatchType() {
        if (accessible()) {
            int val = match.matchType(getPointer());
            return RegularExpressionMatchType.valueOf(val);
        }
        return null;
    }

    public boolean hasMatch() {
        if(accessible()) {
            return match.hasMatch(getPointer());
        }
        return false;
    }

    public boolean hasPartialMatch() {
        if (accessible()) {
            return match.hasPartialMatch(getPointer());
        }
        return false;
    }

    public boolean isValid() {
        if (accessible()) {
            return match.isValid(getPointer());
        }
        return false;
    }

    public int lastCapturedIndex() {
        if (accessible()) {
            return match.lastCapturedIndex(getPointer());
        }
        return 0;
    }

    public String captured(int nth) {
        if (accessible()) {
            return match.captured(getPointer(),nth);
        }
        return null;
    }

    public String captured(String name) {
        if (accessible()) {
            return match.captured(getPointer(),name);
        }
        return null;
    }

    public List<String> capturedTexts() {
        if (accessible()) {
            return Arrays.asList(match.capturedTexts(getPointer()));
        }
        return Collections.emptyList();
    }

    public int capturedStart(int nth) {
        if (accessible()) {
            return match.capturedStart(getPointer(),nth);
        }
        return 0;
    }

    public int capturedLength(int nth) {
        if (accessible()) {
            return match.capturedLength(getPointer(),nth);
        }
        return 0;
    }

    public int capturedEnd(int nth) {
        if (accessible()) {
            return match.capturedEnd(getPointer(),nth);
        }
        return 0;
    }

    public int capturedStart(String name) {
        if (accessible()) {
            return match.capturedStart(getPointer(),name);
        }
        return 0;
    }

    public int capturedLength(String name) {
        if (accessible()) {
            return match.capturedLength(getPointer(),name);
        }
        return 0;
    }

    public int capturedEnd(String name) {
        if (accessible()) {
            return match.capturedEnd(getPointer(),name);
        }
        return 0;
    }

    public static RegularExpressionMatch asRegularExpressionMatch(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a regular-expression-match, invalid pointer");
        }
        RegularExpressionMatch match = new RegularExpressionMatch();
        match.match.address(pointer);
        return match;
    }

}
