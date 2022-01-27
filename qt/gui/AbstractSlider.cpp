#include "gui_global.h"
#include"java/org_swdc_qt_internal_widgets_SAbstractSlider.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    orientation
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_orientation
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return int(slider->orientation());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setMinimum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setMinimum
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setMinimum(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    minimum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_minimum
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->minimum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setMaximum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setMaximum
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setMaximum(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    maximum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_maximum
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->maximum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setSingleStep
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setSingleStep
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setSingleStep(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    singleStep
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_singleStep
(JNIEnv * env, jobject self, jlong pointer){

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->singleStep();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setPageStep
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setPageStep
(JNIEnv * env, jobject self, jlong pointer, jint pageStep) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setPageStep(pageStep);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    pageStep
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_pageStep
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->pageStep();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setTracking
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setTracking
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setTracking(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    hasTracking
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_hasTracking
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->hasTracking() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setSliderDown
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setSliderDown
(JNIEnv * env, jobject self, jlong pointer, jboolean val){

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setSliderDown(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    isSliderDown
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_isSliderDown
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->isSliderDown() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setSliderPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setSliderPosition
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setSliderPosition(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    sliderPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_sliderPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->sliderPosition();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setInvertedAppearance
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setInvertedAppearance
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setInvertedAppearance(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    invertedAppearance
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_invertedAppearance
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->invertedAppearance() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setInvertedControls
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setInvertedControls
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setInvertedControls(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    invertedControls
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_invertedControls
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->invertedControls() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    value
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_value
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    return slider->value();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    triggerAction
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_triggerAction
(JNIEnv * env, jobject self, jlong pointer, jint action) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->triggerAction(QAbstractSlider::SliderAction(action));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setValue
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setValue
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setValue(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setOrientation
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setOrientation
(JNIEnv * env, jobject self, jlong pointer, jlong origin) {

    Qt::Orientation orientation = Qt::Orientation(origin);
    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setOrientation(orientation);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSlider
 * Method:    setRange
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSlider_setRange
(JNIEnv * env, jobject self, jlong pointer, jint min, jint max) {

    QAbstractSlider * slider = (QAbstractSlider*)pointer;
    slider->setRange(min,max);
}
