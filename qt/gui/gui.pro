QT += widgets

TEMPLATE = lib
DEFINES += GUI_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AbstractButton.cpp \
    AbstractScrollArea.cpp \
    AbstractSlider.cpp \
    Action.cpp \
    Button.cpp \
    ButtonGroup.cpp \
    CheckBox.cpp \
    ComboBox.cpp \
    CommandLinkButton.cpp \
    DateEdit.cpp \
    DateTimeEdit.cpp \
    DockWidget.cpp \
    DoubleSpinBox.cpp \
    Executors.cpp \
    FontComboBox.cpp \
    Frame.cpp \
    GUI.cpp \
    GUIApplication.cpp \
    GroupBox.cpp \
    KeySequence.cpp \
    KeySequenceEdit.cpp \
    LineEdit.cpp \
    MdiArea.cpp \
    MdiSubWindow.cpp \
    Menu.cpp \
    MenuBar.cpp \
    PlainTextEdit.cpp \
    RadioButton.cpp \
    SAbstractSpinBox.cpp \
    ScrollArea.cpp \
    ScrollBar.cpp \
    Slider.cpp \
    SpinBox.cpp \
    StackWidget.cpp \
    TabWidget.cpp \
    TextEdit.cpp \
    TimeEdit.cpp \
    ToolBar.cpp \
    ToolBox.cpp \
    ToolButton.cpp \
    Widget.cpp \
    common/AbstractItemModel.cpp \
    common/ModelIndex.cpp \
    common/Variant.cpp \
    common/Line.cpp \
    common/Margin.cpp \
    common/Point.cpp \
    common/RealMargins.cpp \
    common/RealPoint.cpp \
    common/RealRect.cpp \
    common/RealSize.cpp \
    common/Rect.cpp \
    common/Size.cpp \
    date/Calendar.cpp \
    date/Date.cpp \
    date/DateTime.cpp \
    date/Time.cpp \
    dialogs/AbstractDialog.cpp \
    dialogs/InputDialog.cpp \
    dialogs/MessageDialog.cpp \
    graphics/ConicalGradient.cpp \
    graphics/Font.cpp \
    graphics/Gradient.cpp \
    graphics/Icon.cpp \
    graphics/LinearGradient.cpp \
    graphics/PainterPath.cpp \
    graphics/Palette.cpp \
    graphics/RadialGradient.cpp \
    graphics/Transformation.cpp \
    graphics/Image.cpp \
    graphics/Bitmap.cpp \
    graphics/Brush.cpp \
    graphics/Painter.cpp \
    graphics/Pen.cpp \
    graphics/Pixmap.cpp \
    graphics/Rgb.cpp \
    layout/Layout.cpp \
    layout/BoxLayout.cpp \
    layout/HBoxLayout.cpp \
    layout/LayoutItem.cpp \
    layout/SpacerItem.cpp \
    layout/VBoxLayout.cpp \
    text/AbstractTextLayout.cpp \
    text/RegExp.cpp \
    text/RegularExpression.cpp \
    text/RegularExpressionMatch.cpp \
    text/RegularExpressionMatchIterator.cpp \
    text/TextBlock.cpp \
    text/TextBlockFormat.cpp \
    text/TextBlockIter.cpp \
    text/TextCharFotmat.cpp \
    text/TextCursor.cpp \
    text/TextDocument.cpp \
    text/TextDocumentFragment.cpp \
    text/TextDocumentLayoutPaintContext.cpp \
    text/TextDocumentLayoutSelection.cpp \
    text/TextEditExtraSelection.cpp \
    text/TextFormat.cpp \
    text/TextFragment.cpp \
    text/TextFrame.cpp \
    text/TextFrameFormat.cpp \
    text/TextFrameIterator.cpp \
    text/TextImageFormat.cpp \
    text/TextLayout.cpp \
    text/TextLayoutFormatRange.cpp \
    text/TextLength.cpp \
    text/TextLine.cpp \
    text/TextList.cpp \
    text/TextListFormat.cpp \
    text/TextOption.cpp \
    text/TextOptionTab.cpp \
    text/TextTable.cpp \
    text/TextTableCell.cpp \
    text/TextTableCellFormat.cpp \
    text/TextTableFormat.cpp

