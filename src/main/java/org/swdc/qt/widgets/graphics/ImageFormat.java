package org.swdc.qt.widgets.graphics;

public enum ImageFormat {

    Format_Invalid(0),
    Format_Mono(1),
    Format_MonoLSB(2),
    Format_Indexed8(3),
    Format_RGB32(4),
    Format_ARGB32(5),
    Format_ARGB32_Premultiplied(6),
    Format_RGB16(7),
    Format_ARGB8565_Premultiplied(8),
    Format_RGB666(9),
    Format_ARGB6666_Premultiplied(10),
    Format_RGB555(11),
    Format_ARGB8555_Premultiplied(12),
    Format_RGB888(13),
    Format_RGB444(14),
    Format_ARGB4444_Premultiplied(15),
    Format_RGBX8888(16),
    Format_RGBA8888(17),
    Format_RGBA8888_Premultiplied(18),
    Format_BGR30(19),
    Format_A2BGR30_Premultiplied(20),
    Format_RGB30(21),
    Format_A2RGB30_Premultiplied(22),
    Format_Alpha8(23),
    Format_Grayscale8(24),
    Format_RGBX64(25),
    Format_RGBA64(26),
    Format_RGBA64_Premultiplied(27),
    Format_Grayscale16(28),
    Format_BGR888(29);

    private int val;
    ImageFormat(int val) {
        this.val = val;
    }

    public static ImageFormat valueOf(int val) {
        ImageFormat[] formats = ImageFormat.values();
        if (val < formats.length) {
            return formats[val];
        } else {
            return null;
        }
    }
}
