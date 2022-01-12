#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SGradient.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SGradient_create
(JNIEnv * env, jobject self) {

    QGradient * gradient = new QGradient();
    return (jlong)(intptr_t)gradient;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SGradient_type
(JNIEnv * env, jobject self, jlong pointer) {

    QGradient * gradient = (QGradient*)pointer;
    return int(gradient->type());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    setSpread
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SGradient_setSpread
(JNIEnv * env, jobject self, jlong pointer, jint spreadType) {


    QGradient::Spread spread = QGradient::Spread(spreadType);
    QGradient * gradient = (QGradient*)pointer;
    gradient->setSpread(spread);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    spread
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SGradient_spread
(JNIEnv * env, jobject self, jlong pointer) {

    QGradient * gradient = (QGradient*)pointer;
    return int(gradient->spread());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    setColorAt
 * Signature: (JDJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SGradient_setColorAt
(JNIEnv * env, jobject self, jlong pointer, jdouble pos, jlong rgba) {

    QRgb rgb = QRgb(rgba);
    QColor color = QColor(rgb);

    QGradient * gradient = (QGradient*)pointer;
    gradient->setColorAt(pos,color);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    setStops
 * Signature: (J[Lorg/apache/commons/lang3/tuple/Pair;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SGradient_setStops
(JNIEnv * env, jobject self, jlong pointer, jobjectArray pairs) {

    jclass selfType = env->GetObjectClass(self);
    jmethodID getPairKey = env->GetMethodID(selfType,"getPairPos","(Lorg/apache/commons/lang3/tuple/Pair;)D");
    jmethodID getPairVal = env->GetMethodID(selfType,"getPairColor","(Lorg/apache/commons/lang3/tuple/Pair;)J");

    QGradientStops stops;

    int count = env->GetArrayLength(pairs);

    for(int idx = 0; idx < count;idx++) {

        jobject item = env->GetObjectArrayElement(pairs,idx);
        double pos = env->CallDoubleMethod(self,getPairKey,item);
        long colorVal = env->CallLongMethod(self,getPairVal,item);

        QRgb rgb = QRgb(colorVal);
        QColor color(rgb);
        QPair<qreal,QColor> pairElem(pos,color);
        stops.append(pairElem);

    }

    QGradient * gradient = (QGradient*)pointer;
    gradient->setStops(stops);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    stops
 * Signature: (J)[Lorg/apache/commons/lang3/tuple/Pair;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_graphics_SGradient_stops
(JNIEnv * env, jobject self, jlong pointer) {

    jclass selfType = env->GetObjectClass(self);
    jclass pairType = env->FindClass("org/apache/commons/lang3/tuple/Pair");
    jmethodID getPair = env->GetMethodID(selfType,"createStopPair","(DJ)Lorg/apache/commons/lang3/tuple/Pair;");

    QGradient * gradient = (QGradient*)pointer;
    QGradientStops stops = gradient->stops();

    jobjectArray array = env->NewObjectArray(stops.length(),pairType,NULL);

    for(int idx = 0; idx < stops.length(); idx ++) {

        QPair<qreal,QColor> pair = stops.at(idx);
        jobject javaPair = env->CallObjectMethod(self,getPair,pair.first,(jlong)pair.second.rgba());
        env->SetObjectArrayElement(array,idx,javaPair);
    }


    return array;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    coordinateMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SGradient_coordinateMode
(JNIEnv * env, jobject self, jlong pointer) {

    QGradient * gradient = (QGradient*)pointer;
    return int(gradient->coordinateMode());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    setCoordinateMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SGradient_setCoordinateMode
(JNIEnv * env, jobject self, jlong pointer, jint mode) {

    QGradient::CoordinateMode modeVal = QGradient::CoordinateMode(mode);
    QGradient * gradient = (QGradient*)pointer;
    gradient->setCoordinateMode(modeVal);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    interpolationMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SGradient_interpolationMode
(JNIEnv * env, jobject self, jlong pointer) {

    QGradient * gradient = (QGradient*)pointer;
    return int(gradient->interpolationMode());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    setInterpolationMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SGradient_setInterpolationMode
(JNIEnv * env, jobject self, jlong pointer, jint modeVal) {

    QGradient::InterpolationMode mode = QGradient::InterpolationMode(modeVal);
    QGradient * gradient = (QGradient*)pointer;
    gradient->setInterpolationMode(mode);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SGradient
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SGradient_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QGradient * gradient = (QGradient*)pointer;
    delete gradient;
    cleanJavaPointer(env,self);
}