HEADERS += \
    Executors.h \
    gui_global.h \
    java/common/org_swdc_qt_internal_common_SAbstractItemModel.h \
    java/common/org_swdc_qt_internal_common_SLine.h \
    java/common/org_swdc_qt_internal_common_SMargins.h \
    java/common/org_swdc_qt_internal_common_SModelIndex.h \
    java/common/org_swdc_qt_internal_common_SPoint.h \
    java/common/org_swdc_qt_internal_common_SRealMargins.h \
    java/common/org_swdc_qt_internal_common_SRealPoint.h \
    java/common/org_swdc_qt_internal_common_SRealRect.h \
    java/common/org_swdc_qt_internal_common_SRealSize.h \
    java/common/org_swdc_qt_internal_common_SRect.h \
    java/common/org_swdc_qt_internal_common_SSize.h \
    java/common/org_swdc_qt_internal_common_SVariant.h \
    java/date/org_swdc_qt_internal_date_SCalendar.h \
    java/date/org_swdc_qt_internal_date_SDate.h \
    java/date/org_swdc_qt_internal_date_SDateTime.h \
    java/date/org_swdc_qt_internal_date_STime.h \
    java/dialogs/org_swdc_qt_internal_dialogs_SDialog.h \
    java/dialogs/org_swdc_qt_internal_dialogs_SInputDialog.h \
    java/dialogs/org_swdc_qt_internal_dialogs_SMessageDialog.h \
    java/dialogs/types/SInputDialog.h \
    java/dialogs/types/SMessageDialog.h \
    java/graphics/org_swdc_qt_internal_graphics_SConicalGradient.h \
    java/graphics/org_swdc_qt_internal_graphics_SFont.h \
    java/graphics/org_swdc_qt_internal_graphics_SGradient.h \
    java/graphics/org_swdc_qt_internal_graphics_SIcon.h \
    java/graphics/org_swdc_qt_internal_graphics_SLinearGradient.h \
    java/graphics/org_swdc_qt_internal_graphics_SPainterPath.h \
    java/graphics/org_swdc_qt_internal_graphics_SPalette.h \
    java/graphics/org_swdc_qt_internal_graphics_SRadialGradient.h \
    java/jni.h \
    java/layout/org_swdc_qt_internal_layout_SBoxLayout.h \
    java/layout/org_swdc_qt_internal_layout_SHBoxLayout.h \
    java/layout/org_swdc_qt_internal_layout_SLayout.h \
    java/layout/org_swdc_qt_internal_layout_SLayoutItem.h \
    java/layout/org_swdc_qt_internal_layout_SSpacerItem.h \
    java/layout/org_swdc_qt_internal_layout_SVBoxLayout.h \
    java/graphics/org_swdc_qt_Platform.h \
    java/graphics/org_swdc_qt_SApplication.h \
    java/graphics/org_swdc_qt_internal_graphics_SBitmap.h \
    java/graphics/org_swdc_qt_internal_graphics_SBrush.h \
    java/graphics/org_swdc_qt_internal_graphics_SImage.h \
    java/graphics/org_swdc_qt_internal_graphics_SPainter.h \
    java/graphics/org_swdc_qt_internal_graphics_SPen.h \
    java/graphics/org_swdc_qt_internal_graphics_SPixmap.h \
    java/graphics/org_swdc_qt_internal_graphics_SRgb.h \
    java/graphics/org_swdc_qt_internal_graphics_STransformation.h \
    java/org_swdc_qt_SApplication.h \
    java/org_swdc_qt_internal_widgets_SAbstractButton.h \
    java/org_swdc_qt_internal_widgets_SAbstractScrollArea.h \
    java/org_swdc_qt_internal_widgets_SAbstractSlider.h \
    java/org_swdc_qt_internal_widgets_SAbstractSpinBox.h \
    java/org_swdc_qt_internal_widgets_SAction.h \
    java/org_swdc_qt_internal_widgets_SButton.h \
    java/org_swdc_qt_internal_widgets_SButtonGroup.h \
    java/org_swdc_qt_internal_widgets_SCheckBox.h \
    java/org_swdc_qt_internal_widgets_SComboBox.h \
    java/org_swdc_qt_internal_widgets_SCommandLinkButton.h \
    java/org_swdc_qt_internal_widgets_SDateEdit.h \
    java/org_swdc_qt_internal_widgets_SDateTimeEdit.h \
    java/org_swdc_qt_internal_widgets_SDockWidget.h \
    java/org_swdc_qt_internal_widgets_SDoubleSpinBox.h \
    java/org_swdc_qt_internal_widgets_SFontComboBox.h \
    java/org_swdc_qt_internal_widgets_SFrame.h \
    java/org_swdc_qt_internal_widgets_SGroupBox.h \
    java/org_swdc_qt_internal_widgets_SKeySequence.h \
    java/org_swdc_qt_internal_widgets_SKeySequenceEdit.h \
    java/org_swdc_qt_internal_widgets_SLineEdit.h \
    java/org_swdc_qt_internal_widgets_SMdiArea.h \
    java/org_swdc_qt_internal_widgets_SMdiSubWindow.h \
    java/org_swdc_qt_internal_widgets_SMenu.h \
    java/org_swdc_qt_internal_widgets_SMenuBar.h \
    java/org_swdc_qt_internal_widgets_SPlainTextEdit.h \
    java/org_swdc_qt_internal_widgets_SRadioButton.h \
    java/org_swdc_qt_internal_widgets_SScrollArea.h \
    java/org_swdc_qt_internal_widgets_SScrollBar.h \
    java/org_swdc_qt_internal_widgets_SSlider.h \
    java/org_swdc_qt_internal_widgets_SSpinBox.h \
    java/org_swdc_qt_internal_widgets_SStackWidget.h \
    java/org_swdc_qt_internal_widgets_STabWidget.h \
    java/org_swdc_qt_internal_widgets_STextEdit.h \
    java/org_swdc_qt_internal_widgets_STimeEdit.h \
    java/org_swdc_qt_internal_widgets_SToolBar.h \
    java/org_swdc_qt_internal_widgets_SToolBox.h \
    java/org_swdc_qt_internal_widgets_SToolButton.h \
    java/org_swdc_qt_internal_widgets_SWidget.h \
    java/text/org_swdc_qt_internal_text_SAbstractTextLayout.h \
    java/text/org_swdc_qt_internal_text_SRegExp.h \
    java/text/org_swdc_qt_internal_text_SRegularExpression.h \
    java/text/org_swdc_qt_internal_text_SRegularExpressionMatch.h \
    java/text/org_swdc_qt_internal_text_SRegularExpressionMatchIterator.h \
    java/text/org_swdc_qt_internal_text_STextBlock.h \
    java/text/org_swdc_qt_internal_text_STextBlockFormat.h \
    java/text/org_swdc_qt_internal_text_STextBlockIterator.h \
    java/text/org_swdc_qt_internal_text_STextCharFormat.h \
    java/text/org_swdc_qt_internal_text_STextCursor.h \
    java/text/org_swdc_qt_internal_text_STextDocument.h \
    java/text/org_swdc_qt_internal_text_STextDocumentFragment.h \
    java/text/org_swdc_qt_internal_text_STextDocumentLayoutPaintContext.h \
    java/text/org_swdc_qt_internal_text_STextDocumentLayoutSelection.h \
    java/text/org_swdc_qt_internal_text_STextEditExtraSelection.h \
    java/text/org_swdc_qt_internal_text_STextFormat.h \
    java/text/org_swdc_qt_internal_text_STextFragment.h \
    java/text/org_swdc_qt_internal_text_STextFrame.h \
    java/text/org_swdc_qt_internal_text_STextFrameFormat.h \
    java/text/org_swdc_qt_internal_text_STextFrameIterator.h \
    java/text/org_swdc_qt_internal_text_STextImageFormat.h \
    java/text/org_swdc_qt_internal_text_STextLayout.h \
    java/text/org_swdc_qt_internal_text_STextLayoutFormatRange.h \
    java/text/org_swdc_qt_internal_text_STextLength.h \
    java/text/org_swdc_qt_internal_text_STextLine.h \
    java/text/org_swdc_qt_internal_text_STextList.h \
    java/text/org_swdc_qt_internal_text_STextListFormat.h \
    java/text/org_swdc_qt_internal_text_STextOption.h \
    java/text/org_swdc_qt_internal_text_STextOptionTab.h \
    java/text/org_swdc_qt_internal_text_STextTable.h \
    java/text/org_swdc_qt_internal_text_STextTableCell.h \
    java/text/org_swdc_qt_internal_text_STextTableCellFormat.h \
    java/text/org_swdc_qt_internal_text_STextTableFormat.h \
    java/types/SCheckBox.h \
    java/types/SComboBox.h \
    java/types/SCommandLinkButton.h \
    java/types/SDateEdit.h \
    java/types/SDateTimeEdit.h \
    java/types/SDockWidget.h \
    java/types/SDoubleSpinBox.h \
    java/types/SFontComboBox.h \
    java/types/SFrame.h \
    java/types/SGroupBox.h \
    java/types/SKeySequenceEdit.h \
    java/types/SLineEdit.h \
    java/types/SMdiArea.h \
    java/types/SMenuBar.h \
    java/types/SPlainTextEdit.h \
    java/types/SPushButton.h \
    java/types/SRadioButton.h \
    java/types/SScrollArea.h \
    java/types/SScrollBar.h \
    java/types/SSlider.h \
    java/types/SSpinBox.h \
    java/types/SStackWidget.h \
    java/types/STabWidget.h \
    java/types/STextEdit.h \
    java/types/STimeEdit.h \
    java/types/SToolBar.h \
    java/types/SToolBox.h \
    java/types/SToolButton.h \
    java/types/SWidget.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
