package org.swdc.qt.internal;

import org.swdc.qt.NativeAllocated;

import java.lang.ref.Cleaner;
import java.util.*;
import java.util.concurrent.ConcurrentHashMap;
import java.util.function.Consumer;

public class MemoryHolder {

    private static List<Long> addressList = new ArrayList<>();
    private static Cleaner cleaner = Cleaner.create();

    public static void allocated(NativeAllocated pointer) {

        long addr = pointer.getPointer();
        Consumer<Long> deAllocator = pointer.disposer();

        addressList.add(addr);
        cleaner.register(pointer,() -> {
            if (addressList.contains(addr)) {
                deAllocator.accept(addr);
                addressList.remove(addr);
            }
        });
    }

    public static void onDispose(long address) {
        addressList.remove(address);
    }

}
