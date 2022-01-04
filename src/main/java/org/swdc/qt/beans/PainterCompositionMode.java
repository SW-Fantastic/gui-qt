package org.swdc.qt.beans;

import java.util.Arrays;
import java.util.List;

public enum PainterCompositionMode {

    CompositionMode_SourceOver,
    CompositionMode_DestinationOver,
    CompositionMode_Clear,
    CompositionMode_Source,
    CompositionMode_Destination,
    CompositionMode_SourceIn,
    CompositionMode_DestinationIn,
    CompositionMode_SourceOut,
    CompositionMode_DestinationOut,
    CompositionMode_SourceAtop,
    CompositionMode_DestinationAtop,
    CompositionMode_Xor,

    //svg 1.2 blend modes
    CompositionMode_Plus,
    CompositionMode_Multiply,
    CompositionMode_Screen,
    CompositionMode_Overlay,
    CompositionMode_Darken,
    CompositionMode_Lighten,
    CompositionMode_ColorDodge,
    CompositionMode_ColorBurn,
    CompositionMode_HardLight,
    CompositionMode_SoftLight,
    CompositionMode_Difference,
    CompositionMode_Exclusion,

    // ROPs
    RasterOp_SourceOrDestination,
    RasterOp_SourceAndDestination,
    RasterOp_SourceXorDestination,
    RasterOp_NotSourceAndNotDestination,
    RasterOp_NotSourceOrNotDestination,
    RasterOp_NotSourceXorDestination,
    RasterOp_NotSource,
    RasterOp_NotSourceAndDestination,
    RasterOp_SourceAndNotDestination,
    RasterOp_NotSourceOrDestination,
    RasterOp_SourceOrNotDestination,
    RasterOp_ClearDestination,
    RasterOp_SetDestination,
    RasterOp_NotDestination;

    public int getVal() {
        return this.ordinal();
    }

    public static PainterCompositionMode valueOf(int index) {
        List<PainterCompositionMode> modes = Arrays.asList(PainterCompositionMode.values());
        if (index < modes.size()) {
            return modes.get(index);
        }
        return null;
    }

}
