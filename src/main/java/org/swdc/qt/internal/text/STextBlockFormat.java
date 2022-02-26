package org.swdc.qt.internal.text;

public class STextBlockFormat extends STextFormat {

    public native long create();
    public native void dispose(long pointer);

    public native boolean isValid(long pointer);

    public native void setAlignment(long pointer,long alignment);
    public native long alignment(long pointer);

    public native void setTopMargin(long pointer,double margin);
    public native long topMargin(long pointer);

    public native void setBottomMargin(long pointer,double margin);
    public native long bottomMargin(long pointer);

    public native void setLeftMargin(long pointer,double margin);
    public native double leftMargin(long pointer);

    public native void setRightMargin(long pointer,double margin);
    public native double rightMargin(long pointer);

    public native void setTextIndent(long pointer,double aindent);
    public native double textIndent(long pointer);

    public native void setIndent(long pointer,int indent);
    public native int indent(long pointer);

    public native void setHeadingLevel(long pointer,int alevel);
    public native int headingLevel(long pointer);

    public native void setLineHeight(long pointer,double height, int heightType);
    public native double lineHeight(long pointer,double scriptLineHeight, double scaling);
    public native double lineHeight(long pointer);
    public native int lineHeightType(long pointer);

    public native void setNonBreakableLines(long pointer,boolean b);
    public native boolean nonBreakableLines(long pointer);

    public native void setPageBreakPolicy(long pointer,int flags);

    // void setTabPositions(const QList<QTextOption::Tab> &tabs);
    // QList<QTextOption::Tab> tabPositions() const;

    public native void setMarker(long pointer,int marker);
    public native int marker(long pointer);

}
