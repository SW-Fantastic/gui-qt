package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SAbstractButton;
import org.swdc.qt.widgets.pane.Widget;

public abstract class AbstractButton<T extends SAbstractButton> extends Widget {

    protected T button = createButton();

    protected abstract T createButton();

    public abstract void allocate() throws Exception;

    public void setText(String text) {
        if (getPointer() > 0) {
            button.setText(getPointer(),text);
        }
    }
    
    public String getText() {
        if (getPointer() > 0) {
            return button.getText(getPointer());
        }
        return "";
    }

    public void setCheckable(boolean val) {
        if (getPointer() > 0) {
            button.setCheckable(getPointer(),val);
        }
    }

    public boolean isCheckable() {
        if (getPointer() > 0) {
            return button.isCheckable(getPointer());
        }
        return false;
    }

    public boolean isChecked() {
        if (getPointer() > 0) {
            return button.isChecked(getPointer());
        }
        return false;
    }

    public void setDown(boolean val) {
        if (getPointer() > 0) {
            button.setDown(getPointer(),val);
        }
    }

    public boolean isDown() {
        if (getPointer() > 0){
            return button.isDown(getPointer());
        }
        return false;
    }

    public void setAutoRepeat(boolean val) {
        if (getPointer() > 0) {
            button.setAutoRepeat(getPointer(),val);
        }
    }

    public boolean isAutoRepeat() {
        if (getPointer() > 0) {
            return button.autoRepeat(getPointer());
        }
        return false;
    }

    public void setAutoRepeatDelay(int value) {
        if (getPointer() > 0) {
            button.setAutoRepeatDelay(getPointer(),value);
        }
    }

    public int getAutoRepeatDelay() {
        if (getPointer() > 0) {
            return button.autoRepeatDelay(getPointer());
        }
        return 0;
    }

    public void setAutoRepeatInterval(int val) {
        if (getPointer() > 0) {
            button.setAutoRepeatInterval(getPointer(),val);
        }
    }

    public int getAutoRepeatInterval() {
        if (getPointer() > 0) {
            return button.autoRepeatInterval(getPointer());
        }
        return 0;
    }

    public void setAutoExclusive(boolean val) {
        if (getPointer() > 0) {
            button.setAutoExclusive(getPointer(),val);
        }
    }

    public boolean isAutoExclusive() {
        if (getPointer() > 0) {
            return button.autoExclusive(getPointer());
        }
        return false;
    }


}
