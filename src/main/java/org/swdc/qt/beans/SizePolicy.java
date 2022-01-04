package org.swdc.qt.beans;

public enum SizePolicy {

    Fixed(0),
    Minimum(PolicyFlag.GrowFlag.getFlag()),
    Maximum(PolicyFlag.ShrinkFlag.getFlag()),
    Preferred(PolicyFlag.GrowFlag.getFlag() | PolicyFlag.ShrinkFlag.getFlag()),
    MinimumExpanding(PolicyFlag.GrowFlag.getFlag() | PolicyFlag.ExpandFlag.getFlag()),
    Expanding(PolicyFlag.GrowFlag.getFlag() | PolicyFlag.ShrinkFlag.getFlag() | PolicyFlag.ExpandFlag.getFlag()),
    Ignored(PolicyFlag.ShrinkFlag.getFlag() | PolicyFlag.GrowFlag.getFlag() | PolicyFlag.IgnoreFlag.getFlag());

    private int flagValue;
    SizePolicy(int val) {
        this.flagValue = val;
    }

    public int getFlagValue() {
        return flagValue;
    }

    public enum PolicyFlag {

        GrowFlag(1),
        ExpandFlag(2),
        ShrinkFlag(4),
        IgnoreFlag(8);

        private int flag;
        PolicyFlag(int flag) {
            this.flag = flag;
        }
        public int getFlag() {
            return flag;
        }
    }

}
