#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SMdiArea.h"

#include "java/org_swdc_qt_internal_widgets_SMdiArea.h"

SMdiArea::SMdiArea(jobject self):QMdiArea() {
    this->self = self;
}

SMdiArea::SMdiArea(jobject self,QWidget * parent):QMdiArea(parent) {
    this->self = self;
}

void SMdiArea::paintEvent(QPaintEvent * event) {
    QMdiArea::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SMdiArea * area = nullptr;
    if(pointer <= 0) {
        area = new SMdiArea(self);
    } else {
        QWidget * widget = (QWidget*)pointer;
        area = new SMdiArea(self,widget);
    }

    SWidget::initializeWidgetEvents(area,self);

    return (jlong)(intptr_t)area;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QSize * size = new QSize(area->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QSize * size = new QSize(area->minimumSizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    currentSubWindow
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_currentSubWindow
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    return (jlong)(intptr_t)area->currentSubWindow();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    activeSubWindow
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_activeSubWindow
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    return (jlong)(intptr_t)area->activeSubWindow();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    subWindowList
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_subWindowList
(JNIEnv * env, jobject self, jlong pointer, jint order) {

    QMdiArea * area = (QMdiArea*)pointer;
    QList<QMdiSubWindow*> widgets = area->subWindowList();
    jlong * widgetArr = new jlong[widgets.size()];

    for(int idx = 0; idx < widgets.size(); idx ++) {
        QMdiSubWindow * window = widgets.at(idx);
        widgetArr[idx] = (jlong)(intptr_t)window;
    }

    jlongArray widgetArray = env->NewLongArray(widgets.size());
    env->SetLongArrayRegion(widgetArray,0,widgets.size(),widgetArr);

    return widgetArray;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    addSubWindow
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_addSubWindow
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;

    QMdiSubWindow* sub = area->addSubWindow(widget);
    return (jlong)(intptr_t)sub;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    removeSubWindow
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_removeSubWindow
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;

    area->removeSubWindow(widget);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    background
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_background
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QBrush * brush  = new QBrush(area->background());
    return (jlong)(intptr_t)brush;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setBackground
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setBackground
(JNIEnv * env, jobject self, jlong pointer, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QMdiArea * area = (QMdiArea*)pointer;
    area->setBackground(*brush);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    activationOrder
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_activationOrder
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QMdiArea::WindowOrder order = area->activationOrder();
    return int(order);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setActivationOrder
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setActivationOrder
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QMdiArea::WindowOrder order = QMdiArea::WindowOrder(val);
    QMdiArea * area = (QMdiArea*)pointer;
    area->setActivationOrder(order);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setOption
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setOption
(JNIEnv * env, jobject self, jlong pointer, jint option, jboolean val) {

    QMdiArea::AreaOption opt = QMdiArea::AreaOption(option);
    QMdiArea * area = (QMdiArea*)pointer;
    area->setOption(opt,val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setViewMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setViewMode
(JNIEnv * env, jobject self, jlong pointer, jint viewMode) {

    QMdiArea::ViewMode mode = QMdiArea::ViewMode(viewMode);
    QMdiArea * area = (QMdiArea*)pointer;
    area->setViewMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    viewMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_viewMode
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QMdiArea::ViewMode mode = area->viewMode();
    return int(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    documentMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_documentMode
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    return area->documentMode() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setDocumentMode
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setDocumentMode
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->setDocumentMode(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setTabsClosable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setTabsClosable
(JNIEnv * env, jobject self, jlong pointer, jboolean closeable) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->setTabsClosable(closeable);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    tabsClosable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_tabsClosable
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    return area->tabsClosable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setTabsMovable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setTabsMovable
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->setTabsMovable(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    tabsMovable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_tabsMovable
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    return area->tabsMovable() ? JNI_TRUE : JNI_FALSE;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setTabShape
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setTabShape
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTabWidget::TabShape shape = QTabWidget::TabShape(val);
    QMdiArea * area = (QMdiArea*)pointer;
    area->setTabShape(shape);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    tabShape
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_tabShape
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    return int(area->tabShape());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setTabPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setTabPosition
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTabWidget::TabPosition pos = QTabWidget::TabPosition(val);
    QMdiArea * area = (QMdiArea*)pointer;
    area->setTabPosition(pos);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    tabPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_tabPosition
(JNIEnv * env, jobject self, jlong pointer){

    QMdiArea * area = (QMdiArea*)pointer;
    return int(area->tabPosition());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    setActiveSubWindow
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_setActiveSubWindow
(JNIEnv * env, jobject self, jlong pointer, jlong windowPointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    QMdiSubWindow * window = (QMdiSubWindow*)windowPointer;
    area->setActiveSubWindow(window);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    tileSubWindows
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_tileSubWindows
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->tileSubWindows();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    cascadeSubWindows
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_cascadeSubWindows
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->cascadeSubWindows();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    closeActiveSubWindow
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_closeActiveSubWindow
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->closeActiveSubWindow();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    closeAllSubWindows
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_closeAllSubWindows
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->closeAllSubWindows();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    activateNextSubWindow
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_activateNextSubWindow
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->activateNextSubWindow();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiArea
 * Method:    activatePreviousSubWindow
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiArea_activatePreviousSubWindow
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiArea * area = (QMdiArea*)pointer;
    area->activatePreviousSubWindow();
}
