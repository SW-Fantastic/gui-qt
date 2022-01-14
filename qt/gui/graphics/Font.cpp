#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SFont.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SFont_create__
(JNIEnv *, jobject) {

    QFont * font = new QFont();
    return (jlong)(intptr_t)font;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    create
 * Signature: (Ljava/lang/String;IIZ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SFont_create__Ljava_lang_String_2IIZ
(JNIEnv * env, jobject, jstring family, jint pointSize, jint weight, jboolean italic) {

    const char * text = env->GetStringUTFChars(family,JNI_FALSE);
    QString txtFamily(text);
    QFont * font = new QFont(txtFamily,pointSize,weight,italic);
    return (jlong)(intptr_t)font;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    family
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_graphics_SFont_family
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    std::string str = font->family().toStdString();
    const char* cStr = str.c_str();

    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setFamily
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setFamily
(JNIEnv * env, jobject self, jlong pointer, jstring family) {

    QFont * font = (QFont*)pointer;
    const char* cStr = env->GetStringUTFChars(family,JNI_FALSE);
    QString qFamily(cStr);

    font->setFamily(qFamily);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    styleName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_graphics_SFont_styleName
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    std::string str = font->styleName().toStdString();
    const char* cStr = str.c_str();

    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setStyleName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setStyleName
(JNIEnv * env, jobject self, jlong pointer, jstring name) {

    QFont * font = (QFont*)pointer;
    const char* cStr = env->GetStringUTFChars(name,JNI_FALSE);
    QString qStyleName(cStr);

    font->setFamily(qStyleName);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    pointSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_pointSize
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->pointSize();;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setPointSize
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setPointSize
(JNIEnv * env, jobject self, jlong pointer, jint size) {

    QFont * font = (QFont*)pointer;
    font->setPointSize(size);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    pointSizeF
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SFont_pointSizeF
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->pointSizeF();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setPointSizeF
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setPointSizeF
(JNIEnv * env, jobject self, jlong pointer, jdouble size) {

    QFont * font = (QFont*)pointer;
    font->setPointSizeF(size);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    pixelSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_pixelSize
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->pixelSize();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setPixelSize
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setPixelSize
(JNIEnv * env, jobject self, jlong pointer, jint size) {

    QFont * font = (QFont*)pointer;
    font->setPixelSize(size);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    weight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_weight
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->weight();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setWeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setWeight
(JNIEnv * env, jobject self, jlong pointer, jint weight) {

    QFont * font = (QFont*)pointer;
    font->setWeight(weight);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    bold
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_bold
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->bold() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setBold
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setBold
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QFont * font = (QFont*)pointer;
    font->setBold(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setStyle
(JNIEnv * env, jobject self, jlong pointer, jint style) {

    QFont::Style styleVal = QFont::Style(style);
    QFont * font = (QFont*)pointer;
    font->setStyle(styleVal);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    style
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_style
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return int(font->style());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    italic
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_italic
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->italic() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setItalic
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setItalic
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QFont * font = (QFont*)pointer;
    font->setItalic(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    underline
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_underline
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->underline() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setUnderline
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setUnderline
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QFont * font = (QFont*)pointer;
    font->setUnderline(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    overline
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_overline
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->overline() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setOverline
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setOverline
(JNIEnv * env, jobject self, jlong pointer, jboolean overline) {

    QFont * font = (QFont*)pointer;
    font->setOverline(overline);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    strikeOut
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_strikeOut
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->strikeOut() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setStrikeOut
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setStrikeOut
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QFont * font = (QFont*)pointer;
    font->setStrikeOut(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    fixedPitch
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_fixedPitch
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->fixedPitch() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setFixedPitch
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setFixedPitch
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QFont * font = (QFont*)pointer;
    font->setFixedPitch(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    kerning
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_kerning
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->kerning() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setKerning
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setKerning
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QFont * font = (QFont*)pointer;
    font->setKerning(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    styleHint
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_styleHint
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return int(font->styleHint());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    styleStrategy
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SFont_styleStrategy
(JNIEnv * env, jobject self, jlong pointer) {

   QFont * font = (QFont*)pointer;
   return long(font->styleStrategy());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setStyleHint
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setStyleHint
(JNIEnv * env, jobject self, jlong pointer, jint styleHint, jlong strategy) {

    QFont * font = (QFont*)pointer;
    QFont::StyleStrategy strategyVal = QFont::StyleStrategy(strategy);
    QFont::StyleHint hintVal = QFont::StyleHint(styleHint);

    font->setStyleHint(hintVal,strategyVal);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setStyleStrategy
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setStyleStrategy
(JNIEnv * env, jobject self, jlong pointer, jlong styleStrategy) {

    QFont::StyleStrategy strategyVal = QFont::StyleStrategy(styleStrategy);
    QFont * font = (QFont*)pointer;
    font->setStyleStrategy(strategyVal);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    stretch
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_stretch
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->stretch();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setStretch
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setStretch
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QFont * font = (QFont*)pointer;
    font->setStretch(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    letterSpacing
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SFont_letterSpacing
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->letterSpacing();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    letterSpacingType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_letterSpacingType
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return int(font->letterSpacingType());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setLetterSpacing
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setLetterSpacing
(JNIEnv * env, jobject self, jlong pointer, jint spacingType, jdouble val) {

    QFont * font = (QFont*)pointer;
    QFont::SpacingType type = QFont::SpacingType(val);

    font->setLetterSpacing(type,val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    wordSpacing
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SFont_wordSpacing
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return font->wordSpacing();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setWordSpacing
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setWordSpacing
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QFont * font = (QFont*)pointer;
    font->setWordSpacing(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setCapitalization
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setCapitalization
(JNIEnv * env, jobject self, jlong pointer, jint capitalization) {

    QFont * font = (QFont*)pointer;
    QFont::Capitalization cap = QFont::Capitalization(capitalization);
    font->setCapitalization(cap);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    capitalization
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_capitalization
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return int(font->capitalization());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    setHintingPreference
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_setHintingPreference
(JNIEnv * env, jobject self, jlong pointer, jint hintPref) {

    QFont * font = (QFont*)pointer;
    QFont::HintingPreference pref = QFont::HintingPreference(hintPref);
    font->setHintingPreference(pref);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    hintingPreference
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SFont_hintingPreference
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    return int(font->hintingPreference());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    isCopyOf
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SFont_isCopyOf
(JNIEnv * env, jobject self, jlong pointer, jlong anotherFont) {

    QFont * font = (QFont*)pointer;
    QFont * another = (QFont*)anotherFont;

    return font->isCopyOf(*another) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    key
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_graphics_SFont_key
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    std::string str = font->key().toStdString();
    const char * cStr = str.c_str();

    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SFont_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = (QFont*)pointer;
    delete font;
    cleanJavaPointer(env,self);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SFont
 * Method:    loadFont
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SFont_loadFont
(JNIEnv * env, jclass type, jstring path) {

    const char* cPath = env->GetStringUTFChars(path,JNI_FALSE);

    int fontId = QFontDatabase::addApplicationFont(QString(cPath));

    QStringList families = QFontDatabase::applicationFontFamilies(fontId);
    if(families.size() == 0) {
        return 0;
    }

    QFont * font = new QFont(families.at(0));
    return (jlong)(intptr_t)font;
}
