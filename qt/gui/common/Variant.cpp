#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SVariant.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SVariant_create
(JNIEnv *, jobject) {

    QVariant * variant = new QVariant();
    return (jlong)(intptr_t)variant;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SVariant_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    delete var;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    getInteger
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SVariant_getInteger
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    bool result;
    int val = var->toInt(&result);
    if(result) {
        return val;
    }
    return 0;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    setInteger
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SVariant_setInteger
(JNIEnv * env, jobject self, jlong pointer, jint val) {

     QVariant * var = (QVariant*)pointer;
     var->setValue(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    getDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SVariant_getDouble
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    bool result;
    double val = var->toDouble(&result);
    if(result) {
        return val;
    }
    return 0;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    setDouble
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_org_swdc_qt_internal_common_SVariant_setDouble
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QVariant * var = (QVariant*)pointer;
    var->setValue(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    getFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_org_swdc_qt_internal_common_SVariant_getFloat
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    bool result;
    float val = var->toFloat(&result);
    if(result) {
        return val;
    }
    return false;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    setFloat
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SVariant_setFloat
(JNIEnv * env, jobject self, jlong pointer, jfloat val) {

    QVariant * var = (QVariant*)pointer;
    var->setValue(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    getLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SVariant_getLong
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    bool result;
    long val = var->toUInt(&result);
    if(result) {
        return val;
    }
    return 0;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    setLong
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SVariant_setLong
(JNIEnv * env, jobject self, jlong pointer, jlong val) {

    QVariant * var = (QVariant*)pointer;
    var->setValue((unsigned int)val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    getString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_common_SVariant_getString
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    if(var->isNull()) {
        return NULL;
    }
    QString str = var->toString();
    std::string stdStr = str.toStdString();
    const char * cStr = stdStr.c_str();
    if(cStr) {
        return asJavaString(env,cStr);
    }
    return NULL;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    setString
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SVariant_setString
(JNIEnv * env, jobject self, jlong pointer, jstring str) {

    const char * cStr = env->GetStringUTFChars(str,JNI_FALSE);
    QString qStr(cStr);
    QVariant * var = (QVariant*)pointer;
    var->setValue(qStr);
    env->ReleaseStringUTFChars(str,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    getBoolean
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SVariant_getBoolean
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    return var->toBool() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    setBoolean
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SVariant_setBoolean
(JNIEnv * env, jobject self, jlong pointer, jboolean value) {

    QVariant * var = (QVariant*)pointer;
    var->setValue((bool)value);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    getChar
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_org_swdc_qt_internal_common_SVariant_getChar
(JNIEnv * env, jobject self, jlong pointer) {

    QVariant * var = (QVariant*)pointer;
    QChar val = var->toChar();
    return val.toLatin1();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SVariant
 * Method:    setChar
 * Signature: (JC)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SVariant_setChar
(JNIEnv * env, jobject self, jlong pointer, jchar val) {

    QVariant * var = (QVariant*)pointer;
    var->setValue(val);
}
