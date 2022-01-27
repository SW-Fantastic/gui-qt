package org.swdc.qt.internal.widgets;

public class SScrollArea extends SAbstractScrollArea{

    public native long create(long pointer);

    public native long widget(long pointer);
    public native void setWidget(long pointer,long widget);
    public native long takeWidget(long pointer);

    public native boolean widgetResizable(long pointer);
    public native void setWidgetResizable(long pointer,boolean resizable);

    public native long sizeHint(long pointer);

    public native boolean focusNextPrevChild(long pointer,boolean next);

    public native long alignment(long pointer);
    public native void setAlignment(long pointer,long alignment);

    public native void ensureVisible(long pointer,int x, int y, int xmargin, int ymargin);
    public native void ensureWidgetVisible(long pointer,long childWidget, int xmargin, int ymargin);

}
