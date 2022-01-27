package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SCommandLinkButton;

public class CommandLinkButton extends AbstractButton<SCommandLinkButton> {

    @Override
    protected SCommandLinkButton createButton() {
        return new SCommandLinkButton();
    }

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = button.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a command-link-button");
        }
        button.address(pointer);
    }

    public Size sizeHint() {
        if (getPointer() > 0) {
            long pointer = button.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public int heightForWidth(int val) {
        if (getPointer() > 0) {
            return button.heightForWidth(getPointer(),val);
        }
        return 0;
    }

    public Size minimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = button.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public String description() {
        if (getPointer() > 0) {
            return button.description(getPointer());
        }
        return null;
    }

    public void setDescription(String description) {
        if (getPointer() > 0) {
            button.setDescription(getPointer(),description);
        }
    }

    public long getPointer() {
        return button.address();
    }

}
