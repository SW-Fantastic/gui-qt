QT += widgets

TEMPLATE = lib
DEFINES += GUI_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AbstractButton.cpp \
    Action.cpp \
    Button.cpp \
    Executors.cpp \
    GUI.cpp \
    GUIApplication.cpp \
    LineEdit.cpp \
    Menu.cpp \
    MenuBar.cpp \
    StackWidget.cpp \
    TabWidget.cpp \
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
    graphics/ConicalGradient.cpp \
    graphics/Gradient.cpp \
    graphics/Icon.cpp \
    graphics/LinearGradient.cpp \
    graphics/PainterPath.cpp \
    graphics/RadialGradient.cpp \
    gui.cpp \
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
    layout/Layout.cpp \
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
    java/graphics/org_swdc_qt_internal_graphics_SConicalGradient.h \
    java/graphics/org_swdc_qt_internal_graphics_SGradient.h \
    java/graphics/org_swdc_qt_internal_graphics_SIcon.h \
    java/graphics/org_swdc_qt_internal_graphics_SLinearGradient.h \
    java/graphics/org_swdc_qt_internal_graphics_SPainterPath.h \
    java/graphics/org_swdc_qt_internal_graphics_SRadialGradient.h \
    java/jni.h \
    java/jni_md.h \
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
    java/org_swdc_qt_internal_widgets_SAbstractButton.h \
    java/org_swdc_qt_internal_widgets_SAction.h \
    java/org_swdc_qt_internal_widgets_SButton.h \
    java/org_swdc_qt_internal_widgets_SLineEdit.h \
    java/org_swdc_qt_internal_widgets_SMenu.h \
    java/org_swdc_qt_internal_widgets_SMenuBar.h \
    java/org_swdc_qt_internal_widgets_SStackWidget.h \
    java/org_swdc_qt_internal_widgets_STabWidget.h \
    java/org_swdc_qt_internal_widgets_SToolButton.h \
    java/org_swdc_qt_internal_widgets_SWidget.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
