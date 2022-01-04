package org.swdc.qt.layout;

import org.swdc.qt.beans.SizePolicy;
import org.swdc.qt.internal.layout.SSpacerItem;

public class SpacerItem extends LayoutItem<SSpacerItem> {

    @Override
    protected SSpacerItem createLayoutItem() {
        return new SSpacerItem();
    }

    @Override
    public void allocate() throws Exception {
        long pointer = createSpacer(4,4, SizePolicy.Minimum,SizePolicy.Minimum);
        if (pointer <= 0) {
            throw new Exception("failed to create spacer-item");
        }
        layoutItem.address(pointer);
    }

    public void allocate(int width, int height) throws Exception {
        long pointer = createSpacer(width,height,SizePolicy.Minimum,SizePolicy.Minimum);
        if (pointer <= 0) {
            throw new Exception("failed to create spacer-item");
        }
        layoutItem.address(pointer);
    }

    public void allocate(int width, int height,SizePolicy widthPolicy,SizePolicy heightPolicy) throws Exception {
        long pointer = createSpacer(width,height,widthPolicy,heightPolicy);
        if (pointer <= 0) {
            throw new Exception("failed to create spacer-item");
        }
        layoutItem.address(pointer);
    }

    public long createSpacer(int width, int height, SizePolicy sizePolicyW, SizePolicy sizePolicyV) throws Exception {
        long pointer = layoutItem.createSpacer(width,height,sizePolicyW.getFlagValue(),sizePolicyV.getFlagValue());
        if (pointer <= 0) {
            throw new Exception("failed to create spacerItem.");
        }
        return pointer;
    }

    public boolean dispose() {
        if (layoutItem.isUsable()) {
            layoutItem.doDispose(layoutItem.address());
            layoutItem.cleanAddress();
            return true;
        }
        return false;
    }

}
