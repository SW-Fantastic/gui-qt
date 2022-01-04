package org.swdc.qt.layout;

import org.swdc.qt.internal.layout.SVBoxLayout;

public class VBoxLayout extends BoxLayout<SVBoxLayout> {

    @Override
    protected SVBoxLayout createLayoutItem() {
        return new SVBoxLayout();
    }

    @Override
    public void allocate() throws Exception {
        long pointer = layoutItem.create();
        if (pointer <= 0) {
            throw new RuntimeException("failed to create vbox-layout");
        }
        layoutItem.address(pointer);
    }

}
