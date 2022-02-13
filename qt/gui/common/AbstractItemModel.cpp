#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SAbstractItemModel.h"


/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_create
(JNIEnv * env, jobject self, jlong parentModal);

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    hasIndex
 * Signature: (JIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_hasIndex
(JNIEnv * env, jobject self, jlong pointer, jint row, jint column, jlong index) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(index <= 0) {
        return model->hasIndex(row,column) ? JNI_TRUE : JNI_FALSE;
    }
    QModelIndex * idx = (QModelIndex*)index;
    return model->hasIndex(row,column,*idx) ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    index
 * Signature: (JIIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_index
(JNIEnv * env, jobject self, jlong pointer, jint row, jint col, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        QModelIndex idx = model->index(row,col);
        QModelIndex * result = new QModelIndex();
        *result = idx;
        return (jlong)(intptr_t)result;
    }

    QModelIndex * index = (QModelIndex*)indexPointer;
    QModelIndex idx = model->index(row,col,*index);
    QModelIndex * result = new QModelIndex();
    *result = idx;
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    parent
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_parent
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        return NULL;
    }
    QModelIndex * index = (QModelIndex*)indexPointer;
    QModelIndex parent = model->parent(*index);

    QModelIndex * parentIndex = new QModelIndex();
    *parentIndex = parent;
    return (jlong)(intptr_t)parentIndex;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    sibling
 * Signature: (JIIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_sibling
(JNIEnv * env, jobject self, jlong pointer, jint row, jint col, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        return NULL;
    }
    QModelIndex * index = (QModelIndex*)indexPointer;
    QModelIndex val = model->sibling(row,col,*index);
    QModelIndex * result = new QModelIndex();
    *result = val;

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    rowCount
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_rowCount
  (JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        return model->rowCount();
    }
    QModelIndex * index = (QModelIndex*)indexPointer;
    return model->rowCount(*index);
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    columnCount
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_columnCount
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        return model->columnCount();
    }
    QModelIndex * index = (QModelIndex*)indexPointer;
    return model->columnCount(*index);
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    hasChildren
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_hasChildren
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        return model->hasChildren() ? JNI_TRUE : JNI_FALSE;
    }
    QModelIndex * index = (QModelIndex*)indexPointer;
    return model->hasChildren(*index) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    data
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_data
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer, jint role) {
    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        return NULL;
    }
    Qt::ItemDataRole roleVal = Qt::ItemDataRole(role);
    QModelIndex * index = (QModelIndex*)indexPointer;
    QVariant data = model->data(*index,roleVal);
    QVariant * target = new QVariant();
    *target = data;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    setData
 * Signature: (JJJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_setData
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer, jlong dataPointer, jint role) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer <= 0) {
        return NULL;
    }
    QModelIndex * index = (QModelIndex*)indexPointer;
    QVariant * data = (QVariant*)dataPointer;
    Qt::ItemDataRole roleVal = Qt::ItemDataRole(role);
    return model->setData(*index,*data,roleVal) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    headerData
 * Signature: (JIJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_headerData
  (JNIEnv * env, jobject self, jlong pointer, jint section, jlong orientatVal, jint roleVal) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    Qt::Orientation orientation = Qt::Orientation((unsigned long)orientatVal);
    Qt::ItemDataRole role = Qt::ItemDataRole(roleVal);
    QVariant data = model->headerData(section,orientation,role);
    QVariant * target = new QVariant();
    *target = data;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    setHeaderData
 * Signature: (JIJJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_setHeaderData
(JNIEnv * env, jobject self, jlong pointer, jint section, jlong orientatVal, jlong valuePointer, jint roleVal) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    Qt::Orientation orientation = Qt::Orientation((unsigned long)orientatVal);
    Qt::ItemDataRole role = Qt::ItemDataRole(roleVal);
    QVariant * data = (QVariant*)valuePointer;

    bool result = model->setHeaderData(section,orientation,*data,role);
    return result ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    insertRows
 * Signature: (JIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_insertRows
(JNIEnv * env, jobject self, jlong pointer, jint row, jint count, jlong parentIndexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(parentIndexPointer > 0) {
        QModelIndex * parentIndex = (QModelIndex*)parentIndexPointer;
        return model->insertRows(row,count,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }

    return model->insertRows(row,count) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    insertColumns
 * Signature: (JIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_insertColumns
(JNIEnv * env, jobject self, jlong pointer, jint column, jint count, jlong parentIndexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(parentIndexPointer > 0) {
        QModelIndex * parentIndex = (QModelIndex*)parentIndexPointer;
        return model->insertColumns(column,count,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }

    return model->insertColumns(column,count) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    removeRows
 * Signature: (JIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_removeRows
(JNIEnv * env, jobject self, jlong pointer, jint row, jint count, jlong parentIndexPointer) {


    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(parentIndexPointer > 0 ) {
        QModelIndex * parentIndex = (QModelIndex*)parentIndexPointer;
        return model->removeRows(row,count,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }
    return model->removeRows(row,count) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    removeColumns
 * Signature: (JIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_removeColumns
(JNIEnv * env, jobject self, jlong pointer, jint column, jint count, jlong parentIndexPointer) {


    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(parentIndexPointer > 0 ){
        QModelIndex * parentIndex = (QModelIndex*)parentIndexPointer;
        return model->removeColumns(column,count,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }
    return model->removeColumns(column,count) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    moveRows
 * Signature: (JJIIJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_moveRows
(JNIEnv * env, jobject self, jlong pointer, jlong sourceParentPointer, jint sourceRow, jint count, jlong destParentPointer, jint destChild) {

    QModelIndex * srcIndex = (QModelIndex*)sourceParentPointer;
    QModelIndex * destIndex = (QModelIndex*)destParentPointer;

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;

    return model->moveRows(*srcIndex,sourceRow,count,*destIndex,destChild) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    moveColumns
 * Signature: (JJIIJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_moveColumns
(JNIEnv * env, jobject self, jlong pointer, jlong sourceParentPointer, jint sourceCol, jint count, jlong destParentPointer, jint destChild){

    QModelIndex * srcIndex = (QModelIndex*)sourceParentPointer;
    QModelIndex * destIndex = (QModelIndex*)destParentPointer;

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;

    return model->moveColumns(*srcIndex,sourceCol,count,*destIndex,destChild) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    insertRow
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_insertRow
(JNIEnv * env, jobject self, jlong pointer, jint row, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * parentIndex = (QModelIndex*)indexPointer;
        return model->insertRow(row,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }

    return model->insertRow(row) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    insertColumn
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_insertColumn
(JNIEnv * env, jobject self, jlong pointer, jint col, jlong indexPointer) {


    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * parentIndex = (QModelIndex*)indexPointer;
        return model->insertRow(col,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }
    return model->insertRow(col) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    removeRow
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_removeRow
(JNIEnv * env, jobject self, jlong pointer, jint row, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * parentIndex = (QModelIndex*)indexPointer;
         return model->removeRow(row,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }
    return model->removeRow(row) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    removeColumn
 * Signature: (JIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_removeColumn
(JNIEnv * env, jobject self, jlong pointer,jint col, jlong indexPointer) {


    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    if(indexPointer > 0) {
        QModelIndex * parentIndex = (QModelIndex*)indexPointer;
        return model->removeColumn(col,*parentIndex) ? JNI_TRUE : JNI_FALSE;
    }
    return model->removeColumn(col) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    moveRow
 * Signature: (JJIJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_moveRow
(JNIEnv * env, jobject self, jlong pointer, jlong sourceParentPointer, jint row, jlong destPointer, jint destChild) {

    QModelIndex * srcIndex = (QModelIndex*)sourceParentPointer;
    QModelIndex * destIndex = (QModelIndex*)destPointer;

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    return model->moveRow(*srcIndex,row,*destIndex,destChild) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    moveColumn
 * Signature: (JJIJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_moveColumn
(JNIEnv * env, jobject self, jlong pointer, jlong sourceParentPointer, jint col, jlong destPointer, jint destChild) {

    QModelIndex * srcIndex = (QModelIndex*)sourceParentPointer;
    QModelIndex * destIndex = (QModelIndex*)destPointer;

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    return model->moveColumn(*srcIndex,col,*destIndex,destChild) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    fetchMore
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_fetchMore
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QModelIndex * parentIndex = (QModelIndex*)indexPointer;
    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    model->fetchMore(*parentIndex);
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    canFetchMore
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_canFetchMore
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QModelIndex * parentIndex = (QModelIndex*)indexPointer;
    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    return model->canFetchMore(*parentIndex) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    flags
 * Signature: (JJ)I
 */
/*JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_flags
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer);*/

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    sort
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_sort
(JNIEnv * env, jobject self, jlong pointer, jint col, jint order) {

    Qt::SortOrder orderVal = Qt::SortOrder(order);
    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    model->sort(col,orderVal);
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    buddy
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_buddy
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QModelIndex * parentIndex = (QModelIndex*)indexPointer;
    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    QModelIndex result = model->buddy(*parentIndex);
    QModelIndex * target = new QModelIndex();
    *target = result;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    match
 * Signature: (JJIJII)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_match
  (JNIEnv * env, jobject self, jlong pointer, jlong startIndexPointer, jint roleVal, jlong valuePointer, jint hits, jint matchFlagsVal) {

    Qt::ItemDataRole role = Qt::ItemDataRole(roleVal);
    QVariant * data = (QVariant*)valuePointer;
    QModelIndex * startIndex = (QModelIndex*)startIndexPointer;
    Qt::MatchFlags flags = Qt::MatchFlags(matchFlagsVal);

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    QModelIndexList indexLists = model->match(*startIndex,role,*data,hits,flags);

    jlong * array = new jlong[indexLists.size()];

    for(int idx = 0; idx < indexLists.size();idx++) {

        QModelIndex index = indexLists.at(idx);
        QModelIndex * pointer = new QModelIndex();
        *pointer = index;
        array[idx] = (jlong)(intptr_t)pointer;
    }

    jlongArray arr = env->NewLongArray(indexLists.size());
    env->SetLongArrayRegion(arr,0,indexLists.size(),array);
    delete [] array;

    return arr;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    span
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_span
(JNIEnv * env, jobject self, jlong pointer, jlong indexPointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    QModelIndex * index = (QModelIndex*)indexPointer;

    QSize * size = new QSize(model->span(*index));
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    submit
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_submit
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    return model->submit() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SAbstractItemModel
 * Method:    revert
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SAbstractItemModel_revert
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractItemModel * model = (QAbstractItemModel*)pointer;
    model->revert();
}
