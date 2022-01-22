package org.swdc.qt.widgets.dialogs;

import org.swdc.qt.internal.dialogs.SMessageDialog;
import org.swdc.qt.widgets.AbstractButton;
import org.swdc.qt.widgets.PushButton;
import org.swdc.qt.widgets.graphics.Pixmap;
import org.swdc.qt.widgets.pane.Widget;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class MessageDialog extends AbstractDialog {

    private SMessageDialog dialog = new SMessageDialog();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = dialog.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a message dialog");
        }
        dialog.address(pointer);
    }

    @Override
    public <T extends Widget> void allocate(T widget) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (widget.getPointer() <= 0) {
            throw new Exception("invalid widget");
        }
        long pointer = dialog.create(widget.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a message dialog");
        }
        dialog.address(pointer);
    }

    public String getText() {
        if (getPointer() > 0) {
            return dialog.text(getPointer());
        }
        return null;
    }

    public void setText(String text) {
        if (getPointer() > 0) {
            dialog.setText(getPointer(),text);
        }
    }

    public MsgIcon getIcon() {
        if (getPointer() > 0) {
            int val = dialog.icon(getPointer());
            return MsgIcon.valueOf(val);
        }
        return null;
    }

    public void setIcon(MsgIcon icon) {
        if (getPointer() > 0) {
            dialog.setIcon(getPointer(),icon.getVal());
        }
    }

    public Pixmap iconPixmap() {
        if (getPointer() > 0) {
            long pixmap = dialog.iconPixmap(getPointer());
            if (pixmap <= 0) {
                return null;
            }
            return Pixmap.asPixmap(pixmap);
        }
        return null;
    }

    public void setIconPixmap(Pixmap pixmap) {
        if (getPointer() > 0 && pixmap.getPointer() > 0) {
            dialog.setIconPixmap(getPointer(),pixmap.getPointer());
        }
    }


    public <T extends AbstractButton> void addButton(T button, MsgButtonRoles role) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            dialog.addButton(getPointer(),button.getPointer(),role.getVal());
        }
    }

    public PushButton addButton(String text, MsgButtonRoles role) {
        if (getPointer() > 0) {
            long pointer = dialog.addButton(getPointer(),text,role.getVal());
            if (pointer <= 0) {
                return null;
            }
            return PushButton.asPushButton(pointer);
        }
        return null;
    }

    public PushButton addButton(MsgStandardButton stdButton) {
        if (getPointer() > 0) {
            long pointer = dialog.addButton(getPointer(),stdButton.getVal());
            if (pointer <= 0) {
                return null;
            }
            return PushButton.asPushButton(pointer);
        }
        return null;
    }

    public <T extends AbstractButton> void removeButton(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            dialog.removeButton(getPointer(),button.getPointer());
        }
    }

    public void setStandardButtons(MsgStandardButton ...buttons) {
        if (getPointer() > 0 && buttons.length > 0) {
            int val = buttons[0].getVal();
            for (int idx = 1; idx < buttons.length; idx ++) {
                val = val|buttons[idx].getVal();
            }
            dialog.setStandardButtons(getPointer(),val);
        }
    }

    public List<AbstractButton> buttons() {
        if (getPointer() > 0) {
            long[] pointers = dialog.buttons(getPointer());
            List<Long> values = new ArrayList<>();
            for (long val: pointers) {
                values.add(val);
            }
            return values.stream()
                    .filter(l -> l > 0)
                    .map(AbstractButton::asAbstractButton)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public <T extends AbstractButton> MsgButtonRoles buttonRole(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            int role = dialog.buttonRole(getPointer(),button.getPointer());
            return MsgButtonRoles.valueOf(role);
        }
        return null;
    }

    public <T extends AbstractButton> MsgStandardButton getStandardButtonType(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            int role = dialog.standardButton(getPointer(),button.getPointer());
            return MsgStandardButton.valueOf(role);
        }
        return null;
    }

    public AbstractButton getByStrandButton(MsgStandardButton stdButton) {
        if (getPointer() > 0) {
            long stdbtn = dialog.button(getPointer(),stdButton.getVal());
            if (stdbtn <= 0) {
                return null;
            }
            return AbstractButton.asAbstractButton(stdbtn);
        }
        return null;
    }

    public AbstractButton getDefaultButton() {
        if (getPointer() > 0) {
            long defaultButton = dialog.defaultButton(getPointer());
            if (defaultButton <= 0) {
                return null;
            }
            return AbstractButton.asAbstractButton(defaultButton);
        }
        return null;
    }

    public void setDefaultButton(PushButton button){
        if (getPointer() > 0 && button.getPointer() > 0) {
            dialog.setDefaultButton(getPointer(),button.getPointer());
        }
    }

    public void setDefaultButton(MsgStandardButton button) {
        if (getPointer() > 0) {
            dialog.setDefaultButton(getPointer(),button.getVal());
        }
    }

    public AbstractButton getEscapeButton() {
        if (getPointer() > 0) {
            long escButton = dialog.escapeButton(getPointer());
            if (escButton <= 0) {
                return null;
            }
            return AbstractButton.asAbstractButton(escButton);
        }
        return null;
    }

    public AbstractButton getClickedButton() {
        if (getPointer() > 0) {
            long clicked = dialog.clickedButton(getPointer());
            if (clicked <= 0) {
                return null;
            }
            return AbstractButton.asAbstractButton(clicked);
        }
        return null;
    }

    public void setEscapeButton(PushButton button){
        if (getPointer() > 0 && button.getPointer() > 0) {
            dialog.setEscapeButton(getPointer(),button.getPointer());
        }
    }

    public void setEscapeButton(MsgStandardButton button) {
        if (getPointer() > 0) {
            dialog.setEscapeButton(getPointer(),button.getVal());
        }
    }

    public String informativeText() {
        if (getPointer() > 0) {
            return dialog.informativeText(getPointer());
        }
        return null;
    }

    public void setInformativeText(String text) {
        if (getPointer() > 0) {
            dialog.setInformativeText(getPointer(),text);
        }
    }

    public long getPointer(){
        return dialog.address();
    }

    @Override
    public void dispose() {

    }
}
