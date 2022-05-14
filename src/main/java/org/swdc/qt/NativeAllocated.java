package org.swdc.qt;

import java.util.Arrays;
import java.util.Objects;
import java.util.function.Consumer;

public interface NativeAllocated {

    default boolean accessible(Object ...objs) {
        if (objs == null || objs.length == 0) {
            return this.getPointer() > 0;
        }

        return getPointer() > 0 && Arrays.stream(objs)
                .filter(Objects::nonNull)
                .filter(o -> o.getClass().isPrimitive() || !(o instanceof NativeAllocated) || ((NativeAllocated) o).getPointer() > 0)
                .count() == objs.length;
    }

    default boolean accessibleParam(Object ...objs) {
        if (objs == null || objs.length == 0) {
            return true;
        }

        return Arrays.stream(objs)
                .filter(Objects::nonNull)
                .filter(o -> o.getClass().isPrimitive() || !(o instanceof NativeAllocated) || ((NativeAllocated) o).getPointer() > 0)
                .count() == objs.length;
    }

    void dispose();

    long getPointer();

    Consumer<Long> disposer();


}
