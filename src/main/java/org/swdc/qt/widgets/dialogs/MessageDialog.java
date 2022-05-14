package org.swdc.qt.widgets.dialogs;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.dialogs.SMessageDialog;
import org.swdc.qt.widgets.AbstractButton;
import org.swdc.qt.widgets.PushButton;
import org.swdc.qt.widgets.graphics.Pixmap;
import org.swdc.qt.widgets.pane.Widget;

import java.util.*;

public class MessageDialog extends AbstractDialog {

    private SMessageDialog dialog = new SMessageDialog();
    private Map<Long,AbstractButton> buttons = new HashMap<>();

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
        MemoryHolder.allocated(this);
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
        MemoryHolder.allocated(this);
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


    /**
     * 添加指定按钮到MessageBox。
     * @param button 被添加的按钮
     * @param role 按钮的角色
     * @param <T> 按钮类型
     */
    public <T extends AbstractButton> void addButton(T button, MsgButtonRoles role) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (buttons.containsKey(button.getPointer())) {
                return;
            }
            dialog.addButton(getPointer(),button.getPointer(),role.getVal());
            buttons.put(button.getPointer(),button);
        }
    }

    /**
     * 添加一个按钮到此MessageBox
     * @param text 按钮显示的文本
     * @param role 按钮的角色
     * @return 添加好的按钮
     */
    public PushButton addButton(String text, MsgButtonRoles role) {
        if (getPointer() > 0) {
            long pointer = dialog.addButton(getPointer(),text,role.getVal());
            if (pointer <= 0) {
                return null;
            }
            PushButton pushButton = PushButton.asPushButton(pointer);
            buttons.put(pointer,pushButton);
            return pushButton;
        }
        return null;
    }

    /**
     * 直接使用StandardButton为MessageBox添加按钮。
     *
     * 请注意，这个按钮您将不能使用setPaintListener进行重绘，但是
     * QSS（CSS）仍然可以用于修饰它。
     *
     * 不能使用paintEvent是因为我没有办法修改Qt的MessageBox里面
     * 的DialogButtonBox的行为，至少目前是这样，我没有办法直接修改已经
     * 存在的QPushButton的paintEvent方法，其他的addButton方法里面的按钮
     * 是被我接管的SPushButton，他们能够回调paintListener。
     *
     * @param stdButton StandardButton标准按钮类型
     * @return 被添加的按钮
     */
    public PushButton addButton(MsgStandardButton stdButton) {
        if (getPointer() > 0) {
            long pointer = dialog.addButton(getPointer(),stdButton.getVal());
            if (pointer <= 0) {
                return null;
            }
            PushButton button =  PushButton.asPushButton(pointer);
            buttons.put(button.getPointer(),button);
            return button;
        }
        return null;
    }

    public <T extends AbstractButton> void removeButton(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (buttons.containsKey(button.getPointer())) {
                buttons.remove(button.getPointer());
                dialog.removeButton(getPointer(),button.getPointer());
            }
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
            List<AbstractButton> values = new ArrayList<>();
            for (long val: pointers) {
                if (buttons.containsKey(val)) {
                    values.add(buttons.get(val));
                } else {
                    AbstractButton button = AbstractButton.asAbstractButton(val);
                    buttons.put(val,button);
                    values.add(button);
                }
            }
            return values;
        }
        return Collections.emptyList();
    }

    public <T extends AbstractButton> MsgButtonRoles buttonRole(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (!buttons.containsKey(button.getPointer())) {
                return null;
            }
            int role = dialog.buttonRole(getPointer(),button.getPointer());
            return MsgButtonRoles.valueOf(role);
        }
        return null;
    }

    public <T extends AbstractButton> MsgStandardButton getStandardButtonType(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (!buttons.containsKey(button.getPointer())) {
                return null;
            }
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
            if (buttons.containsKey(stdbtn)) {
                return buttons.get(stdbtn);
            } else {
                AbstractButton button = AbstractButton.asAbstractButton(stdbtn);
                buttons.put(stdbtn,button);
                return button;
            }
        }
        return null;
    }

    public AbstractButton getDefaultButton() {
        if (getPointer() > 0) {
            long defaultButton = dialog.defaultButton(getPointer());
            if (defaultButton <= 0) {
                return null;
            }
            if (buttons.containsKey(defaultButton)) {
                return buttons.get(defaultButton);
            } else {
                AbstractButton button = AbstractButton.asAbstractButton(defaultButton);
                buttons.put(defaultButton,button);
                return button;
            }
        }
        return null;
    }

    public void setDefaultButton(PushButton button){
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (buttons.containsKey(button.getPointer())) {
                dialog.setDefaultButton(getPointer(),button.getPointer());
            }
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
            if (buttons.containsKey(escButton)) {
                return buttons.get(escButton);
            } else {
                AbstractButton button = AbstractButton.asAbstractButton(escButton);
                buttons.put(escButton,button);
                return button;
            }
        }
        return null;
    }

    public AbstractButton getClickedButton() {
        if (getPointer() > 0) {
            long clicked = dialog.clickedButton(getPointer());
            if (clicked <= 0) {
                return null;
            }
            if (buttons.containsKey(clicked)) {
                return buttons.get(clicked);
            } else {
                AbstractButton abstractButton = AbstractButton.asAbstractButton(clicked);
                buttons.put(clicked,abstractButton);
                return abstractButton;
            }
        }
        return null;
    }

    public void setEscapeButton(PushButton button){
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (buttons.containsKey(button.getPointer())) {
                dialog.setEscapeButton(getPointer(),button.getPointer());
            }
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
        if (getPointer() > 0) {
            dialog.dispose(getPointer());
            for (AbstractButton item: this.buttons.values()) {
                if (item.getPointer() > 0) {
                    item.dispose();
                }
            }
            buttons.clear();
        }
    }
}
