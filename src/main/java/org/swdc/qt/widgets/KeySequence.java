package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SKeySequence;
import org.swdc.qt.widgets.action.SequenceStandardKey;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class KeySequence implements NativeAllocated {

    private SKeySequence keySequence = new SKeySequence();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = keySequence.create();
        if (pointer <= 0) {
            throw new Exception("can not create a key-sequence, allocate failed");
        }
        keySequence.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(String text) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = keySequence.create(text);
        if (pointer <= 0) {
            throw new Exception("can not create a key-sequence, allocate failed");
        }
        keySequence.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(SequenceStandardKey val) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = keySequence.create(val.getValue());
        if (pointer <= 0) {
            throw new Exception("can not create a key-sequence, allocate failed");
        }
        keySequence.address(pointer);
        MemoryHolder.allocated(this);
    }

    public KeySequenceMatch matches(KeySequence seq) {
        if (accessible(seq)) {
            int val = keySequence.matches(getPointer(),seq.getPointer());
            return KeySequenceMatch.valueOf(val);
        }
        return null;
    }

    public String toString(KeySequenceFormat format) {
        if (accessible(format)) {
            return keySequence.toString(getPointer(),format.getVal());
        }
        return null;
    }

    @Override
    public String toString() {
        return accessible() ? Objects.toString(this) : toString(KeySequenceFormat.PortableText);
    }

    public boolean isDetached() {
        return accessible() && keySequence.isDetached(getPointer());
    }

    @Override
    public void dispose() {
        if (accessible()) {
            keySequence.dispose(getPointer());
            keySequence.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return keySequence.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SKeySequence.CLEANER;
    }

    public static KeySequence asKeySequence(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create key-sequence, invalid pointer.");
        }
        KeySequence sequence = new KeySequence();
        sequence.keySequence.address(pointer);
        return sequence;
    }

    public static KeySequence fromString(String str,KeySequenceFormat format) {
        if (str == null || str.isEmpty() || format == null) {
            return null;
        }
        long pointer = SKeySequence.fromString(str,format.getVal());
        if (pointer <= 0) {
            return null;
        }
        return KeySequence.asKeySequence(pointer);
    }

    public static KeySequence mnemonic(String text) {
        if (text == null || text.isEmpty()) {
            return null;
        }
        long pointer = SKeySequence.mnemonic(text);
        if (pointer <= 0) {
            return null;
        }
        return KeySequence.asKeySequence(pointer);
    }

    public static List<KeySequence> keyBindings(SequenceStandardKey key) {
        if (key == null) {
            return Collections.emptyList();
        }
        long[] arr = SKeySequence.keyBindings(key.getValue());
        if (arr == null || arr.length == 0) {
            return Collections.emptyList();
        }
        return Arrays.stream(arr)
                .filter(Objects::nonNull)
                .mapToObj(KeySequence::asKeySequence)
                .collect(Collectors.toList());
    }

}
