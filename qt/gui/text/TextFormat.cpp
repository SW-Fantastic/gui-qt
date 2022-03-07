#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextFormat.h"

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_create__
(JNIEnv * env, jobject self) {

    QTextFormat * format = new QTextFormat();
    return (jlong)(intptr_t)format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    create
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_create__I
(JNIEnv * env, jobject self, jint type) {

    QTextFormat::FormatType typeVal = QTextFormat::FormatType(type);
    QTextFormat * format = new QTextFormat(typeVal);
    return (jlong)(intptr_t)format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    delete format;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    merge
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_merge
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QTextFormat * anotherOne = (QTextFormat*)another;
    QTextFormat * format = (QTextFormat*)pointer;

    format->merge(*anotherOne);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFormat_type
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->type();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    objectIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFormat_objectIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->objectIndex();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    setObjectIndex
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_setObjectIndex
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QTextFormat * format = (QTextFormat*)pointer;
    format->setObjectIndex(index);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    property
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_property
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextFormat * format = (QTextFormat*)pointer;
    QVariant variant = format->property(val);
    QVariant * result = new QVariant();
    *result = variant;
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    setProperty
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_setProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId, jlong variantPointer) {

    QVariant * variantData = (QVariant*)variantPointer;
    QTextFormat * format = (QTextFormat*)pointer;
    format->setProperty(propId,*variantData);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    clearProperty
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_clearProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    format->clearProperty(propId);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    hasProperty
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_hasProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->hasProperty(propId) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    boolProperty
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_boolProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->boolProperty(propId) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    intProperty
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFormat_intProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->intProperty(propId);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    doubleProperty
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFormat_doubleProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->doubleProperty(propId);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    stringProperty
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextFormat_stringProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    QString val = format->stringProperty(propId);
    std::string str = val.toStdString();
    const char* cStr = str.c_str();

    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    colorProperty
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_colorProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    QColor color = format->colorProperty(propId);
    return qRgba(color.red(),color.green(),color.blue(),color.alpha());
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    penProperty
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_penProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    QPen pen = format->penProperty(propId);
    QPen * target = new QPen();
    *target = pen;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    brushProperty
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_brushProperty
(JNIEnv * env, jobject self, jlong pointer, jint propId) {

    QTextFormat * format = (QTextFormat*)pointer;
    QBrush brush = format->brushProperty(propId);
    QBrush * target = new QBrush();
    *target = brush;

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    propertyCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFormat_propertyCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->propertyCount();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    setObjectType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_setObjectType
(JNIEnv * env, jobject self, jlong pointer, jint typeVal) {

    QTextFormat * format = (QTextFormat*)pointer;
    format->setObjectType(typeVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    objectType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFormat_objectType
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->objectType();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isCharFormat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isCharFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isCharFormat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isBlockFormat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isBlockFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isBlockFormat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isListFormat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isListFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isListFormat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isFrameFormat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isFrameFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isFrameFormat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isImageFormat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isImageFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isImageFormat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isTableFormat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isTableFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isTableFormat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    isTableCellFormat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFormat_isTableCellFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return format->isTableCellFormat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    toBlockFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_toBlockFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QTextBlockFormat * target = new QTextBlockFormat();
    *target = format->toBlockFormat();
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    toCharFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_toCharFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QTextCharFormat * target = new QTextCharFormat();
    *target = format->toCharFormat();
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    toListFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_toListFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QTextListFormat * target = new QTextListFormat();
    *target = format->toListFormat();
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    toTableFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_toTableFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QTextTableFormat * target = new QTextTableFormat();
    *target = format->toTableFormat();
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    toFrameFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_toFrameFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QTextFrameFormat * target = new QTextFrameFormat();
    *target = format->toFrameFormat();
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    toImageFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_toImageFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QTextImageFormat * target = new QTextImageFormat();
    *target = format->toImageFormat();
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    toTableCellFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_toTableCellFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QTextTableCellFormat * target = new QTextTableCellFormat();
    *target = format->toTableCellFormat();
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    setLayoutDirection
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_setLayoutDirection
(JNIEnv * env, jobject self, jlong pointer, jint direction) {

    QTextFormat * format = (QTextFormat*)pointer;
    format->setLayoutDirection(Qt::LayoutDirection(direction));
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    layoutDirection
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFormat_layoutDirection
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    return int(format->layoutDirection());
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    setBackground
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_setBackground
(JNIEnv * env, jobject self, jlong pointer, jlong color) {

    QBrush * brush = (QBrush*)color;
    QTextFormat * format = (QTextFormat*)pointer;
    format->setBackground(*brush);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    background
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_background
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QBrush brush = format->background();
    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    clearBackground
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_clearBackground
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    format->clearBackground();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    setForeground
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_setForeground
(JNIEnv * env, jobject self, jlong pointer, jlong foreground) {

    QBrush * brush = (QBrush*)foreground;
    QTextFormat * format = (QTextFormat*)pointer;
    format->setForeground(*brush);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    foreground
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFormat_foreground
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    QBrush foreground = format->foreground();
    QBrush * target = new QBrush();
    *target = foreground;

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFormat
 * Method:    clearForeground
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFormat_clearForeground
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFormat * format = (QTextFormat*)pointer;
    format->clearForeground();
}
