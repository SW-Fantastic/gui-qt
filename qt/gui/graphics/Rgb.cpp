#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SRgb.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    red
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SRgb_red
(JNIEnv * env, jobject self,jlong val) {

    QRgb rgb = QRgb(val);
    return qRed(rgb);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    blue
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SRgb_blue
(JNIEnv * env, jobject self,jlong val) {

    QRgb rgb = QRgb(val);
    return qBlue(rgb);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    green
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SRgb_green
(JNIEnv * env, jobject self,jlong val) {

    QRgb rgb = QRgb(val);
    return qGreen(rgb);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    alpha
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SRgb_alpha
(JNIEnv * env, jobject self,jlong val) {

    QRgb rgb = QRgb(val);
    return qAlpha(rgb);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    rgbValue
 * Signature: (IIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SRgb_rgbValue
(JNIEnv * env, jobject self, jint red, jint green, jint blue, jdouble alpha) {

    QRgb result = qRgba(red,green,blue,alpha * 255);
    return (jlong)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    rgbValue
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SRgb_rgbValue__Ljava_lang_String_2
(JNIEnv * env, jobject self, jstring hexString) {

    const char* str = env->GetStringUTFChars(hexString,JNI_FALSE);
    QString qHexStr(str);
    QColor color(qHexStr);
    QRgb rgb = color.rgba();
    return (jlong)rgb;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    toHexString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_graphics_SRgb_toHexString
(JNIEnv * env, jobject self, jlong value) {

    QRgb rgb(value);
    QColor color(rgb);

    std::string stdStr = color.name(QColor::NameFormat::HexArgb).toStdString();
    const char* cStr = stdStr.c_str();
    return asJavaString(env,cStr);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SRgb
 * Method:    toRgbString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_graphics_SRgb_toRgbString
(JNIEnv * env, jobject self, jlong value) {

    QRgb rgb(value);

    QString str = QString("RGBA(%1,%2,%3,%4)")
            .arg(qRed(rgb))
            .arg(qGreen(rgb))
            .arg(qBlue(rgb))
            .arg((qAlpha(rgb) / 255.0),0,'g',2,' ');

    std::string stdStr = str.toStdString();
    const char* cStr = stdStr.c_str();
    return asJavaString(env,cStr);

}
