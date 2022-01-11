/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_graphics_SPainter */

#ifndef _Included_org_swdc_qt_internal_graphics_SPainter
#define _Included_org_swdc_qt_internal_graphics_SPainter
#ifdef __cplusplus
extern "C" {
#endif



/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_createWidget
  (JNIEnv *, jobject, jlong);


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_dispose
  (JNIEnv *, jobject, jlong);


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    createPixmap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_createPixmap
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setCompositionMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setCompositionMode
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    compositionMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPainter_compositionMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    isActive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainter_isActive
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setColorPen
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setColorPen
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setPen
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setPen__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setPen
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setPen__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    pen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_pen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBrush__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBrush
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBrush__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    brush
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_brush
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBackgroundMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBackgroundMode
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    backgroundMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPainter_backgroundMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBackground
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBackground
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    background
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_background
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    opacity
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPainter_opacity
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setOpacity
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setOpacity
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setTransform
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setTransform
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    transform
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_transform
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    resetTransform
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_resetTransform
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setWorldTransform
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setWorldTransform
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    worldTransform
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_worldTransform
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    combinedTransform
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_combinedTransform
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setWorldMatrixEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setWorldMatrixEnabled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    worldMatrixEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainter_worldMatrixEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    scale
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_scale
  (JNIEnv *, jobject, jlong, jdouble, jdouble);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    shear
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_shear
  (JNIEnv *, jobject, jlong, jdouble, jdouble);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    rotate
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_rotate
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    translate
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_translate
  (JNIEnv *, jobject, jlong, jdouble, jdouble);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    window
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_window
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setWindow
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setWindow
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    viewport
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_viewport
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setViewport
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setViewport
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setViewTransformEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setViewTransformEnabled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    viewTransformEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainter_viewTransformEnabled
  (JNIEnv *, jobject, jlong);


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    strokePath
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_strokePath
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillPath
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillPath
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPath
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPath
  (JNIEnv *, jobject, jlong, jlong);



/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPoint
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPoint__JII
  (JNIEnv *, jobject, jlong, jint, jint);


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPoint
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPoint__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPoints
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPoints
  (JNIEnv *, jobject, jlong, jlongArray);


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawLine
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawLine
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRect
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRect
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawEllipse
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawEllipse
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawArc
 * Signature: (JIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawArc
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPie
 * Signature: (JIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPie
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawChord
 * Signature: (JIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawChord
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRoundedRect
 * Signature: (JIIIIDDI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRoundedRect
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jdouble, jdouble, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawTiledPixmap
 * Signature: (JIIIIJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawTiledPixmap
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIIIJIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIIIJIIII
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIJIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIJIIII
  (JNIEnv *, jobject, jlong, jint, jint, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIJ
  (JNIEnv *, jobject, jlong, jint, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIIIJ
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawImage
 * Signature: (JIIJIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawImage
  (JNIEnv *, jobject, jlong, jint, jint, jlong, jint, jint, jint, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawText
 * Signature: (JIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawText__JIILjava_lang_String_2
  (JNIEnv *, jobject, jlong, jint, jint, jstring);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawText
 * Signature: (JIIIIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawText__JIIIIILjava_lang_String_2
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jstring);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    boundingRect
 * Signature: (JIIIIILjava/lang/String;)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_boundingRect
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint, jstring);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRectBrush
 * Signature: (JIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRectBrush
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRect
 * Signature: (JIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRect__JIIIIJ
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRect
 * Signature: (JIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRect__JIIIII
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    eraseRect
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_eraseRect
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);



#ifdef __cplusplus
}
#endif
#endif
