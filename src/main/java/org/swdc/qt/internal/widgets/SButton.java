package org.swdc.qt.internal.widgets;

import org.swdc.qt.listeners.ClickedListener;

public class SButton extends SAbstractButton {

    private ClickedListener clickedListener = null;

    public void setClickedListener(ClickedListener clickedListener) {
        this.clickedListener = clickedListener;
    }

    public ClickedListener getClickedListener() {
        return clickedListener;
    }

    private void onClickedEvent() {
        if (clickedListener == null) {
            return;
        }
        this.clickedListener.onClicked();
    }

    public native long create(long parentPointer, String text);

}
