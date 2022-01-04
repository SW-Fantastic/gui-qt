#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SBrush.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBrush_create
(JNIEnv * env, jobject self) {

    QBrush * brush = new QBrush();

    return (jlong)(intptr_t)brush;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    style
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SBrush_style
(JNIEnv * env, jobject self, jlong pointer) {

    QBrush * brush = (QBrush*)pointer;
    return brush->style();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    setStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBrush_setStyle
(JNIEnv * env, jobject self, jlong pointer, jint style) {

    Qt::BrushStyle qStyle = Qt::BrushStyle(style);
    QBrush * brush = (QBrush*)pointer;
    brush->setStyle(qStyle);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    transform
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBrush_transform
(JNIEnv * env, jobject self, jlong pointer) {

    QBrush * brush = (QBrush*)pointer;
    QTransform trans = brush->transform();
    QTransform* target = new QTransform(trans);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    setTransform
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBrush_setTransform
(JNIEnv * env, jobject self, jlong pointer, jlong transform) {

    QBrush * brush = (QBrush*)pointer;
    QTransform * qTransform = (QTransform*)transform;
    brush->setTransform(*qTransform);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    texture
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBrush_texture
(JNIEnv * env, jobject self, jlong pointer) {

    QBrush * brush = (QBrush*)pointer;
    QPixmap pixmap = brush->texture();
    QPixmap * target = new QPixmap(pixmap);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    setTexture
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBrush_setTexture
(JNIEnv * env, jobject self, jlong pointer, jlong imagePointer) {

    QBrush * brush = (QBrush*)pointer;
    QPixmap * image = (QPixmap*)imagePointer;

    brush->setTexture(*image);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    textureImage
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBrush_textureImage
(JNIEnv * env, jobject self, jlong pointer) {

    QBrush * brush = (QBrush*)pointer;
    QImage image = brush->textureImage();
    QImage * target = new QImage(image);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    setTextureImage
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBrush_setTextureImage
(JNIEnv * env, jobject self, jlong pointer, jlong imagePointer) {

    QBrush * brush = (QBrush*)pointer;
    QImage * image = (QImage*)imagePointer;

    brush->setTextureImage(*image);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    color
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBrush_color
(JNIEnv * env, jobject self, jlong pointer) {

    QBrush * brush = (QBrush*)pointer;
    QColor color = brush->color();
    return color.rgba();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    setColor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBrush_setColor
(JNIEnv * env, jobject self, jlong pointer, jlong color) {

    QRgb val = QRgb(color);
    QBrush * brush = (QBrush*)pointer;
    brush->setColor(QColor(val));

}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    isOpaque
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SBrush_isOpaque
(JNIEnv * env, jobject self, jlong pointer) {

    QBrush * brush = (QBrush*)pointer;
    return brush->isOpaque() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBrush
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBrush_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QBrush * brush = (QBrush*)pointer;
    delete brush;
    cleanJavaPointer(env,self);
}
