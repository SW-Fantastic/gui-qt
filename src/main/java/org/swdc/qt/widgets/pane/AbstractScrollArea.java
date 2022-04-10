package org.swdc.qt.widgets.pane;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.beans.ScrollBarPolicy;
import org.swdc.qt.beans.ScrollSizeAdjustPolicy;
import org.swdc.qt.internal.widgets.SAbstractScrollArea;
import org.swdc.qt.widgets.ScrollBar;
import org.swdc.qt.widgets.Size;
import org.swdc.qt.widgets.pane.Widget;

import java.util.*;

public abstract class AbstractScrollArea extends Widget {

    private SAbstractScrollArea abstractScrollArea = new SAbstractScrollArea();
    private Map<Alignment,Map<Long,Widget>> alignmentMap = new HashMap<>();

    private Widget cornerWidget = null;
    private Widget viewPort = null;

    public ScrollBarPolicy getVerticalScrollBarPolicy() {
        if (accessible()) {
            int policy = abstractScrollArea.verticalScrollBarPolicy(getPointer());
            return ScrollBarPolicy.valueOf(policy);
        }
        return null;
    }

    public void setVerticalScrollBarPolicy(ScrollBarPolicy val) {
        if (accessible()) {
            abstractScrollArea.setVerticalScrollBarPolicy(getPointer(),val.getVal());
        }
    }

    public ScrollBar getVerticalScrollBar() {
        if (accessible()) {
            long pointer = abstractScrollArea.verticalScrollBar(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return ScrollBar.asScrollBar(pointer);
        }
        return null;
    }

    public void setVerticalScrollBar(ScrollBar scrollbar) {
        if (accessible(scrollbar)) {
            abstractScrollArea.setVerticalScrollBar(getPointer(),scrollbar.getPointer());
        }
    }

    public ScrollBarPolicy getHorizontalScrollBarPolicy() {
        if (accessible()) {
            int val = abstractScrollArea.horizontalScrollBarPolicy(getPointer());
            return ScrollBarPolicy.valueOf(val);
        }
        return null;
    }

    public void setHorizontalScrollBarPolicy(ScrollBarPolicy val) {
        if (accessible()) {
            abstractScrollArea.setHorizontalScrollBarPolicy(getPointer(),val.getVal());
        }
    }

    public ScrollBar getHorizontalScrollBar() {
        if (accessible()) {
            long pointer = abstractScrollArea.horizontalScrollBar(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return ScrollBar.asScrollBar(pointer);
        }
        return null;
    }

    public void setHorizontalScrollBar(ScrollBar scrollbar) {
        if (accessible(scrollbar)) {
            abstractScrollArea.setHorizontalScrollBar(getPointer(),scrollbar.getPointer());
        }
    }

    public <T extends Widget> T getCornerWidget() {
        if (accessible()) {
            return (T)cornerWidget;
        }
        return null;
    }

    public <T extends Widget> void setCornerWidget(T widget) {
        if (accessible(widget)) {
            abstractScrollArea.setCornerWidget(getPointer(),widget.getPointer());
            cornerWidget = widget;
        }
    }

    public <T extends Widget> void addScrollBarWidget(T widget, Alignment alignment) {
        if (accessible(widget)) {
            abstractScrollArea.addScrollBarWidget(getPointer(),widget.getPointer(),alignment.getFlagValue());
            Map<Long,Widget> pointers = null;
            if(alignmentMap.containsKey(alignment)) {
                pointers = alignmentMap.get(alignment);
            } else {
                pointers = new HashMap<>();
            }
            pointers.put(widget.getPointer(),widget);
            alignmentMap.put(alignment,pointers);
        }
    }

    public List<Widget> getScrollBarWidgets(Alignment alignment) {
        if (accessible(alignment)) {
            if (!alignmentMap.containsKey(alignment)) {
                return Collections.emptyList();
            }
            List<Widget> result = new ArrayList<>();
            long[] widgets = abstractScrollArea.scrollBarWidgets(getPointer(),alignment.getFlagValue());
            Map<Long,Widget> widgetMap = alignmentMap.get(alignment);
            for (long pointer : widgets) {
                if (widgetMap.containsKey(pointer)) {
                    result.add(widgetMap.get(pointer));
                }
            }
            return result;
        }
        return Collections.emptyList();
    }

    public Widget getViewport() {
        if (accessible()) {
            return viewPort;
        }
        return null;
    }

    public void setViewport(Widget widget) {
        if (accessible(widget)) {
            abstractScrollArea.setViewport(getPointer(),widget.getPointer());
            viewPort = widget;
        }
    }

    public Size getMaximumViewportSize() {
        if (accessible()) {
            long pointer = abstractScrollArea.maximumViewportSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (accessible()) {
            long pointer = abstractScrollArea.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = abstractScrollArea.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setupViewport(Widget viewport) {
        if (accessible(viewport)) {
            abstractScrollArea.setupViewport(getPointer(),viewport.getPointer());
            this.viewPort = viewport;
        }
    }

    public ScrollSizeAdjustPolicy getSizeAdjustPolicy() {
        if (accessible()) {
            int val = abstractScrollArea.sizeAdjustPolicy(getPointer());
            return ScrollSizeAdjustPolicy.valueOf(val);
        }
        return null;
    }

    public void setSizeAdjustPolicy(ScrollSizeAdjustPolicy policy) {
        if (accessible(policy)) {
            abstractScrollArea.setSizeAdjustPolicy(getPointer(),policy.getVal());
        }
    }

    @Override
    public abstract long getPointer();

}
