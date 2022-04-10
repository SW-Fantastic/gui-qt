package org.swdc.qt.widgets.text;

import org.swdc.qt.beans.DocTextLengthType;
import org.swdc.qt.internal.text.STextLength;

public class TextLength {

    private STextLength length = new STextLength();

    public void allocate(DocTextLengthType type,double val) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = length.create(type.getVal(),val);
        if (pointer <= 0) {
            throw new Exception("can not create a text length.");
        }
        length.address(pointer);
    }

    public void dispose() {
        if (getPointer() > 0) {
            length.dispose(getPointer());
            length.cleanAddress();
        }
    }

    public long getPointer() {
        return length.address();
    }

    public DocTextLengthType getType() {
        if (getPointer() > 0) {
            int type = length.type(getPointer());
            return DocTextLengthType.valueOf(type);
        }
        return null;
    }

    public double value(double maximumLength) {
        if (getPointer() > 0) {
            return length.value(getPointer(),maximumLength);
        }
        return 0;
    }

    public double rawValue() {
        if (getPointer() > 0) {
            return length.rawValue(getPointer());
        }
        return 0;
    }

    public static TextLength asTextLength(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap a text-length, invalid pointer");
        }
        TextLength length = new TextLength();
        length.length.address(pointer);
        return length;
    }

}
