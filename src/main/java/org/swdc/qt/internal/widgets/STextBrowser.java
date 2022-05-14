package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class STextBrowser extends STextEdit {

    private static final STextBrowser instance = new STextBrowser();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parent);
    public native void dispose(long pointer);

    public native String source(long pointer);
    public native int sourceType(long pointer);

    public native String[] searchPaths(long pointer);
    public native void setSearchPaths(long pointer,String[] paths);

    public native long loadResource(long pointer,int type,String url);

    public native boolean isBackwardAvailable(long pointer);
    public native boolean isForwardAvailable(long pointer);
    public native void clearHistory(long pointer);
    public native String historyTitle(long pointer,int val);
    public native String historyUrl(long pointer,int val);
    public native int backwardHistoryCount(long pointer);
    public native int forwardHistoryCount(long pointer);

    public native boolean openExternalLinks(long pointer);
    public native void setOpenExternalLinks(long pointer,boolean open);

    public native boolean openLinks(long pointer);
    public native void setOpenLinks(long pointer,boolean open);

    public native void setSource(long pointer,String url,int type);

    public native void backward(long pointer);
    public native void forward(long pointer);
    public native void home(long pointer);
    public native void reload(long pointer);

}
