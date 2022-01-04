package org.swdc.qt.internal.widgets;

import org.swdc.qt.beans.SSize;

public class STabWidget extends SWidget {

    public native long create();
    public native int addTab(long pointer,long tabWidgetPointer, String text);
    public native int insertTab(long pointer,int index, long widgetPointer, String text);

    public native void removeTab(long pointer,int index);

    public native boolean isTabEnabled(long pointer,int index);
    public native void setTabEnabled(long pointer,int index, boolean enabled);

    public native boolean isTabVisible(long pointer,int index);
    public native void setTabVisible(long pointer,int index, boolean visible);

    public native String tabText(long pointer,int index);
    public native void setTabText(long pointer,int index, String text);

    public native void setTabToolTip(long pointer,int index, String tip);
    public native String tabToolTip(long pointer,int index);
    public native void setTabWhatsThis(long pointer,int index, String text);
    public native String tabWhatsThis(long pointer,int index);

    public native int currentIndex(long pointer);
    public native int count(long pointer);

    public native int tabPosition(long pointer);
    public native void setTabPosition(long pointer,int position);

    public native boolean tabsClosable(long pointer);
    public native void setTabsClosable(long pointer,boolean closeable);

    public native boolean isMovable(long pointer);
    public native void setMovable(long pointer,boolean movable);

    public native int tabShape(long pointer);
    public native void setTabShape(long pointer,int s);

    public native boolean usesScrollButtons(long pointer);
    public native void setUsesScrollButtons(long pointer,boolean useButtons);

    public native boolean documentMode(long pointer);
    public native void setDocumentMode(long pointer,boolean set);

    public native boolean tabBarAutoHide(long pointer);
    public native void setTabBarAutoHide(long pointer,boolean enabled);

    public native void clear(long pointer);

    public native SSize sizeHint(long pointer);
    public native SSize minimumSizeHint(long pointer);
    public native int heightForWidth(long pointer,int width);
    public native boolean hasHeightForWidth(long pointer);


}
