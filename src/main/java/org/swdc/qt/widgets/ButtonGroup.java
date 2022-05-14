package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SButtonGroup;

import java.util.*;
import java.util.function.Consumer;

public class ButtonGroup implements NativeAllocated {

    private SButtonGroup group = new SButtonGroup();
    private Map<Long,AbstractButton> buttons = new HashMap<>();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = group.create();
        if (pointer <= 0) {
            throw new Exception("can not create button group");
        }
        group.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void setExclusive(boolean val) {
        if (accessible()) {
            group.setExclusive(getPointer(),val);
        }
    }

    public boolean isExclusive() {
        if (accessible()) {
            return group.exclusive(getPointer());
        }
        return false;
    }

    public <T extends AbstractButton> void addButton(T button, int id) {
        if (accessible(button,id)) {
            group.addButton(getPointer(),button.getPointer(),id);
            buttons.put(button.getPointer(),button);
        }
    }

    public <T extends AbstractButton> void removeButton(T button) {
        if (accessible(button)) {
            group.removeButton(getPointer(),button.getPointer());
            buttons.remove(button.getPointer());
        }
    }

    public List<AbstractButton> buttons() {
        if (accessible()) {
            long [] pointers = group.buttons(getPointer());
            List<AbstractButton> result = new ArrayList<>();
            for (long item: pointers) {
                if (buttons.containsKey(item)) {
                    result.add(buttons.get(item));
                } else {
                    AbstractButton button = AbstractButton.asAbstractButton(item);
                    buttons.put(item,button);
                    result.add(button);
                }
            }
            return result;
        }
        return Collections.emptyList();
    }

    public <T extends AbstractButton> T checkedButton() {
        if (accessible()) {
            long pointer = group.checkedButton(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return (T)buttons.get(pointer);
        }
        return null;
    }

    public <T extends AbstractButton> T button(int id) {
        if (accessible()) {
            long pointer = group.button(getPointer(),id);
            if (pointer <= 0) {
                return null;
            }
            return (T)buttons.get(pointer);
        }
        return null;
    }

    public <T extends AbstractButton> void setId(T button, int id) {
        if (accessible(button)) {
            if (buttons.containsKey(button.getPointer())) {
                group.setId(getPointer(),button.getPointer(),id);
            }
        }
    }

    public <T extends AbstractButton> int id(T button) {
        if (accessible(button)) {
            if (buttons.containsKey(button.getPointer())) {
                return group.id(getPointer(),button.getPointer());
            }
        }
        return 0;
    }

    public int checkedId() {
        if (accessible()) {
            return group.checkedId(getPointer());
        }
        return 0;
    }

    public void dispose(){
        if (accessible()) {
            group.dispose(getPointer());
            group.cleanAddress();
        }
    }

    public long getPointer() {
        return group.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SButtonGroup.CLEANER;
    }

}
