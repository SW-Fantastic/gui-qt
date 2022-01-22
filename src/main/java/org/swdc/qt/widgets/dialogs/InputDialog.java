package org.swdc.qt.widgets.dialogs;

import org.swdc.qt.internal.dialogs.SInputDialog;
import org.swdc.qt.widgets.EditEchoMode;
import org.swdc.qt.widgets.pane.Widget;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class InputDialog extends AbstractDialog {

    private SInputDialog inputDialog = new SInputDialog();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = inputDialog.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a input dialog");
        }
        inputDialog.address(pointer);
    }

    @Override
    public <T extends Widget> void allocate(T widget) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (widget.getPointer() <= 0) {
            throw new Exception("invalid widget");
        }
        long pointer = inputDialog.create(widget.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a input dialog");
        }
        inputDialog.address(pointer);
    }

    public void setTextValue(String text) {
        if (getPointer() > 0) {
            inputDialog.setTextValue(getPointer(),text);
        }
    }

    public String getTextValue() {
        if (getPointer() > 0) {
            return inputDialog.textValue(getPointer());
        }
        return null;
    }

    public void setTextEchoMode(EditEchoMode mode){
        if(getPointer() > 0) {
            inputDialog.setTextEchoMode(getPointer(),mode.getVal());
        }
    }

    public EditEchoMode getTextEchoMode() {
        if (getPointer() > 0) {
            int mode = inputDialog.textEchoMode(getPointer());
            return EditEchoMode.valueOf(mode);
        }
        return null;
    }

    public void setIntValue(int value) {
        if (getPointer() > 0) {
            inputDialog.setIntValue(getPointer(),value);
        }
    }

    public int getIntValue() {
        if (getPointer() > 0) {
            return inputDialog.intValue(getPointer());
        }
        return 0;
    }

    public void setIntMinimum(int min) {
        if (getPointer() > 0) {
            inputDialog.setIntMinimum(getPointer(),min);
        }
    }

    public int getIntMinimum() {
        if (getPointer() > 0) {
            return inputDialog.intMinimum(getPointer());
        }
        return 0;
    }

    public void setIntMaximum(int max) {
        if (getPointer() > 0) {
            inputDialog.setIntMaximum(getPointer(),max);
        }
    }

    public int getIntMaximum() {
        if (getPointer() > 0) {
            return inputDialog.intMaximum(getPointer());
        }
        return 0;
    }

    public void setIntRange(int min, int max) {
        if (getPointer() > 0) {
            inputDialog.setIntRange(getPointer(),min,max);
        }
    }

    public void setIntStep(int step) {
        if (getPointer() > 0) {
            inputDialog.setIntStep(getPointer(),step);
        }
    }

    public int getIntStep(){
        if (getPointer() > 0) {
            return inputDialog.intStep(getPointer());
        }
        return 0;
    }

    public void setDoubleValue(double value) {
        if (getPointer() > 0) {
            inputDialog.setDoubleValue(getPointer(),value);
        }
    }

    public double getDoubleValue() {
        if (getPointer() > 0) {
            return inputDialog.doubleValue(getPointer());
        }
        return 0;
    }

    public void setDoubleMinimum(double min) {
        if (getPointer() > 0) {
            inputDialog.setDoubleMinimum(getPointer(),min);
        }
    }

    public double getDoubleMinimum() {
        if (getPointer() > 0) {
            return inputDialog.doubleMinimum(getPointer());
        }
        return 0;
    }

    public void setDoubleMaximum(double max) {
        if (getPointer() > 0) {
            inputDialog.setDoubleMaximum(getPointer(),max);
        }
    }

    public double getDoubleMaximum() {
        if (getPointer() > 0) {
            return inputDialog.doubleMaximum(getPointer());
        }
        return 0;
    }

    public void setDoubleRange(double min, double max) {
        if (getPointer() > 0) {
            inputDialog.setDoubleRange(getPointer(),min,max);
        }
    }

    public void setDoubleDecimals(int decimals) {
        if (getPointer() > 0) {
            inputDialog.setDoubleDecimals(getPointer(),decimals);
        }
    }

    public int getDoubleDecimals() {
        if (getPointer() > 0) {
            return inputDialog.doubleDecimals(getPointer());
        }
        return 0;
    }

    public void setOkButtonText(String text) {
        if (getPointer() > 0) {
            inputDialog.setOkButtonText(getPointer(),text);
        }
    }

    public String getOkButtonText() {
        if (getPointer() > 0) {
            return inputDialog.okButtonText(getPointer());
        }
        return null;
    }

    public void setCancelButtonText(String text) {
        if (getPointer() > 0) {
            inputDialog.setCancelButtonText(getPointer(), text);
        }
    }

    public String getCancelButtonText() {
        if (getPointer() > 0) {
            return inputDialog.cancelButtonText(getPointer());
        }
        return null;
    }

    public void setInputMode(DialogInputMode mode) {
        if (getPointer() > 0) {
            inputDialog.setInputMode(getPointer(),mode.getVal());
        }
    }

    public DialogInputMode getInputMode() {
        if (getPointer() > 0) {
           int mode = inputDialog.inputMode(getPointer());
           return DialogInputMode.valueOf(mode);
        }
        return null;
    }

    public void setLabelText(String text) {
        if (getPointer() > 0) {
            inputDialog.setLabelText(getPointer(),text);
        }
    }

    public String getLabelText() {
        if (getPointer() > 0) {
            return inputDialog.labelText(getPointer());
        }
        return null;
    }

    public List<String> getComboBoxItems() {
        if (getPointer() > 0) {
            String[] items = inputDialog.comboBoxItems(getPointer());
            return Arrays.asList(items);
        }
        return Collections.emptyList();
    }

    public void setComboBoxItems(List<String> items) {
        if (getPointer() > 0) {
            String[] values = items.toArray(new String[0]);
            inputDialog.setComboBoxItems(getPointer(),values);
        }
    }

    public void setComboBoxEditable(boolean editable) {
        if (getPointer() > 0) {
            inputDialog.setComboBoxEditable(getPointer(),editable);
        }
    }

    public boolean isComboBoxEditable() {
        if (getPointer() > 0) {
            return inputDialog.isComboBoxEditable(getPointer());
        }
        return false;
    }

    @Override
    public void dispose() {
        if (getPointer() > 0) {
            inputDialog.dispose(getPointer());
            inputDialog.cleanAddress();
        }
    }

    public long getPointer() {
        return inputDialog.address();
    }

}
