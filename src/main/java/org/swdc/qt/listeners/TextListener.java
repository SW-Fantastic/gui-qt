package org.swdc.qt.listeners;

public interface TextListener {

    void textChanged(String text);

    void textEdited(String text);

    void cursorPositionChanged(int x, int y);

    void returnPressed();

    void editingFinished();

    void selectionChanged();

    void inputRejected();

}
