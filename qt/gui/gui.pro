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
    CommandLinkButton.cpp \
    Executors.cpp \
    Frame.cpp \
    GUI.cpp \
    GUIApplication.cpp \
    GroupBox.cpp \
    LineEdit.cpp \
    Menu.cpp \
    MenuBar.cpp \
    RadioButton.cpp \
    ScrollArea.cpp \
    ScrollBar.cpp \
    StackWidget.cpp \
    TabWidget.cpp \
    ToolBar.cpp \
    ToolButton.cpp \
    Widget.cpp \
    common/Line.cpp \
    common/Margin.cpp \
    common/Point.cpp \
    common/RealMargins.cpp \
    common/RealPoint.cpp \
    common/RealRect.cpp \
    common/RealSize.cpp \
    common/Rect.cpp \
    common/Size.cpp \
    dialogs/AbstractDialog.cpp \
    dialogs/InputDialog.cpp \
    dialogs/MessageDialog.cpp \
    graphics/ConicalGradient.cpp \
    graphics/Font.cpp \
    graphics/Gradient.cpp \
    graphics/Icon.cpp \
    graphics/LinearGradient.cpp \
    graphics/PainterPath.cpp \
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
    layout/VBoxLayout.cpp

HEADERS += \
    Executors.h \
    gui_global.h \
    gui.h \
    java/common/org_swdc_qt_internal_common_SLine.h \
    java/common/org_swdc_qt_internal_common_SMargins.h \
    java/common/org_swdc_qt_internal_common_SPoint.h \
    java/common/org_swdc_qt_internal_common_SRealMargins.h \
    java/common/org_swdc_qt_internal_common_SRealPoint.h \
    java/common/org_swdc_qt_internal_common_SRealRect.h \
    java/common/org_swdc_qt_internal_common_SRealSize.h \
    java/common/org_swdc_qt_internal_common_SRect.h \
    java/common/org_swdc_qt_internal_common_SSize.h \
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
    java/org_swdc_qt_internal_widgets_SAction.h \
    java/org_swdc_qt_internal_widgets_SButton.h \
    java/org_swdc_qt_internal_widgets_SButtonGroup.h \
    java/org_swdc_qt_internal_widgets_SCheckBox.h \
    java/org_swdc_qt_internal_widgets_SCommandLinkButton.h \
    java/org_swdc_qt_internal_widgets_SFrame.h \
    java/org_swdc_qt_internal_widgets_SGroupBox.h \
    java/org_swdc_qt_internal_widgets_SLineEdit.h \
    java/org_swdc_qt_internal_widgets_SMenu.h \
    java/org_swdc_qt_internal_widgets_SMenuBar.h \
    java/org_swdc_qt_internal_widgets_SRadioButton.h \
    java/org_swdc_qt_internal_widgets_SScrollArea.h \
    java/org_swdc_qt_internal_widgets_SScrollBar.h \
    java/org_swdc_qt_internal_widgets_SStackWidget.h \
    java/org_swdc_qt_internal_widgets_STabWidget.h \
    java/org_swdc_qt_internal_widgets_SToolBar.h \
    java/org_swdc_qt_internal_widgets_SToolButton.h \
    java/org_swdc_qt_internal_widgets_SWidget.h \
    java/types/SCheckBox.h \
    java/types/SCommandLinkButton.h \
    java/types/SFrame.h \
    java/types/SGroupBox.h \
    java/types/SLineEdit.h \
    java/types/SMenuBar.h \
    java/types/SPushButton.h \
    java/types/SRadioButton.h \
    java/types/SScrollArea.h \
    java/types/SScrollBar.h \
    java/types/SStackWidget.h \
    java/types/STabWidget.h \
    java/types/SToolBar.h \
    java/types/SToolButton.h \
    java/types/SWidget.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
