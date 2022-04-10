package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextDocumentFragment extends SPointer {

    public native long create();
    public native long createByDocument(long document);
    public native long createByCursor(long range);
    public native long createByFragment(long rhs);

    public native void dispose(long pointer);

    public native boolean isEmpty(long pointer);

    public native String toPlainText(long pointer);
    public native String toHtml(long pointer,String encoding);

    public native static long fromPlainText(String plainText);
    public native static long fromHtml(String html);
    public native static long fromHtml(String html,long documentPointer);

}
