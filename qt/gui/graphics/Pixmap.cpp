#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SPixmap.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    create
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_create__II
(JNIEnv * env, jobject self, jint width, jint  height) {

    QPixmap * pixMap = new QPixmap(width,height);
    return (jlong)(intptr_t)pixMap;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_create__Ljava_lang_String_2
(JNIEnv * env, jobject self, jstring absPath) {

    const char* path = env->GetStringUTFChars(absPath,JNI_FALSE);
    QPixmap * pixmap = new QPixmap(QString(path));
    return (jlong)(intptr_t)pixmap;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_width
(JNIEnv * env, jobject self, jlong pointer){

    QPixmap * pixmap = (QPixmap*)pointer;
    return pixmap->width();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_height
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    return pixmap->height();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    size
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_size
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QSize size = pixmap->size();
    return ssize(env,size.width(),size.height());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    rect
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_rect
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QRect rect = pixmap->rect();
    return sRect(env,rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    depth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_depth
(JNIEnv * env, jobject self, jlong pointer) {
    \
    QPixmap * pixmap = (QPixmap*)pointer;
    return pixmap->depth();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    fill
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_fill
(JNIEnv * env, jobject self, jlong pointer, jlong rgb) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QRgb qRgb(rgb);
    QColor color(qRgb);
    pixmap->fill(color);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    devicePixelRatio
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_devicePixelRatio
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    return pixmap->devicePixelRatio();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    setDevicePixelRatio
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_setDevicePixelRatio
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QPixmap * pixmap = (QPixmap*)pointer;
    pixmap->setDevicePixelRatio(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    hasAlpha
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_hasAlpha
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    return pixmap->hasAlpha() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    hasAlphaChannel
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_hasAlphaChannel
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    return pixmap->hasAlphaChannel();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    scaled
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_scaled
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height, jint aspectMode, jint transformMode) {

    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::AspectRatioMode ratioMode = Qt::AspectRatioMode(aspectMode);
    Qt::TransformationMode transMode = Qt::TransformationMode(transformMode);

    QPixmap result = pixmap->scaled(width,height,ratioMode,transMode);
    QPixmap * target = new QPixmap(result);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    scaledToWidth
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_scaledToWidth
(JNIEnv * env, jobject self, jlong pointer, jint width, jint transformMode) {

    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::TransformationMode transform = Qt::TransformationMode(transformMode);
    QPixmap data = pixmap->scaledToWidth(width,transform);
    QPixmap * result = new QPixmap(data);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    scaledToHeight
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_scaledToHeight
(JNIEnv * env, jobject self, jlong pointer, jint height, jint transformMode) {


    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::TransformationMode transform = Qt::TransformationMode(transformMode);
    QPixmap data = pixmap->scaledToHeight(height,transform);
    QPixmap * result = new QPixmap(data);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    transformed
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_transformed
(JNIEnv * env, jobject self, jlong pointer, jlong transformPointer, jint mode) {

    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::TransformationMode transMode = Qt::TransformationMode(mode);
    QTransform * transform = (QTransform*)transformPointer;

    QPixmap target = pixmap->transformed(*transform,transMode);
    QPixmap * result = new QPixmap(target);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    toImage
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_toImage
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QImage image = pixmap->toImage();
    QImage * result = new QImage(image);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    load
 * Signature: (JLjava/lang/String;Ljava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_load
(JNIEnv * env, jobject self, jlong pointer, jstring absPath, jstring format, jlong conv) {

    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::ImageConversionFlag conversation = Qt::ImageConversionFlag(conv);
    const char * path = env->GetStringUTFChars(absPath,JNI_FALSE);
    QString qPath = (path);
    const char * cFormat = env->GetStringUTFChars(format,JNI_FALSE);

    return pixmap->load(qPath,cFormat,conversation) ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    loadFromData
 * Signature: (J[BLjava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_loadFromData
(JNIEnv * env, jobject self, jlong pointer, jbyteArray data, jstring format, jlong conversion) {

    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::ImageConversionFlag conv = Qt::ImageConversionFlag(conversion);

    const char* imageFormat = env->GetStringUTFChars(format,JNI_FALSE);

    int length = env->GetArrayLength(data);
    unsigned char * imageData = (unsigned char*)env->GetByteArrayElements(data,JNI_FALSE);
    bool result = pixmap->loadFromData(imageData,length,imageFormat,conv);

    return result ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    save
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_save
(JNIEnv * env, jobject self, jlong pointer, jstring filePath, jstring format) {

    QPixmap * pixmap = (QPixmap*)pointer;
    const char* path = env->GetStringUTFChars(filePath,JNI_FALSE);
    QString qFilePath(path);

    const char* imageFormat = env->GetStringUTFChars(format,JNI_FALSE);
    return pixmap->save(qFilePath,imageFormat) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    convertFromImage
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_convertFromImage
(JNIEnv * env, jobject self, jlong pointer, jlong imagePointer, jlong conversation) {

    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::ImageConversionFlag conv = Qt::ImageConversionFlag(conversation);
    QImage * image = (QImage*)imagePointer;

    return pixmap->convertFromImage(*image,conv) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    copy
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_copy
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QPixmap target = pixmap->copy(x,y,width,height);
    QPixmap * result = new QPixmap(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    isQBitmap
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_isQBitmap
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    return pixmap->isQBitmap() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    mask
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_mask
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QBitmap bitmap = pixmap->mask();

    QBitmap * result = new QBitmap(bitmap);
    return (jlong)(intptr_t)result;
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    setMask
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_setMask
(JNIEnv * env, jobject self, jlong pointer, jlong bitmapPointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QBitmap * bitmap = (QBitmap*)bitmapPointer;

    pixmap->setMask(*bitmap);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    createHeuristicMask
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_createHeuristicMask
(JNIEnv * env, jobject self, jlong pointer, jboolean clip) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QBitmap target = pixmap->createHeuristicMask(clip);
    QBitmap * result = new QBitmap(target);

    return  (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    createMaskFromColor
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_createMaskFromColor
(JNIEnv * env, jobject self, jlong pointer, jlong maskColor, jint maskMode) {

    QPixmap * pixmap = (QPixmap*)pointer;
    Qt::MaskMode mode = Qt::MaskMode(maskMode);

    QRgb rgb = QRgb(maskColor);
    QColor color(rgb);
    QBitmap bitmap = pixmap->createMaskFromColor(color,mode);

    QBitmap * result = new QBitmap(bitmap);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    grabWidget
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_grabWidget
(JNIEnv * env, jclass type, jlong widgetPointer, jint x, jint y, jint width, jint height) {

    QWidget * widget = (QWidget*)widgetPointer;
    QPixmap target = QPixmap::grabWidget(widget,x,y,width,height);

    QPixmap * result = new QPixmap(target);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    fromImage
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_fromImage
(JNIEnv * env, jclass type, jlong imagePointer, jlong conv) {

    QImage * image = (QImage *)imagePointer;
    Qt::ImageConversionFlag conversation = Qt::ImageConversionFlag(conv);
    QPixmap target = QPixmap::fromImage(*image,conversation);

    QPixmap * result = new QPixmap(target);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPixmap
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPixmap_dispose
(JNIEnv * env, jobject self, jlong pointer) {

     QImage * image = (QImage *)pointer;
     delete image;
     cleanJavaPointer(env,self);

}

