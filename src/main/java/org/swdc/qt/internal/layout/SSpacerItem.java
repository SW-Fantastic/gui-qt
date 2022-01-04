package org.swdc.qt.internal.layout;


public class SSpacerItem extends SLayoutItem {

//
//    public SSpacerItem(int width, int height) throws Exception {
//        long pointer = createSpacer(
//                width,
//                height,
//                SizePolicy.Minimum.getFlagValue(),
//                SizePolicy.Minimum.getFlagValue()
//        );
//        if (pointer <= 0) {
//            throw new Exception("can not create spacer.");
//        }
//        address(pointer);
//    }
//
//    public SSpacerItem(int width, int height, SizePolicy policyWidth, SizePolicy policyHeight) throws Exception {
//        long pointer = createSpacer(width,height,policyWidth.getFlagValue(),policyHeight.getFlagValue());
//        if (pointer <= 0) {
//            throw new Exception("can not create spacer.");
//        }
//        address(pointer);
//    }

    public native long createSpacer(int width, int height, int sizePolicyW, int sizePolicyV);

    public native boolean doDispose(long pointer);

}
