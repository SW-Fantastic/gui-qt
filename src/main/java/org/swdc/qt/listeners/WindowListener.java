package org.swdc.qt.listeners;

public interface WindowListener {

    void onWindowTitleChanged(String title);

    void onContextMenuRequest(int x, int y);

}
