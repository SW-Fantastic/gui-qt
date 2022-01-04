package org.swdc.qt.listeners;

public interface ActionListener {

    void onAction(boolean isSelected);
    void onToggle(boolean isSelected);

    void onHover();
    void onChanged();

}
