package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.common.SVariant;

import java.util.function.Consumer;

public class Variant implements NativeAllocated {

    private SVariant variant = new SVariant();

    public static Variant asVariant(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer!");
        }
        Variant variant = new Variant();
        variant.variant.address(pointer);
        MemoryHolder.allocated(variant);

        return variant;
    }

    public void allocate() {
        if (getPointer() >0 ){
            return;
        }
        long pointer = variant.create();
        if (pointer <= 0) {
            throw new RuntimeException("can not create variant");
        }
        variant.address(pointer);
        MemoryHolder.allocated(this);
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

    @Override
    public void dispose() {
        if (accessible()){
            variant.dispose(getPointer());
            variant.cleanAddress();
        }
    }

    public long getPointer() {
        return variant.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SVariant.CLEANER;
    }
}
