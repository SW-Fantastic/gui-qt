package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextOptionTab;

public class TextOptionTab {

    private STextOptionTab tab = new STextOptionTab();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = tab.address();
        if (pointer <= 0) {
            throw new Exception("can not create a text-option-tab, invalid pointer");
        }
        tab.address(pointer);
    }

    public void dispose() {
        if (getPointer() > 0) {
            tab.dispose(getPointer());
            tab.cleanAddress();
        }
    }

    public double getPosition() {
        if (getPointer() > 0) {
            return tab.position(getPointer());
        }
        return 0;
    }

    public void setPosition(double val) {
        if (getPointer() > 0) {
            tab.position(getPointer(),val);
        }
    }

    public TextOptionTabType getType() {
        if (getPointer() > 0) {
            int val = tab.type(getPointer());
            return TextOptionTabType.valueOf(val);
        }
        return null;
    }

    public void setType(TextOptionTabType type) {
        if (getPointer() > 0) {
            tab.type(getPointer(),type.getVal());
        }
    }

    public Character getDelimiter(){
        if (getPointer() > 0) {
            return tab.delimiter(getPointer());
        }
        return null;
    }

    public void setDelimiter(char delim) {
        if (getPointer() > 0) {
            tab.delimiter(getPointer(),delim);
        }
    }

    public long getPointer() {
        return tab.address();
    }

    public static TextOptionTab asTextOptionTab(long pointer) {
        if(pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        TextOptionTab tab = new TextOptionTab();
        tab.tab.address(pointer);
        return tab;
    }

}
