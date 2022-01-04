#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SImage.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SImage
 * Method:    create
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_create___3B
(JNIEnv * env, jobject self, jbyteArray array) {

    jbyte* data = env->GetByteArrayElements(array,JNI_FALSE);
    unsigned char* cData = (unsigned char*)data;
    int length = env->GetArrayLength(array);

    QImage* image = new QImage();
    image->loadFromData(cData,length);

    return (jlong)(intptr_t)image;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_create__Ljava_lang_String_2
  (JNIEnv * env, jobject self, jstring file) {

    const char* filePath = env->GetStringUTFChars(file,JNI_FALSE);
    QString path(filePath);
    QImage * image = new QImage(path);

    return (jlong)(intptr_t)image;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_width
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    return image->width();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_height
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    return image->height();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    size
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_size
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    QSize size = image->size();
    return ssize(env,size.width(),size.height());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    rect
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_rect
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    QRect rect = image->rect();
    return sRect(env,rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    depth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_depth
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    return image->depth();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    colorCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_colorCount
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    return image->colorCount();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    bitPlaneCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_bitPlaneCount
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    return image->bitPlaneCount();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    allGray
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_allGray
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    return image->allGray();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    isGrayscale
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_isGrayscale
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    return image->isGrayscale();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    copy
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_copy
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint w, jint h) {

    QImage * image = (QImage*)pointer;
    QImage target = image->copy(x,y,w,h);

    QImage * result = new QImage(target);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_format
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    QImage::Format format = image->format();
    return int(format);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    color
 * Signature: (JI)Lorg/swdc/qt/internal/graphics/SRgb;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_color
  (JNIEnv * env, jobject self, jlong pointer, jint val) {

    QImage * image = (QImage*)pointer;
    QRgb colorVal = image->color(val);
    return sRgb(env,colorVal);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setColor
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setColor
(JNIEnv * env, jobject self, jlong pointer, jint val, jlong rgbVal) {

    QImage * image = (QImage*)pointer;
    image->setColor(val,QRgb(rgbVal));

}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setColorCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setColorCount
(JNIEnv * env, jobject self, jlong pointer, jint count) {

     QImage * image = (QImage*)pointer;
     image->setColorCount(count);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    valid
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_valid
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

     QImage * image = (QImage*)pointer;
     return image->valid(x,y) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    pixelIndex
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_pixelIndex
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

     QImage * image = (QImage*)pointer;
     return image->pixelIndex(x,y);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    pixel
 * Signature: (JII)Lorg/swdc/qt/internal/graphics/SRgb;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_pixel
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

     QImage * image = (QImage*)pointer;
     QRgb color = image->pixel(x,y);
     return sRgb(env,color);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setPixel
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setPixel
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jlong color) {

     QImage * image = (QImage*)pointer;
     image->setPixel(x,y,color);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    hasAlphaChannel
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_hasAlphaChannel
(JNIEnv * env, jobject self, jlong pointer) {

     QImage * image = (QImage*)pointer;
     return image->hasAlphaChannel() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setAlphaChannel
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setAlphaChannel
(JNIEnv * env, jobject self, jlong pointer, jlong imagePointer) {

    QImage * alphaChannel = (QImage*)imagePointer;
    QImage * image = (QImage*)pointer;
    image->setAlphaChannel(*alphaChannel);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    alphaChannel
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_alphaChannel
(JNIEnv * env, jobject self, jlong pointer){

    QImage * image = (QImage*)pointer;
    QImage alhpa = image->alphaChannel();
    QImage * result = new QImage(alhpa);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    createAlphaMask
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_createAlphaMask
(JNIEnv * env, jobject self, jlong pointer, jlong val) {

    QImage * image = (QImage*)pointer;
    Qt::ImageConversionFlag flag = Qt::ImageConversionFlag(val);

    QImage masked = image->createAlphaMask(flag);
    QImage * result = new QImage(masked);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    createHeuristicMask
 * Signature: (JZ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_createHeuristicMask
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

     QImage * image = (QImage*)pointer;
     QImage masked = image->createHeuristicMask(val);
     QImage * result = new QImage(masked);
     return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    createMaskFromColor
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_createMaskFromColor
(JNIEnv * env, jobject self, jlong pointer, jlong color, jint maskMode) {

    QImage * image = (QImage*)pointer;
    Qt::MaskMode mode = Qt::MaskMode(maskMode);
    QRgb qColor = QRgb(color);
    QImage target = image->createMaskFromColor(qColor,mode);

    QImage * result = new QImage(target);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    scaled
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_scaled
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height, jint acceptMode, jint txMode) {

    QImage * image = (QImage*)pointer;
    Qt::TransformationMode mode = Qt::TransformationMode(txMode);
    Qt::AspectRatioMode ratioMode = Qt::AspectRatioMode(acceptMode);

    QImage result = image->scaled(width,height,ratioMode,mode);
    QImage * target = new QImage(result);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    scaledToWidth
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_scaledToWidth
(JNIEnv * env, jobject self, jlong pointer, jint width, jint txMode) {

    QImage * image = (QImage*)pointer;
    Qt::TransformationMode mode = Qt::TransformationMode(txMode);
    QImage result = image->scaledToWidth(width,mode);

    QImage * target = new QImage(result);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    scaledToHeight
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_scaledToHeight
(JNIEnv * env, jobject self, jlong pointer, jint height, jint txMode) {

    Qt::TransformationMode mode = Qt::TransformationMode(txMode);
    QImage * image = (QImage*)pointer;
    QImage result = image->scaledToHeight(height,mode);

    QImage * target = new QImage(result);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    transformed
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_transformed
  (JNIEnv * env, jobject self, jlong pointer, jlong matrixPointer, jint txMode) {

     Qt::TransformationMode mode = Qt::TransformationMode(txMode);
     QImage * image = (QImage*)pointer;
     QTransform * transform = (QTransform*)matrixPointer;
     QImage result = image->transformed(*transform,mode);

     QImage * target = new QImage(result);
     return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    mirrored
 * Signature: (JZZ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_mirrored
(JNIEnv * env, jobject self, jlong pointer, jboolean horizontal, jboolean verticle) {

    QImage * image = (QImage*)pointer;
    QImage result = image->mirrored(horizontal,verticle);

    QImage * target = new QImage(result);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    rgbSwapped
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_rgbSwapped
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    QImage result = image->rgbSwapped();

    QImage * target = new QImage(result);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    load
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_load
(JNIEnv * env, jobject self, jlong pointer, jstring absPath) {

    QImage * image = (QImage*)pointer;
    const char* chPath = env->GetStringUTFChars(absPath,JNI_FALSE);
    QString path(chPath);
    return image->load(path) ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    loadFromData
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_loadFromData
(JNIEnv * env, jobject self, jlong pointer, jbyteArray data) {

    jbyte* bytes = env->GetByteArrayElements(data,JNI_FALSE);
    unsigned char* cData = (unsigned char*)bytes;
    int length = env->GetArrayLength(data);

    QImage * image = (QImage*)pointer;
    return image->loadFromData(cData,length) ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    save
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_save
  (JNIEnv * env, jobject self, jlong pointer, jstring path, jstring format) {

   QImage * image = (QImage*)pointer;
   const char* chPath = env->GetStringUTFChars(path,JNI_FALSE);

   QString str(chPath);
   const char* cFormat = env->GetStringUTFChars(format,JNI_FALSE);

   return image->save(str,cFormat) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    fromData
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_fromData
(JNIEnv * env, jclass type, jbyteArray data) {

    jbyte* bytes = env->GetByteArrayElements(data,JNI_FALSE);
    unsigned char* cData = (unsigned char*)bytes;
    int length = env->GetArrayLength(data);

    QImage * image = new QImage();
    image->loadFromData(cData,length);
    return (jlong)(intptr_t)image;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QImage * image = (QImage*)pointer;
    cleanJavaPointer(env,self);
    delete image;

}
