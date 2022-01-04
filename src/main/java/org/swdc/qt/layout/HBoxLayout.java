package org.swdc.qt.layout;

import org.swdc.qt.internal.layout.SHBoxLayout;

public class HBoxLayout extends BoxLayout<SHBoxLayout> {

    @Override
    protected SHBoxLayout createLayoutItem() {
        return new SHBoxLayout();
    }

    @Override
    public void allocate() throws Exception {
        long pointer = layoutItem.create();
        if (pointer <= 0) {
            throw new RuntimeException("failed to create hbox-layout");
        }
        layoutItem.address(pointer);
    }

}
