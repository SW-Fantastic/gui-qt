package org.swdc.qt.widgets;

import org.swdc.qt.internal.common.SVariant;

public class Variant {

    private SVariant variant = new SVariant();

    public static Variant asVariant(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer!");
        }
        Variant variant = new Variant();
        variant.variant.address(pointer);
        return variant;
    }

    public void allocate() throws Exception {
        if (getPointer() >0 ){
            return;
        }
        long pointer = variant.create();
        if (pointer <= 0) {
            throw new Exception("can not create variant");
        }
        variant.address(pointer);
    }

    public int getInteger() {
        if (getPointer() > 0) {
            return variant.getInteger(getPointer());
        }
        return 0;
    }

    public void setInteger(int val) {
        if (getPointer() > 0) {
            variant.setInteger(getPointer(),val);
        }
    }

    public double getDouble() {
        if (getPointer() > 0) {
            return variant.getDouble(getPointer());
        }
        return 0.0;
    }

    public void setDouble(double val) {
        if (getPointer() > 0) {
            variant.setDouble(getPointer(),val);
        }
    }

    public float getFloat() {
        if (getPointer() > 0) {
            return variant.getFloat(getPointer());
        }
        return 0.0F;
    }

    public void setFloat(float val) {
        if (getPointer() > 0) {
            variant.setFloat(getPointer(),val);
        }
    }

    public long getLong() {
        if (getPointer() > 0) {
            return variant.getLong(getPointer());
        }
        return 0L;
    }

    public void setLong(long val) {
        if (getPointer() > 0) {
            variant.setLong(getPointer(),val);
        }
    }

    public String getString() {
        if (getPointer() > 0) {
            return variant.getString(getPointer());
        }
        return null;
    }

    public void setString(String val) {
        if (getPointer() > 0) {
            variant.setString(getPointer(),val);
        }
    }

    public boolean getBoolean() {
        if (getPointer() > 0) {
            return variant.getBoolean(getPointer());
        }
        return false;
    }

    public void setBoolean(boolean val) {
        if (getPointer() > 0) {
            variant.setBoolean(getPointer(),val);
        }
    }

    public char getChar() {
        if (getPointer() > 0) {
            return variant.getChar(getPointer());
        }
        return 0;
    }

    public void setChar(char val) {
        if (getPointer() > 0) {
            variant.setChar(getPointer(),val);
        }
    }

    public long getPointer() {
        return variant.address();
    }

}
