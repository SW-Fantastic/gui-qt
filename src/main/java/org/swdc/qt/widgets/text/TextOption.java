package org.swdc.qt.widgets.text;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.beans.LayoutDirection;
import org.swdc.qt.internal.text.STextOption;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class TextOption {

    private STextOption textOption = new STextOption();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = textOption.create();
        if (pointer <= 0) {
            throw new Exception("can not create text-option, invalid pointer");
        }
        textOption.address(pointer);
    }

    public void dispose() {
        if (getPointer() > 0) {
            textOption.dispose(getPointer());
            textOption.cleanAddress();
        }
    }

    public void setAlignment(Alignment alignment) {
        if (getPointer() > 0) {
            textOption.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Alignment getAlignment() {
        if (getPointer() > 0) {
            long align = textOption.alignment(getPointer());
            return Alignment.valueOf(align);
        }
        return null;
    }

    public void setTextDirection(LayoutDirection direction) {
        if (getPointer() > 0) {
            textOption.setTextDirection(getPointer(),direction.getVal());
        }
    }

    public LayoutDirection getTextDirection() {
        if (getPointer() > 0) {
            int direct = textOption.textDirection(getPointer());
            return LayoutDirection.valueOf(direct);
        }
        return null;
    }

    public void setWrapMode(TextOptionWrapMode wrap) {
        if (getPointer() > 0) {
            textOption.setWrapMode(getPointer(),wrap.getVal());
        }
    }

    public TextOptionWrapMode getWrapMode() {
        if (getPointer() > 0) {
            int val = textOption.wrapMode(getPointer());
            return TextOptionWrapMode.valueOf(val);
        }
        return null;
    }

    public void setFlags(TextOptionFlags ...flags) {
        if (getPointer() > 0 && flags.length > 0) {
            int val = flags[0].getVal();
            for (int idx = 1; idx < flags.length; idx ++) {
                val = val | flags[idx].getVal();
            }
            textOption.setFlags(getPointer(),val);
        }
    }

    public void setTabStopDistance(double tabStopDistance) {
        if (getPointer() > 0) {
            textOption.setTabStopDistance(getPointer(),tabStopDistance);
        }
    }

    public double getTabStopDistance() {
        if (getPointer() > 0) {
            return textOption.tabStopDistance(getPointer());
        }
        return 0;
    }

    public void setTabArray(List<Double> tabStops) {
        if (getPointer() > 0 && tabStops != null && tabStops.size() > 0) {
            double[] vals = new double[tabStops.size()];
            for (int idx = 0; idx < vals.length; idx ++) {
                vals[idx] = tabStops.get(idx);
            }
            textOption.setTabArray(getPointer(),vals);
        }
    }

    public List<Double> getTabArray() {
        if (getPointer() > 0) {
            double[] vals = textOption.tabArray(getPointer());
            if (vals == null) {
                return Collections.emptyList();
            }
            List<Double> result = new ArrayList<>();
            for (double item : vals) {
                result.add(item);
            }
            return result;
        }
        return Collections.emptyList();
    }

    public void setTabs(List<TextOptionTab> tabStops) {
        if (getPointer() > 0) {
            long[] vals = new long[tabStops.size()];
            for (int idx = 0; idx < tabStops.size(); idx ++) {
                vals[idx] = tabStops.get(idx).getPointer();
            }
            textOption.setTabs(getPointer(),vals);
        }
    }

    public List<TextOptionTab> getTabs() {
        if (getPointer() > 0) {
            long[] vals = textOption.tabs(getPointer());
            List<TextOptionTab> tabs = new ArrayList<>();
            for (long item : vals) {
                tabs.add(TextOptionTab.asTextOptionTab(item));
            }
            return tabs;
        }
        return Collections.emptyList();
    }

    public void setUseDesignMetrics(boolean b){
        if (getPointer() > 0) {
            textOption.setUseDesignMetrics(getPointer(),b);
        }
    }

    public boolean isUseDesignMetrics() {
        if (getPointer() > 0) {
            return textOption.useDesignMetrics(getPointer());
        }
        return false;
    }

    public long getPointer() {
        return textOption.address();
    }

    public static TextOption asTextOption(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap a text-option, because invalid pointer");
        }
        TextOption option = new TextOption();
        option.textOption.address(pointer);
        return option;
    }

}
