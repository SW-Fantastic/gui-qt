#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextOption.h"

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextOption_create__
(JNIEnv *, jobject) {

    QTextOption * option = new QTextOption();
    return _P(option);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextOption_create__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    QTextOption * val = new QTextOption(*option);
    return _P(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * val = (QTextOption*)pointer;
    delete val;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong alignmentVal) {

    Qt::Alignment align = Qt::Alignment((unsigned int)alignmentVal);
    QTextOption * option = (QTextOption*)pointer;
    option->setAlignment(align);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextOption_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    return (jlong)(unsigned long)option->alignment();
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setTextDirection
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setTextDirection
(JNIEnv * env, jobject self, jlong pointer, jint directVal) {

    QTextOption * option = (QTextOption*)pointer;
    Qt::LayoutDirection dir = Qt::LayoutDirection(directVal);
    option->setTextDirection(dir);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    textDirection
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextOption_textDirection
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    return int(option->textDirection());
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setWrapMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setWrapMode
(JNIEnv * env, jobject self, jlong pointer, jint wrapModeVal) {

    QTextOption * option = (QTextOption*)pointer;
    option->setWrapMode(QTextOption::WrapMode(wrapModeVal));
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    wrapMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextOption_wrapMode
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    return int(option->wrapMode());
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setFlags
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setFlags
(JNIEnv * env, jobject self, jlong pointer, jint flag) {

    QTextOption * option = (QTextOption*)pointer;
    option->setFlags(QTextOption::Flags(flag));
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setTabStopDistance
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setTabStopDistance
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextOption * option = (QTextOption*)pointer;
    option->setTabStopDistance(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    tabStopDistance
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextOption_tabStopDistance
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    return option->tabStopDistance();
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setTabArray
 * Signature: (J[D)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setTabArray
(JNIEnv * env, jobject self, jlong pointer, jdoubleArray arr) {

    QList<qreal> stops;
    jdouble * vals = env->GetDoubleArrayElements(arr,0);

    int len = env->GetArrayLength(arr);
    for(int idx = 0; idx < len; idx ++) {
        double val = vals[idx];
        stops.append(val);
    }

    QTextOption * option = (QTextOption*)pointer;
    option->setTabArray(stops);
    env->ReleaseDoubleArrayElements(arr,vals,0);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    tabArray
 * Signature: (J)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_swdc_qt_internal_text_STextOption_tabArray
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    QList<qreal> vals = option->tabArray();

    jdoubleArray arr = env->NewDoubleArray(vals.size());
    jdouble * buf = new jdouble[vals.size()];

    for(int idx = 0; idx < vals.size(); idx ++) {
       buf[idx] = vals.at(idx);
    }

    env->SetDoubleArrayRegion(arr,0,vals.size(),buf);
    delete[] buf;
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setTabs
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setTabs
(JNIEnv * env, jobject self, jlong pointer, jlongArray arr) {

    QList<QTextOption::Tab> stops;
    jlong * vals = env->GetLongArrayElements(arr,0);

    int len = env->GetArrayLength(arr);
    for(int idx = 0; idx < len; idx ++) {
        QTextOption::Tab * val = (QTextOption::Tab*)vals[idx];
        stops.append(*val);
    }

    QTextOption * option = (QTextOption*)pointer;
    option->setTabs(stops);
    env->ReleaseLongArrayElements(arr,vals,0);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    tabs
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextOption_tabs
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    QList<QTextOption::Tab> vals = option->tabs();

    jlongArray arr = env->NewLongArray(vals.size());
    jlong * buf = new jlong[vals.size()];

    for(int idx = 0; idx < vals.size(); idx ++) {
       QTextOption::Tab * tab = new QTextOption::Tab();
       *tab = vals.at(idx);
       buf[idx] = _P(tab);
    }

    env->SetLongArrayRegion(arr,0,vals.size(),buf);
    delete[] buf;
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    setUseDesignMetrics
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOption_setUseDesignMetrics
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextOption * option = (QTextOption*)pointer;
    option->setUseDesignMetrics(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOption
 * Method:    useDesignMetrics
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextOption_useDesignMetrics
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption * option = (QTextOption*)pointer;
    return option->useDesignMetrics() ? JNI_TRUE : JNI_FALSE;
}
