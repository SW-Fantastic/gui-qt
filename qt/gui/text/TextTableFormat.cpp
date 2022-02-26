#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextTableFormat.h"

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_create
(JNIEnv *, jobject) {

    QTextTableFormat * tableFormat = new QTextTableFormat();
    return (jlong)(intptr_t)tableFormat;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    delete tableFormat;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    columns
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_columns
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    return tableFormat->columns();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    setColumnWidthConstraints
 * Signature: ([J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_setColumnWidthConstraints
(JNIEnv * env, jobject self,jlong pointer, jlongArray array) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    int len = env->GetArrayLength(array);
    QVector<QTextLength> vect;
    jlong * arr = env->GetLongArrayElements(array,0);
    for(int idx = 0; idx < len; idx ++) {
       QTextLength * len = (QTextLength*)arr[idx];
       vect.append(*len);
    }
    env->ReleaseLongArrayElements(array,arr,0);
    tableFormat->setColumnWidthConstraints(vect);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    columnWidthConstraints
 * Signature: ()[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_columnWidthConstraints
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    QVector<QTextLength> vect = tableFormat->columnWidthConstraints();

    jlongArray arr = env->NewLongArray(vect.size());
    jlong * arrVals = new jlong[vect.size()];

    for(int idx = 0; idx < vect.size(); idx ++) {
        QTextLength len = vect.at(idx);
        QTextLength * target = new QTextLength();
        *target = len;
        arrVals[idx] = (jlong)(intptr_t)target;
    }

    env->SetLongArrayRegion(arr,0,vect.size(),arrVals);
    delete[] arrVals;
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    clearColumnWidthConstraints
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_clearColumnWidthConstraints
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    tableFormat->clearColumnWidthConstraints();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    cellSpacing
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_cellSpacing
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    return tableFormat->cellSpacing();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    setCellSpacing
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_setCellSpacing
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    tableFormat->setCellSpacing(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    cellPadding
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_cellPadding
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    return tableFormat->cellPadding();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    setCellPadding
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_setCellPadding
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    tableFormat->setCellPadding(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong alignment){

    Qt::Alignment align = Qt::Alignment((unsigned long)alignment);
    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    tableFormat->setAlignment(align);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    return (unsigned long)tableFormat->alignment();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    setHeaderRowCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_setHeaderRowCount
(JNIEnv * env, jobject self, jlong pointer, jint count) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    tableFormat->setHeaderRowCount(count);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    headerRowCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_headerRowCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    return tableFormat->headerRowCount();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    setBorderCollapse
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_setBorderCollapse
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    tableFormat->setBorderCollapse(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableFormat
 * Method:    borderCollapse
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextTableFormat_borderCollapse
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableFormat * tableFormat = (QTextTableFormat *)pointer;
    return tableFormat->borderCollapse() ? JNI_TRUE : JNI_FALSE;
}
