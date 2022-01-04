package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SRgb;

public class Color {

    private SRgb rgb;

    public void allocate(long rgb) {
        this.rgb = new SRgb(rgb);
    }

    public void allocate(int red, int blue, int green, double alpha) {
        this.rgb = new SRgb(red,blue,green,alpha);
    }

    public void allocate(String colorString) {
        if (colorString.startsWith("#")) {
            if (colorString.length() <= 4) {

                String temp = colorString.substring(1);
                colorString = "#" +
                        temp.substring(0,1).repeat(2) +
                        temp.substring(1,2).repeat(2) +
                        temp.substring(2,3).repeat(2);

            }
            int i = Integer.decode(colorString);
            this.rgb = new SRgb((i >> 16) & 0xFF, (i >> 8) & 0xFF, i & 0xFF,1);
        } else if (colorString.toLowerCase().startsWith("rgb")) {

            colorString = colorString.toLowerCase()
                    .replace("rgba","")
                    .replace("rgb","");

            colorString = colorString.substring(1,colorString.length() - 1);

            String[] rgba = colorString.split(",");

            if (rgba.length < 3) {
                throw new RuntimeException("invalid rgba format");
            }

            int r = Integer.parseInt(rgba[0]);
            int g = Integer.parseInt(rgba[1]);
            int b = Integer.parseInt(rgba[2]);
            int a = 1;
            if (rgba.length > 3) {
                a = Integer.parseInt(rgba[3]);
            }

            this.rgb = new SRgb(r,g,b,a);

        } else {
            throw new RuntimeException("invalid color format");
        }
    }

    public int getRed() {
        if (rgb == null) {
            return 0;
        }
        return rgb.red(rgb.getVal());
    }

    public int getBlue() {
        if (rgb == null) {
            return 0;
        }
        return rgb.blue(rgb.getVal());
    }

    public int getGreen() {
        if (rgb == null) {
            return 0;
        }
        return rgb.green(rgb.getVal());
    }

    public int getAlpha() {
        if (rgb == null) {
            return 0;
        }
        return rgb.alpha(rgb.getVal());
    }

    public long getVal() {
        if (rgb == null) {
            return 0;
        }
        return rgb.getVal();
    }

    public String toHexString() {
        if (rgb == null) {
            return null;
        }
        return rgb.toHexString(rgb.getVal());
    }


    public String toRgbString() {
        if (rgb == null) {
            return null;
        }
        return rgb.toRgbString(rgb.getVal());
    }

}
