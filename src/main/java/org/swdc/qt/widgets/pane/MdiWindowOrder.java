package org.swdc.qt.widgets.pane;

public enum MdiWindowOrder {

    CreationOrder(0),
    StackingOrder(1),
    ActivationHistoryOrder(2);

    private int val;
    MdiWindowOrder(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static MdiWindowOrder valueOf(int val) {
        for (MdiWindowOrder order : MdiWindowOrder.values()) {
            if (order.getVal() == val) {
                return order;
            }
        }
        return null;
    }
}
