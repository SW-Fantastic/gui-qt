#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SPen.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPen_create
(JNIEnv * env, jobject self) {

    QPen * pen = new QPen();
    return (jlong)(intptr_t)pen;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    style
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPen_style
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    return int(pen->style());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setStyle
(JNIEnv * env, jobject self, jlong pointer, jint style) {

    Qt::PenStyle qStyle = Qt::PenStyle(style);
    QPen * pen = (QPen*)pointer;
    pen->setStyle(qStyle);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    dashPattern
 * Signature: (J)D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_swdc_qt_internal_graphics_SPen_dashPattern
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    QVector<qreal> pattern = pen->dashPattern();

    jdoubleArray arr = env->NewDoubleArray(pattern.size());

    jdouble *buf = new jdouble[pattern.size()]();
    for(int idx = 0; idx < pattern.size(); idx++) {
        qreal val = pattern.at(idx);
        buf[idx] = val;
    }

    env->SetDoubleArrayRegion(arr,0,pattern.size(),buf);
    delete[] buf;
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setDashPattern
 * Signature: (J[D)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setDashPattern
(JNIEnv * env, jobject self, jlong pointer, jdoubleArray pattern) {

    jdouble * values = env->GetDoubleArrayElements(pattern,JNI_FALSE);
    int length = env->GetArrayLength(pattern);

    QVector<qreal> vect;

    for(int idx = 0; idx < length; idx ++) {
        vect.append(values[idx]);
    }

    QPen * pen = (QPen*)pointer;
    pen->setDashPattern(vect);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    dashOffset
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPen_dashOffset
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    return pen->dashOffset();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setDashOffset
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setDashOffset
(JNIEnv * env, jobject self, jlong pointer, jdouble offset) {

    QPen * pen = (QPen*)pointer;
    pen->setDashOffset(offset);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    miterLimit
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPen_miterLimit
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    return pen->miterLimit();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setMiterLimit
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setMiterLimit
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QPen * pen = (QPen*)pointer;
    pen->setMiterLimit(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPen_width
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    return pen->width();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {

    QPen * pen = (QPen*)pointer;
    pen->setWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    color
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPen_color
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    return pen->color().rgba();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setColor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setColor
(JNIEnv * env, jobject self, jlong pointer, jlong color) {

    QPen * pen = (QPen*)pointer;
    QRgb rgb = QRgb(color);
    QColor qColor(rgb);

    pen->setColor(qColor);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    capStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPen_capStyle
(JNIEnv * env, jobject self, jlong pointer){

    QPen * pen = (QPen*)pointer;
    return int(pen->capStyle());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setCapStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setCapStyle
(JNIEnv * env, jobject self, jlong pointer, jint capStyle) {

    Qt::PenCapStyle cap = Qt::PenCapStyle(capStyle);
    QPen * pen = (QPen*)pointer;
    pen->setCapStyle(cap);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    joinStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPen_joinStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    return int(pen->joinStyle());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setJoinStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setJoinStyle
(JNIEnv * env, jobject self, jlong pointer, jint style) {

    Qt::PenJoinStyle joinStyle = Qt::PenJoinStyle(style);
    QPen * pen = (QPen*)pointer;
    pen->setJoinStyle(joinStyle);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    isCosmetic
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPen_isCosmetic
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    return pen->isCosmetic() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    setCosmetic
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_setCosmetic
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPen * pen = (QPen*)pointer;
    pen->setCosmetic(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPen
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPen_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = (QPen*)pointer;
    delete pen;
    cleanJavaPointer(env,self);
}
