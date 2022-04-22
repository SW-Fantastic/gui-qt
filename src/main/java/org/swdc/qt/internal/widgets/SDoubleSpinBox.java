package org.swdc.qt.internal.widgets;

public class SDoubleSpinBox extends SAbstractSpinBox {

    public native long create(long parentPointer);
    public native void dispose(long pointer);

    public native double value(long pointer) ;

    public native String prefix(long pointer) ;
    public native void setPrefix(long pointer,String prefix);

    public native String suffix(long pointer) ;
    public native void setSuffix(long pointer,String suffix);

    public native String cleanText(long pointer) ;

    public native double singleStep(long pointer) ;
    public native void setSingleStep(long pointer,double val);

    public native double minimum(long pointer) ;
    public native void setMinimum(long pointer,double min);

    public native double maximum(long pointer) ;
    public native void setMaximum(long pointer,double max);

    public native void setRange(long pointer,double min, double max);

    public native int stepType(long pointer) ;
    public native void setStepType(long pointer,int stepType);

    public native int decimals(long pointer) ;
    public native void setDecimals(long pointer,int prec);

    //QValidator::State validate(String input, int pos)  override;
    public native double valueFromText(long pointer,String text) ;
    public native String textFromValue(long pointer,double val) ;
    public native void fixup(long pointer,String str);

}
