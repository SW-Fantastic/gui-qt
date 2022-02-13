#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SModelIndex.h"


/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    row
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SModelIndex_row
(JNIEnv * env, jobject self, jlong pointer) {

    QModelIndex * index = (QModelIndex*)pointer;
    return index->row();
}

/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    column
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SModelIndex_column
(JNIEnv * env, jobject self, jlong pointer) {

    QModelIndex * index = (QModelIndex*)pointer;
    return index->column();
}

/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    parent
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SModelIndex_parent
(JNIEnv * env, jobject self, jlong pointer) {

    QModelIndex * index = (QModelIndex*)pointer;
    QModelIndex parent = index->parent();

    QModelIndex * target = new QModelIndex();
    *target = parent;

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    sibling
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SModelIndex_sibling
(JNIEnv * env, jobject self, jlong pointer, jint row, jint col) {

    QModelIndex * index = (QModelIndex*)pointer;
    QModelIndex val = index->sibling(row,col);

    QModelIndex * target = new QModelIndex();
    *target = val;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    siblingAtColumn
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SModelIndex_siblingAtColumn
(JNIEnv * env, jobject self, jlong pointer, jint col) {

    QModelIndex * index = (QModelIndex*)pointer;
    QModelIndex val = index->siblingAtColumn(col);

    QModelIndex * target = new QModelIndex();
    *target = val;

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    siblingAtRow
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SModelIndex_siblingAtRow
(JNIEnv * env, jobject self, jlong pointer, jint row) {

    QModelIndex * index = (QModelIndex*)pointer;
    QModelIndex val = index->siblingAtRow(row);

    QModelIndex * target = new QModelIndex();
    *target = val;

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    data
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SModelIndex_data
(JNIEnv * env, jobject self,jlong pointer, jint role) {

    QModelIndex * index = (QModelIndex*)pointer;
    Qt::ItemDataRole dRole = Qt::ItemDataRole(role);
    QVariant variant = index->data(dRole);

    QVariant * target = new QVariant();
    *target = variant;

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SModelIndex
 * Method:    wrap
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SModelIndex_wrap
  (JNIEnv * env, jobject self, jlong pointer);
