#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextCharFormat.h"

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_create
(JNIEnv *, jobject) {

    QTextCharFormat * format = new QTextCharFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    delete format;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFont
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFont__JJI
(JNIEnv * env, jobject self, jlong pointer, jlong fontPointer, jint behavior) {

    QTextCharFormat::FontPropertiesInheritanceBehavior behaviorVal = QTextCharFormat::FontPropertiesInheritanceBehavior(behavior);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QFont * font = (QFont*)fontPointer;
    format->setFont(*font,behaviorVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFont
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFont__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong fontPointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QFont * font = (QFont*)fontPointer;
    format->setFont(*font);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    font
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_font
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QFont font = format->font();
    QFont * target = new QFont();
    *target = font;
    return _P(target);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontFamily
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontFamily
(JNIEnv * env, jobject self, jlong pointer, jstring family) {

    const char * familyVal = env->GetStringUTFChars(family,0);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontFamily(QString(familyVal));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontFamily
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontFamily
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    std::string str = format->fontFamily().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontFamilies
 * Signature: (J[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontFamilies
(JNIEnv * env, jobject self, jlong pointer, jobjectArray families) {

    int len = env->GetArrayLength(families);
    QStringList list;

    for(int idx = 0; idx < len; idx ++) {
        jstring str = (jstring)env->GetObjectArrayElement(families,idx);
        const char * val = env->GetStringUTFChars(str,0);
        list.append(QString(val));
        env->ReleaseStringUTFChars(str,val);
    }

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontFamilies(list);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontFamilies
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontFamilies
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QVariant variant = format->fontFamilies();
    QStringList families = variant.toStringList();

    jclass strType = env->FindClass("java/lang/String");
    jobjectArray jArray = env->NewObjectArray(families.size(),strType,NULL);
    for(int idx = 0; idx < families.size();idx ++) {
        std::string strItem = families.at(idx).toStdString();
        jstring item = asJavaString(env,strItem.c_str());
        env->SetObjectArrayElement(jArray,idx,item);
    }

    return jArray;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontStyleName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontStyleName
(JNIEnv * env, jobject self, jlong pointer, jstring styleName) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    const char * str = env->GetStringUTFChars(styleName,0);
    format->setFontStyleName(QString(str));
    env->ReleaseStringUTFChars(styleName,str);

}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontStyleName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontStyleName
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QString str = format->fontStyleName().toString();
    std::string styleName = str.toStdString();
    const char * data = styleName.c_str();
    return asJavaString(env,data);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontPointSize
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontPointSize
(JNIEnv * env, jobject self, jlong pointer, jdouble size) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontPointSize(size);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontPointSize
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontPointSize
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontPointSize();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontWeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontWeight
(JNIEnv * env, jobject self, jlong pointer, jint weight) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontWeight(weight);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontWeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontWeight
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontWeight();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontItalic
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontItalic
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontItalic(val);

}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontItalic
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontItalic
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontItalic();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontCapitalization
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontCapitalization
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QFont::Capitalization cap = QFont::Capitalization(val);
    format->setFontCapitalization(cap);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontCapitalization
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontCapitalization
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return int(format->fontCapitalization());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontLetterSpacingType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontLetterSpacingType
  (JNIEnv * env, jobject self, jlong pointer, jint val) {

    QFont::SpacingType type = QFont::SpacingType(val);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontLetterSpacing(type);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontLetterSpacingType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontLetterSpacingType
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return int(format->fontLetterSpacingType());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontLetterSpacing
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontLetterSpacing
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontLetterSpacing(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontLetterSpacing
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontLetterSpacing
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontLetterSpacing();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontWordSpacing
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontWordSpacing
(JNIEnv * env, jobject self, jlong pointer, jdouble wordSpac) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontWordSpacing(wordSpac);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontWordSpacing
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontWordSpacing
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontWordSpacing();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontUnderline
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontUnderline
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontUnderline(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontUnderline
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontUnderline
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontUnderline() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontOverline
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontOverline
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontOverline(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontOverline
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontOverline
(JNIEnv * env, jobject self, jlong pointer) {

   QTextCharFormat * format = (QTextCharFormat*)pointer;
   return format->fontOverline() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontStrikeOut
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontStrikeOut
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontStretch(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontStrikeOut
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontStrikeOut
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontStrikeOut() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setUnderlineColor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setUnderlineColor
(JNIEnv * env, jobject self, jlong pointer, jlong color) {

    QRgb rgb = QRgb(color);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setUnderlineColor(QColor(rgb));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    underlineColor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_underlineColor
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QColor col = format->underlineColor();
    return qRgba(col.red(),col.green(),col.blue(),col.alpha());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontFixedPitch
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontFixedPitch
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontFixedPitch(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontFixedPitch
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontFixedPitch
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontFixedPitch() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontStretch
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontStretch
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontStretch(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontStretch
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontStretch
(JNIEnv * env, jobject self, jlong pointer){

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontStretch();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontStyleHint
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontStyleHint
(JNIEnv * env, jobject self, jlong pointer, jint hintVal, jlong styleStg) {

    QFont::StyleHint hint = QFont::StyleHint(hintVal);
    QFont::StyleStrategy stg = QFont::StyleStrategy((unsigned int)styleStg);

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontStyleHint(hint,stg);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontStyleStrategy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontStyleStrategy
(JNIEnv * env, jobject self, jlong pointer, jlong stg) {

    QFont::StyleStrategy stgVal = QFont::StyleStrategy((unsigned int)stg);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontStyleStrategy(stgVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontStyleHint
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontStyleHint
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return int(format->fontStyleHint());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontStyleStrategy
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontStyleStrategy
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return (unsigned long)format->fontStyleStrategy();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontHintingPreference
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontHintingPreference
(JNIEnv * env, jobject self, jlong pointer, jint prefVal) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    QFont::HintingPreference pref = QFont::HintingPreference(prefVal);
    format->setFontHintingPreference(pref);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontHintingPreference
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontHintingPreference
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return int(format->fontHintingPreference());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setFontKerning
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setFontKerning
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setFontKerning(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    fontKerning
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_fontKerning
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->fontKerning() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setUnderlineStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setUnderlineStyle
(JNIEnv * env, jobject self, jlong pointer, jint style) {

    QTextCharFormat::UnderlineStyle styleVal = QTextCharFormat::UnderlineStyle(style);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setUnderlineStyle(styleVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    underlineStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_underlineStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return int(format->underlineStyle());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setVerticalAlignment
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setVerticalAlignment
(JNIEnv * env, jobject self, jlong pointer, jint verticalAlignVal) {

    QTextCharFormat::VerticalAlignment vertical = QTextCharFormat::VerticalAlignment(verticalAlignVal);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setVerticalAlignment(vertical);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    verticalAlignment
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_verticalAlignment
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return int(format->verticalAlignment());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setTextOutline
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setTextOutline
(JNIEnv * env, jobject self, jlong pointer, jlong penPointer) {

    QPen * pen = (QPen*)penPointer;
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setTextOutline(*pen);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    textOutline
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_textOutline
(JNIEnv * env, jobject self, jlong pointer) {

    QPen * pen = new QPen();
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    *pen = format->textOutline();
    return _P(pen);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setToolTip
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setToolTip
(JNIEnv * env, jobject self, jlong pointer, jstring toolTip) {

    const char * val = env->GetStringUTFChars(toolTip,0);
    QString str(val);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setToolTip(str);
    env->ReleaseStringUTFChars(toolTip,val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    toolTip
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_toolTip
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    std::string str = format->toolTip().toStdString();
    const char * text = str.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setAnchor
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setAnchor
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setAnchor(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    isAnchor
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_isAnchor
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    return format->isAnchor() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    setAnchorHref
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_setAnchorHref
(JNIEnv * env, jobject self, jlong pointer, jstring href) {

    const char* hrefVal = env->GetStringUTFChars(href,0);
    QTextCharFormat * format = (QTextCharFormat*)pointer;
    format->setAnchorHref(QString(hrefVal));
    env->ReleaseStringUTFChars(href,hrefVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCharFormat
 * Method:    anchorHref
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextCharFormat_anchorHref
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCharFormat * format = (QTextCharFormat*)pointer;
    std::string val = format->anchorHref().toStdString();
    return asJavaString(env,val.c_str());
}
