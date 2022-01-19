package org.swdc.qt.internal.dialogs;

public class SInputDialog extends SDialog {

    public native long create(long parent);

    public native void setTextValue(long pointer,String text);
    public native String textValue(long pointer);

    public native void setTextEchoMode(long pointer,int mode);
    public native int textEchoMode(long pointer);

    public native void setIntValue(long pointer,int value);
    public native int intValue(long pointer);

    public native void setIntMinimum(long pointer,int min);
    public native int intMinimum(long pointer);

    public native void setIntMaximum(long pointer,int max);
    public native int intMaximum(long pointer);

    public native void setIntRange(long pointer,int min, int max);

    public native void setIntStep(long pointer,int step);
    public native int intStep(long pointer);

    public native void setDoubleValue(long pointer,double value);
    public native double doubleValue(long pointer);

    public native void setDoubleMinimum(long pointer,double min);
    public native double doubleMinimum(long pointer);

    public native void setDoubleMaximum(long pointer,double max);
    public native double doubleMaximum(long pointer);

    public native void setDoubleRange(long pointer,double min, double max);

    public native void setDoubleDecimals(long pointer,int decimals);
    public native int doubleDecimals(long pointer);

    public native void setOkButtonText(long pointer,String text);
    public native String okButtonText(long pointer);

    public native void setCancelButtonText(long pointer, String text);
    public native String cancelButtonText(long pointer);

    public native void setInputMode(long pointer,int mode);
    public native int  inputMode(long pointer);

    public native void setLabelText(long pointer,String text);
    public native String labelText(long pointer);

    public native void setComboBoxEditable(long pointer,boolean editable);
    public native boolean isComboBoxEditable(long pointer);

    public native void setComboBoxItems(long pointer,String[] items);
    public native String[] comboBoxItems(long pointer);

    public native void dispose(long pointer);

}
