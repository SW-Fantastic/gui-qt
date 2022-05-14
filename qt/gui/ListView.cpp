#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SListView.h"

#include "java/org_swdc_qt_internal_widgets_SListView.h"

SListView::SListView(jobject self):QListView() {
    this->self = self;
    this->setItemDelegate(new QItemDelegate());
}

SListView::SListView(jobject self, QWidget * parent):QListView(parent) {
    this->self = self;
}

void SListView::paintEvent(QPaintEvent *e) {
    QListView::paintEvent(e);
    paintEventWithJava(e,this->self,_P(this));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SListView_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SListView * view = nullptr;
    if(pointer > 0) {

        QWidget * widget = (QWidget*)pointer;
        view = new SListView(self,widget);
    } else {

        view = new SListView(self);
    }

    SWidget::initializeWidgetEvents(view,self);
    return _P(view);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    delete view;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setMovement
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setMovement
(JNIEnv * env, jobject self, jlong pointer, jint movementVal) {

    QListView::Movement mov = QListView::Movement(movementVal);
    QListView * view = (QListView*)pointer;
    view->setMovement(mov);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    movement
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_movement
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return int(view->movement());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setFlow
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setFlow
(JNIEnv * env, jobject self, jlong pointer, jint flowVal) {

    QListView::Flow flow = QListView::Flow(flowVal);
    QListView * view = (QListView*)pointer;
    view->setFlow(flow);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    flow
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_flow
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return int(view->flow());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setWrapping
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setWrapping
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QListView * view = (QListView*)pointer;
    view->setWrapping(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    isWrapping
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SListView_isWrapping
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return view->isWrapping() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setResizeMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setResizeMode
(JNIEnv * env, jobject self, jlong pointer, jint modeVal) {

    QListView::ResizeMode mode = QListView::ResizeMode(modeVal);
    QListView * view = (QListView*)pointer;
    view->setResizeMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    resizeMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_resizeMode
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return int(view->resizeMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setLayoutMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setLayoutMode
(JNIEnv * env, jobject self, jlong pointer, jint layoutVal) {

    QListView * view = (QListView*)pointer;
    QListView::LayoutMode mode = QListView::LayoutMode(layoutVal);
    view->setLayoutMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    layoutMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_layoutMode
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return int(view->layoutMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setSpacing
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setSpacing
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QListView * view = (QListView*)pointer;
    view->setSpacing(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    spacing
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_spacing
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return view->spacing();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setBatchSize
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setBatchSize
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QListView * view = (QListView*)pointer;
    view->setBatchSize(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    batchSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_batchSize
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return view->batchSize();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setGridSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setGridSize
(JNIEnv * env, jobject self, jlong pointer, jlong sizePointer) {

    QSize * gridSize = (QSize*)sizePointer;
    QListView * view = (QListView*)pointer;
    view->setGridSize(*gridSize);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    gridSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SListView_gridSize
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    QSize * size = new QSize();
    *size = view->gridSize();

    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setViewMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setViewMode
(JNIEnv * env, jobject self, jlong pointer, jint viewModeVal) {

    QListView::ViewMode mode = QListView::ViewMode(viewModeVal);
    QListView * view = (QListView*)pointer;
    view->setViewMode(mode);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    viewMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_viewMode
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return int(view->viewMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    clearPropertyFlags
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_clearPropertyFlags
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    view->clearPropertyFlags();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    isRowHidden
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SListView_isRowHidden
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QListView * view = (QListView*)pointer;
    return view->isRowHidden(val) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setRowHidden
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setRowHidden
(JNIEnv * env, jobject self, jlong pointer, jint row, jboolean val) {

    QListView * view = (QListView*)pointer;
    view->setRowHidden(row,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setModelColumn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setModelColumn
(JNIEnv * env, jobject self, jlong pointer, jint colVal) {

    QListView * view = (QListView*)pointer;
    view->setModelColumn(colVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    modelColumn
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SListView_modelColumn
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return view->modelColumn();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setUniformItemSizes
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setUniformItemSizes
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QListView * view = (QListView*)pointer;
    view->setUniformItemSizes(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    uniformItemSizes
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SListView_uniformItemSizes
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return view->uniformItemSizes() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setWordWrap
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setWordWrap
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QListView * view = (QListView*)pointer;
    view->setWordWrap(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    wordWrap
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SListView_wordWrap
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return view->wordWrap() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setSelectionRectVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setSelectionRectVisible
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QListView * view = (QListView*)pointer;
    view->setSelectionRectVisible(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    isSelectionRectVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SListView_isSelectionRectVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    return view->isSelectionRectVisible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setItemAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setItemAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong alignVal) {

    Qt::Alignment align = Qt::Alignment((unsigned int)alignVal);
    QListView * view = (QListView*)pointer;
    view->setItemAlignment(align);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    itemAlignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SListView_itemAlignment
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    Qt::Alignment align = view->itemAlignment();
    return (jlong)(unsigned int)(align);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    visualRect
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SListView_visualRect
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndex) {

    QModelIndex * index = (QModelIndex*)modelIndex;
    QListView * view = (QListView*)pointer;
    QRect * rect = new QRect();
    *rect = view->visualRect(*index);

    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    scrollTo
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_scrollTo
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer, jint hintVal) {

    QListView::ScrollHint hint = QListView::ScrollHint(hintVal);
    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    QListView * view = (QListView*)pointer;
    view->scrollTo(*index,hint);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    indexAt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SListView_indexAt
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QListView * view = (QListView*)pointer;

    QModelIndex * index = new QModelIndex();
    *index = view->indexAt(*point);

    return _P(index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    doItemsLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_doItemsLayout
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    view->doItemsLayout();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_reset
(JNIEnv * env, jobject self, jlong pointer) {

    QListView * view = (QListView*)pointer;
    view->reset();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SListView
 * Method:    setRootIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SListView_setRootIndex
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    QListView * view = (QListView*)pointer;
    view->setRootIndex(*index);
}
