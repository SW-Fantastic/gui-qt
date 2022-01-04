package org.swdc.qt.widgets.graphics;

public enum ImageConversation {

    ColorMode_Mask(0x00000003),
    AutoColor(0x00000000),
    ColorOnly(0x00000003),
    MonoOnly (0x00000002),

    AlphaDither_Mask(0x0000000c),
    ThresholdAlphaDither(0x00000000),
    OrderedAlphaDither(0x00000004),
    DiffuseAlphaDither(0x00000008),
    NoAlpha(0x0000000c), // Not supported

    Dither_Mask(0x00000030),
    DiffuseDither(0x00000000),
    OrderedDither(0x00000010),
    ThresholdDither(0x00000020),

    DitherMode_Mask(0x000000c0),
    AutoDither(0x00000000),
    PreferDither(0x00000040),
    AvoidDither(0x00000080),

    NoOpaqueDetection(0x00000100),
    NoFormatConversion(0x00000200);

    private long val;
    ImageConversation(long val) {
        this.val = val;
    }

    public long getVal() {
        return val;
    }

    public static ImageConversation valueOf(int val) {
        ImageConversation[] conversations = ImageConversation.values();
        for (ImageConversation conversation: conversations) {
            if (conversation.getVal() == val) {
                return conversation;
            }
        }
        return null;
    }

}
