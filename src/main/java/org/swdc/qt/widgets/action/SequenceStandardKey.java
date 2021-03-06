package org.swdc.qt.widgets.action;

import java.util.Arrays;
import java.util.List;

public enum SequenceStandardKey {

    UnknownKey,
    HelpContents,
    WhatsThis,
    Open,
    Close,
    Save,
    New,
    Delete,
    Cut,
    Copy,
    Paste,
    Undo,
    Redo,
    Back,
    Forward,
    Refresh,
    ZoomIn,
    ZoomOut,
    Print,
    AddTab,
    NextChild,
    PreviousChild,
    Find,
    FindNext,
    FindPrevious,
    Replace,
    SelectAll,
    Bold,
    Italic,
    Underline,
    MoveToNextChar,
    MoveToPreviousChar,
    MoveToNextWord,
    MoveToPreviousWord,
    MoveToNextLine,
    MoveToPreviousLine,
    MoveToNextPage,
    MoveToPreviousPage,
    MoveToStartOfLine,
    MoveToEndOfLine,
    MoveToStartOfBlock,
    MoveToEndOfBlock,
    MoveToStartOfDocument,
    MoveToEndOfDocument,
    SelectNextChar,
    SelectPreviousChar,
    SelectNextWord,
    SelectPreviousWord,
    SelectNextLine,
    SelectPreviousLine,
    SelectNextPage,
    SelectPreviousPage,
    SelectStartOfLine,
    SelectEndOfLine,
    SelectStartOfBlock,
    SelectEndOfBlock,
    SelectStartOfDocument,
    SelectEndOfDocument,
    DeleteStartOfWord,
    DeleteEndOfWord,
    DeleteEndOfLine,
    InsertParagraphSeparator,
    InsertLineSeparator,
    SaveAs,
    Preferences,
    Quit,
    FullScreen,
    Deselect,
    DeleteCompleteLine,
    Backspace,
    Cancel;

    private static List<SequenceStandardKey> keyList = Arrays.asList(SequenceStandardKey.values());

    public static SequenceStandardKey valueOf(int enumVal) {
        SequenceStandardKey[] keys = SequenceStandardKey.values();
        if (enumVal <= keys.length) {
            return keys[enumVal];
        }
        return null;
    }

    public int getValue() {
        return keyList.indexOf(this);
    }

}
