/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_graphics_SImage */

#ifndef _Included_org_swdc_qt_internal_graphics_SImage
#define _Included_org_swdc_qt_internal_graphics_SImage
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    create
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_create___3B
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_create__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_width
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_height
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    size
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_size
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    rect
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_rect
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    depth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_depth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    colorCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_colorCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    bitPlaneCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_bitPlaneCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    allGray
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_allGray
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    isGrayscale
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_isGrayscale
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    copy
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_copy
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_format
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    color
 * Signature: (JI)Lorg/swdc/qt/internal/graphics/SRgb;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_color
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setColor
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setColor
  (JNIEnv *, jobject, jlong, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setColorCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setColorCount
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    valid
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_valid
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    pixelIndex
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SImage_pixelIndex
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    pixel
 * Signature: (JII)Lorg/swdc/qt/internal/graphics/SRgb;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_graphics_SImage_pixel
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setPixel
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setPixel
  (JNIEnv *, jobject, jlong, jint, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    hasAlphaChannel
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_hasAlphaChannel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    setAlphaChannel
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_setAlphaChannel
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    alphaChannel
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_alphaChannel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    createAlphaMask
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_createAlphaMask
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    createHeuristicMask
 * Signature: (JZ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_createHeuristicMask
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    createMaskFromColor
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_createMaskFromColor
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    scaled
 * Signature: (JIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_scaled
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    scaledToWidth
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_scaledToWidth
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    scaledToHeight
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_scaledToHeight
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    transformed
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_transformed
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    mirrored
 * Signature: (JZZ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_mirrored
  (JNIEnv *, jobject, jlong, jboolean, jboolean);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    rgbSwapped
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_rgbSwapped
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    load
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_load
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    loadFromData
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_loadFromData
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    save
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SImage_save
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    fromData
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SImage_fromData
  (JNIEnv *, jclass, jbyteArray);


/*
 * Class:     org_swdc_qt_internal_graphics_SImage
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SImage_dispose
  (JNIEnv *, jobject, jlong);


#ifdef __cplusplus
}
#endif
#endif
