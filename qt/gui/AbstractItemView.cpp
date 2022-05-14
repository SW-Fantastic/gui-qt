#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SAbstractItemView.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setModel
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setModel
(JNIEnv * env, jobject self, jlong pointer, jlong modelPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)modelPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;

    view->setModel(model);
}
/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    model
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_model
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return _P(view->model());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setSelectionModel
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setSelectionModel
(JNIEnv * env, jobject self, jlong pointer, jlong selModelPointer) {

    QItemSelectionModel * mod = (QItemSelectionModel*)selModelPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setSelectionModel(mod);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    selectionModel
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_selectionModel
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return _P(view->selectionModel());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setSelectionMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setSelectionMode
(JNIEnv * env, jobject self, jlong pointer, jint modeVal) {

    QAbstractItemView::SelectionMode selMode = QAbstractItemView::SelectionMode(modeVal);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setSelectionMode(selMode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    selectionMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_selectionMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return int(view->selectionMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setSelectionBehavior
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setSelectionBehavior
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractItemView::SelectionBehavior behavior = QAbstractItemView::SelectionBehavior(val);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setSelectionBehavior(behavior);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    selectionBehavior
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_selectionBehavior
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return int(view->selectionBehavior());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    currentIndex
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_currentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QModelIndex * index = new QModelIndex();
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    *index = view->currentIndex();
    return _P(index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    rootIndex
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_rootIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QModelIndex * index = new QModelIndex();
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    *index = view->rootIndex();
    return _P(index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setEditTriggers
 * Signature: (J[I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setEditTriggers
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractItemView::EditTriggers triggers = QAbstractItemView::EditTriggers(val);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setEditTriggers(triggers);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setVerticalScrollMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setVerticalScrollMode
  (JNIEnv * env, jobject self, jlong pointer, jint modeVal) {

    QAbstractItemView::ScrollMode mode = QAbstractItemView::ScrollMode(modeVal);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setVerticalScrollMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    verticalScrollMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_verticalScrollMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return int(view->verticalScrollMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    resetVerticalScrollMode
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_resetVerticalScrollMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->resetVerticalScrollMode();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setHorizontalScrollMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setHorizontalScrollMode
(JNIEnv * env, jobject self, jlong pointer, jint modeVal) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QAbstractItemView::ScrollMode mode = QAbstractItemView::ScrollMode(modeVal);
    view->setHorizontalScrollMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    horizontalScrollMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_horizontalScrollMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return int(view->horizontalScrollMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    resetHorizontalScrollMode
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_resetHorizontalScrollMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->resetHorizontalScrollMode();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setAutoScroll
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setAutoScroll
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setAutoScroll(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    hasAutoScroll
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_hasAutoScroll
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->hasAutoScroll() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setAutoScrollMargin
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setAutoScrollMargin
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setAutoScrollMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    autoScrollMargin
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_autoScrollMargin
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->autoScrollMargin();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setTabKeyNavigation
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setTabKeyNavigation
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setTabKeyNavigation(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    tabKeyNavigation
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_tabKeyNavigation
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->tabKeyNavigation() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setDropIndicatorShown
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setDropIndicatorShown
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setDropIndicatorShown(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    showDropIndicator
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_showDropIndicator
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->showDropIndicator() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setDragEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setDragEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setDragEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    dragEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_dragEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->dragEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setDragDropOverwriteMode
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setDragDropOverwriteMode
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setDragDropOverwriteMode(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    dragDropOverwriteMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_dragDropOverwriteMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->dragDropOverwriteMode() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setDragDropMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setDragDropMode
(JNIEnv * env, jobject self, jlong pointer, jint modeVal) {

    QAbstractItemView::DragDropMode mode = QAbstractItemView::DragDropMode(modeVal);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setDragDropMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    dragDropMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_dragDropMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return int(view->dragDropMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setDefaultDropAction
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setDefaultDropAction
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    Qt::DropAction act = Qt::DropAction(val);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setDefaultDropAction(act);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    defaultDropAction
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_defaultDropAction
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return int(view->defaultDropAction());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setAlternatingRowColors
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setAlternatingRowColors
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setAlternatingRowColors(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    alternatingRowColors
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_alternatingRowColors
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->alternatingRowColors() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setIconSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setIconSize
(JNIEnv * env, jobject self, jlong pointer, jlong sizePointer) {

    QSize * size = (QSize*)sizePointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setIconSize(*size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    iconSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_iconSize
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QSize * size = new QSize();
    *size = view->iconSize();

    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setTextElideMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setTextElideMode
(JNIEnv * env, jobject self, jlong pointer, jint eliderModeVal) {

    Qt::TextElideMode mode = Qt::TextElideMode(eliderModeVal);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->setTextElideMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    textElideMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_textElideMode
(JNIEnv * env, jobject self, jlong pointer)  {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return int(view->textElideMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    keyboardSearch
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_keyboardSearch
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,0);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->keyboardSearch(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    visualRect
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_visualRect
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QRect * rect = new QRect();
    *rect = view->visualRect(*index);

    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    scrollTo
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_scrollTo
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer, jint hintVal) {

    QAbstractItemView::ScrollHint hint = QAbstractItemView::ScrollHint(hintVal);
    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;

    view->scrollTo(*index,hint);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    indexAt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_indexAt
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;

    QModelIndex * index = new QModelIndex();
    *index = view->indexAt(*point);

    return _P(index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    sizeHintForIndex
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_sizeHintForIndex
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QModelIndex * index = (QModelIndex*)modelIndexPointer;

    QSize * size = new QSize();
    *size = view->sizeHintForIndex(*index);

    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    sizeHintForRow
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_sizeHintForRow
(JNIEnv * env, jobject self, jlong pointer, jint row) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->sizeHintForRow(row);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    sizeHintForColumn
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_sizeHintForColumn
(JNIEnv * env, jobject self, jlong pointer, jint col) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return view->sizeHintForColumn(col);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    openPersistentEditor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_openPersistentEditor
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer){

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QModelIndex * index = (QModelIndex*)modelIndexPointer;

    view->openPersistentEditor(*index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    closePersistentEditor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_closePersistentEditor
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QModelIndex * index = (QModelIndex*)modelIndexPointer;

    view->closePersistentEditor(*index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    isPersistentEditorOpen
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_isPersistentEditorOpen
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QModelIndex * index = (QModelIndex*)modelIndexPointer;

    return view->isPersistentEditorOpen(*index) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setIndexWidget
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setIndexWidget
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer, jlong widgetPointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;
    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    view->setIndexWidget(*index,widget);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    indexWidget
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_indexWidget
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    return _P(view->indexWidget(*index));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    inputMethodQuery
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_inputMethodQuery
(JNIEnv * env, jobject self, jlong pointer, jint queryVal) {

    Qt::InputMethodQuery query = Qt::InputMethodQuery(queryVal);
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QVariant * variant = new QVariant();
    *variant = view->inputMethodQuery(query);

    return _P(variant);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_reset
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->reset();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setRootIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setRootIndex
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    view->setRootIndex(*index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    doItemsLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_doItemsLayout
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->doItemsLayout();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    selectAll
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_selectAll
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->selectAll();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    edit
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_edit
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->edit(*index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    clearSelection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_clearSelection
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->clearSelection();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    setCurrentIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_setCurrentIndex
  (JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    view->setCurrentIndex(*index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    scrollToTop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_scrollToTop
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->scrollToTop();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    scrollToBottom
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_scrollToBottom
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->scrollToBottom();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractItemView
 * Method:    update
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractItemView_update
(JNIEnv * env, jobject self, jlong pointer, jlong modelIndexPointer) {

    QModelIndex * index = (QModelIndex*)modelIndexPointer;
    QAbstractItemView * view = (QAbstractItemView*)pointer;
    view->update(*index);
}

