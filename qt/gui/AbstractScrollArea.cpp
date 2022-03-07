#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SAbstractScrollArea.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    verticalScrollBarPolicy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_verticalScrollBarPolicy
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    Qt::ScrollBarPolicy policy = area->verticalScrollBarPolicy();
    return int(policy);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setVerticalScrollBarPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setVerticalScrollBarPolicy
(JNIEnv * env, jobject self, jlong pointer, jint policyVal) {

    Qt::ScrollBarPolicy policy = Qt::ScrollBarPolicy(policyVal);
    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    area->setVerticalScrollBarPolicy(policy);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    verticalScrollBar
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_verticalScrollBar
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QScrollBar * bar = area->verticalScrollBar();
    return (jlong)(intptr_t)bar;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setVerticalScrollBar
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setVerticalScrollBar
(JNIEnv * env, jobject self, jlong pointer, jlong vScrollbar) {

    QScrollBar * bar = (QScrollBar*)vScrollbar;
    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    area->setVerticalScrollBar(bar);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    horizontalScrollBarPolicy
 * Signature: (J)J
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_horizontalScrollBarPolicy
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    Qt::ScrollBarPolicy policy = area->horizontalScrollBarPolicy();
    return int(policy);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setHorizontalScrollBarPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setHorizontalScrollBarPolicy
(JNIEnv * env, jobject self, jlong pointer, jint horizontal) {

    Qt::ScrollBarPolicy policy = Qt::ScrollBarPolicy(horizontal);
    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    area->setHorizontalScrollBarPolicy(policy);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    horizontalScrollBar
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_horizontalScrollBar
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QScrollBar * bar = area->horizontalScrollBar();
    return (jlong)(intptr_t)bar;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setHorizontalScrollBar
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setHorizontalScrollBar
(JNIEnv * env, jobject self, jlong pointer, jlong bar) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QScrollBar * sBar = (QScrollBar*)bar;
    area->setHorizontalScrollBar(sBar);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    cornerWidget
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_cornerWidget
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QWidget * widget = area->cornerWidget();
    return (jlong)(intptr_t)widget;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setCornerWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setCornerWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widget){

    QWidget * cornerWidget = (QWidget*)widget;
    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    area->setCornerWidget(cornerWidget);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    addScrollBarWidget
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_addScrollBarWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer, jlong align) {

    QWidget * widget = (QWidget*)widgetPointer;
    Qt::Alignment alignment = Qt::Alignment((unsigned int)align);
    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    area->addScrollBarWidget(widget,alignment);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    scrollBarWidgets
 * Signature: (JJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_scrollBarWidgets
(JNIEnv * env, jobject self, jlong pointer, jlong align) {

    Qt::Alignment alignment = Qt::Alignment((unsigned int)align);
    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QWidgetList widgets = area->scrollBarWidgets(alignment);

    jlong * alignWidgets = new jlong[widgets.size()];

    for(int idx = 0; idx < widgets.size(); idx ++) {
        QWidget * widget = widgets.at(idx);
        alignWidgets[idx] = (jlong)(intptr_t)widget;
    }

    jlongArray arr = env->NewLongArray(widgets.size());
    env->SetLongArrayRegion(arr,widgets.size(),0,alignWidgets);
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    viewport
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_viewport
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QWidget * viewPort = area->viewport();
    return (jlong)(intptr_t)viewPort;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setViewport
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setViewport
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;
    area->setViewport(widget);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    maximumViewportSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_maximumViewportSize
(JNIEnv * env, jobject self, jlong pointer){

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QSize * size = new QSize(area->maximumViewportSize());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QSize * size = new QSize(area->minimumSizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QSize * size = new QSize(area->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setupViewport
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setupViewport
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;
    area->setupViewport(widget);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    sizeAdjustPolicy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_sizeAdjustPolicy
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QAbstractScrollArea::SizeAdjustPolicy policy = area->sizeAdjustPolicy();
    return int(policy);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractScrollArea
 * Method:    setSizeAdjustPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractScrollArea_setSizeAdjustPolicy
(JNIEnv * env, jobject self, jlong pointer, jint policyVal) {

    QAbstractScrollArea * area = (QAbstractScrollArea*)pointer;
    QAbstractScrollArea::SizeAdjustPolicy policy = QAbstractScrollArea::SizeAdjustPolicy(policyVal);
    area->setSizeAdjustPolicy(policy);
}
