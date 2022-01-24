package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SAbstractButton;
import org.swdc.qt.widgets.graphics.Icon;
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

    public void setChecked(boolean checked) {
        if (getPointer() > 0) {
            button.setChecked(getPointer(),checked);
        }
    }

    public void setIcon(Icon icon) {
        if (getPointer() > 0 && icon.getPointer() > 0) {
            button.setIcon(getPointer(),icon.getPointer());
        }
    }

    public Icon icon() {
        if (getPointer() > 0) {
            long iconPointer = button.icon(getPointer());
            if (iconPointer <= 0) {
                return null;
            }
            return Icon.asIcon(iconPointer);
        }
        return null;
    }

    public Size iconSize(){
        if (getPointer() > 0) {
            long iconSize = button.iconSize(getPointer());
            if (iconSize <= 0) {
                return null;
            }
            return Size.asSize(iconSize);
        }
        return null;
    }

    public void setIconSize(Size size) {
        if (getPointer() > 0 && size.getPointer() > 0) {
            button.setIconSize(getPointer(),size.getPointer());
        }
    }

    /**
     * 如果Qt没有明确返回的按钮类型，或者指定为QAbstractButton，那么应该使用此方法
     * 包装C++返回的Pointer。
     *
     * @param pointer QAbstractButton的指针。
     * @return 包装好的Button
     */
    public static AbstractButton asAbstractButton(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        AbstractButton button = new AbstractButton() {
            @Override
            protected SAbstractButton createButton() {
                return new SAbstractButton(){};
            }

            @Override
            public void allocate() throws Exception {
            }

            @Override
            public long getPointer() {
                return pointer;
            }
        };
        button.button.wrap(pointer);
        return button;
    }

}
