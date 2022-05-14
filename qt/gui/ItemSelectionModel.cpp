#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SItemSelectionModel.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_create
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    QItemSelectionModel * sel = new QItemSelectionModel(model);
    return _P(sel);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    delete model;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    currentIndex
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_currentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    QModelIndex * idx = new QModelIndex();
    *idx = model->currentIndex();
    return _P(idx);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    isSelected
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_isSelected
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer){

    QModelIndex * index = (QModelIndex*)indexPointer;
    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    return model->isSelected(*index) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    isRowSelected
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_isRowSelected
(JNIEnv * env, jobject self, jlong pointer, jint row, jlong indexPointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * index = (QModelIndex*)indexPointer;
        return model->isRowSelected(row,*index) ? JNI_TRUE : JNI_FALSE;
    }
    return model->isRowSelected(row) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    isColumnSelected
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_isColumnSelected
(JNIEnv * env, jobject self, jlong pointer, jint col, jlong indexPointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * index = (QModelIndex*)indexPointer;
        return model->isColumnSelected(col,*index) ? JNI_TRUE : JNI_FALSE;
    }
    return model->isColumnSelected(col) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    rowIntersectsSelection
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_rowIntersectsSelection
(JNIEnv * env, jobject self, jlong pointer, jint val, jlong indexPointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * index = (QModelIndex*)indexPointer;
        return model->rowIntersectsSelection(val,*index) ? JNI_TRUE : JNI_FALSE;
    }
    return model->rowIntersectsSelection(val) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    columnIntersectsSelection
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_columnIntersectsSelection
(JNIEnv * env, jobject self, jlong pointer, jint val, jlong indexPointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * index = (QModelIndex*)indexPointer;
        return model->columnIntersectsSelection(val,*index) ? JNI_TRUE : JNI_FALSE;
    }
    return model->columnIntersectsSelection(val) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    hasSelection
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_hasSelection
(JNIEnv * env, jobject self, jlong pointer) {

     QItemSelectionModel * model = (QItemSelectionModel*)pointer;
     return model->hasSelection() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    selectedIndexes
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_selectedIndexes
(JNIEnv * env, jobject self, jlong pointer) {

     QItemSelectionModel * model = (QItemSelectionModel*)pointer;
     QList<QModelIndex> indexes = model->selectedIndexes();

     jlongArray arr = env->NewLongArray(indexes.size());
     jlong * buf = new jlong[indexes.size()];

     for(int idx = 0; idx < indexes.size(); idx++) {
         QModelIndex val = indexes.at(idx);
         QModelIndex * index = new QModelIndex();
         *index = val;
         buf[idx] = _P(index);
     }

     env->SetLongArrayRegion(arr,0,indexes.size(),buf);
     delete [] buf;

     return arr;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    selectedRows
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_selectedRows
(JNIEnv * env, jobject self, jlong pointer, jint row) {

     QItemSelectionModel * model = (QItemSelectionModel*)pointer;
     QList<QModelIndex> indexes = model->selectedRows(row);

     jlongArray arr = env->NewLongArray(indexes.size());
     jlong * buf = new jlong[indexes.size()];

     for(int idx = 0; idx < indexes.size(); idx++) {
         QModelIndex val = indexes.at(idx);
         QModelIndex * index = new QModelIndex();
         *index = val;
         buf[idx] = _P(index);
     }

     env->SetLongArrayRegion(arr,0,indexes.size(),buf);
     delete [] buf;

     return arr;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    selectedColumns
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_selectedColumns
(JNIEnv * env, jobject self, jlong pointer, jint col) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    QList<QModelIndex> indexes = model->selectedColumns(col);

    jlongArray arr = env->NewLongArray(indexes.size());
    jlong * buf = new jlong[indexes.size()];

    for(int idx = 0; idx < indexes.size(); idx++) {
        QModelIndex val = indexes.at(idx);
        QModelIndex * index = new QModelIndex();
        *index = val;
        buf[idx] = _P(index);
    }

    env->SetLongArrayRegion(arr,0,indexes.size(),buf);
    delete [] buf;

    return arr;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    model
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_model
(JNIEnv * env, jobject self, jlong pointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    return _P(model->model());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    setModel
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_setModel
(JNIEnv * env, jobject self, jlong pointer, jlong modelPointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    QAbstractItemModel * target = (QAbstractItemModel*)modelPointer;
    model->setModel(target);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    setCurrentIndex
 * Signature: (JJ[I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_setCurrentIndex
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer, jint flags) {

    QModelIndex * index = (QModelIndex*)indexPointer;
    QItemSelectionModel::SelectionFlags flagsVal = QItemSelectionModel::SelectionFlags(flags);
    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    model->setCurrentIndex(*index,flagsVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    select
 * Signature: (JJ[I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_select
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer, jint flags) {

    QModelIndex * index = (QModelIndex*)indexPointer;
    QItemSelectionModel::SelectionFlags flagsVal = QItemSelectionModel::SelectionFlags(flags);
    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    model->select(*index,flagsVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    model->clear();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_reset
(JNIEnv * env, jobject self, jlong pointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    model->reset();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    clearSelection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_clearSelection
(JNIEnv * env, jobject self, jlong pointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    model->clearSelection();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemSelectionModel
 * Method:    clearCurrentIndex
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemSelectionModel_clearCurrentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QItemSelectionModel * model = (QItemSelectionModel*)pointer;
    model->clearCurrentIndex();
}
