package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

public class SVariant extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native int getInteger(long pointer);
    public native void setInteger(long pointer,int val);

    public native double getDouble(long pointer);
    public native void setDouble(long pointer, double val);

    public native float getFloat(long pointer);
    public native void  setFloat(long pointer, float val);

    public native long getLong(long pointer);
    public native void setLong(long pointer, long val);

    public native String getString(long pointer);
    public native void  setString(long pointer,String val);

    public native boolean getBoolean(long pointer);
    public native void setBoolean(long pointer, boolean val);

    public native char getChar(long pointer);
    public native void setChar(long pointer, char val);

}
