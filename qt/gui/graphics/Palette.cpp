#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SPalette.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_create__
(JNIEnv * env, jobject self) {

    QPalette * palette = new QPalette();
    return (jlong)(intptr_t)palette;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    create
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_create__JJ
(JNIEnv * env, jobject self, jlong buttonColor, jlong windowColor) {

    QColor button = QColor(QRgb(buttonColor));
    QColor window = QColor(QRgb(windowColor));
    QPalette * palette = new QPalette(button,window);
    return (jlong)(intptr_t)palette;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    create
 * Signature: (JJJJJJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_create__JJJJJJJJJ
(JNIEnv * env, jobject self, jlong windowTextBrush, jlong buttonBrush, jlong lightBrush, jlong darkBrush, jlong midBrush, jlong textBrush, jlong brightTextBrush, jlong baseBrush, jlong windowBrush) {

    QBrush * windowText = (QBrush*)windowTextBrush;
    QBrush * button = (QBrush*)buttonBrush;
    QBrush * light = (QBrush*)lightBrush;
    QBrush * dark = (QBrush*)darkBrush;
    QBrush * mid = (QBrush*)midBrush;
    QBrush * text = (QBrush*)textBrush;
    QBrush * brightText = (QBrush*)brightTextBrush;
    QBrush * base = (QBrush*)baseBrush;
    QBrush * window = (QBrush*)windowBrush;


    QPalette * palette = new QPalette(*windowText,
                                      *button,
                                      *light,
                                      *dark,
                                      *mid,
                                      *text,
                                      *brightText,
                                      *base,
                                      *window
                                      );

    return (jlong)(intptr_t)palette;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    create
 * Signature: (JJJJJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_create__JJJJJJJ
(JNIEnv * env, jobject self, jlong windowText, jlong window, jlong light, jlong dark, jlong mid, jlong text, jlong base) {

    QColor windowTextColor = QColor(QRgb(windowText));
    QColor windowColor = QColor(QRgb(window));
    QColor lightColor = QColor(QRgb(light));
    QColor darkColor = QColor(QRgb(dark));
    QColor midColor = QColor(QRgb(mid));
    QColor textColor = QColor(QRgb(text));
    QColor baseColor = QColor(QRgb(base));

    QPalette * palette = new QPalette(windowTextColor,
                                      windowColor,
                                      lightColor,
                                      darkColor,
                                      midColor,
                                      textColor,
                                      baseColor
                                     );

    return (jlong)(intptr_t)palette;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_create__J
(JNIEnv * env, jobject self, jlong palettePointer) {

    QPalette * palette = (QPalette*)palettePointer;
    QPalette * target = new QPalette(*palette);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPalette_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    delete palette;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    currentColorGroup
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPalette_currentColorGroup
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    return int(palette->currentColorGroup());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    setCurrentColorGroup
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPalette_setCurrentColorGroup
(JNIEnv * env, jobject self, jlong pointer, jint group) {

    QPalette * palette = (QPalette*)pointer;
    QPalette::ColorGroup gp = QPalette::ColorGroup(group);
    palette->setCurrentColorGroup(gp);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    color
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_color__JII
(JNIEnv * env, jobject self, jlong pointer, jint cg, jint cr) {

    QPalette::ColorGroup gp = QPalette::ColorGroup(cg);
    QPalette::ColorRole role = QPalette::ColorRole(cr);
    QPalette * palette = (QPalette*)pointer;
    QColor col = palette->color(gp,role);
    return qRgba(col.red(),col.green(),col.blue(),col.alpha());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    brush
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_brush__JII
(JNIEnv * env, jobject self, jlong pointer, jint cg, jint cr) {

    QPalette::ColorGroup gp = QPalette::ColorGroup(cg);
    QPalette::ColorRole role = QPalette::ColorRole(cr);
    QPalette * palette = (QPalette*)pointer;
    QBrush br = palette->brush(gp,role);

    QBrush * brush = new QBrush();
    *brush = br;
    return (jlong)(intptr_t)brush;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    setColor
 * Signature: (JIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPalette_setColor__JIIJ
(JNIEnv * env, jobject self, jlong pointer, jint cg, jint cr, jlong colorVal) {

    QPalette * palette = (QPalette*)pointer;
    QColor color = QColor(QRgb(colorVal));
    QPalette::ColorGroup gp = QPalette::ColorGroup(cg);
    QPalette::ColorRole role = QPalette::ColorRole(cr);

    palette->setColor(gp,role,color);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    setColor
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPalette_setColor__JIJ
(JNIEnv * env, jobject self, jlong pointer, jint cr, jlong colorVal) {

    QPalette * palette = (QPalette*)pointer;
    QColor color = QColor(QRgb(colorVal));
    QPalette::ColorRole role = QPalette::ColorRole(cr);

    palette->setColor(role,color);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    setBrush
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPalette_setBrush__JIJ
(JNIEnv * env, jobject self, jlong pointer, jint cr, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QPalette * palette = (QPalette*)pointer;
    QPalette::ColorRole role = QPalette::ColorRole(cr);

    palette->setBrush(role,*brush);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    isBrushSet
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPalette_isBrushSet
(JNIEnv * env, jobject self, jlong pointer, jint cg, jint cr) {

    QPalette * palette = (QPalette*)pointer;
    QPalette::ColorGroup gp = QPalette::ColorGroup(cg);
    QPalette::ColorRole role = QPalette::ColorRole(cr);

    return palette->isBrushSet(gp,role) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    setBrush
 * Signature: (JIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPalette_setBrush__JIIJ
(JNIEnv * env, jobject self, jlong pointer, jint cg, jint cr, jlong brushPointer) {

    QPalette * palette = (QPalette*)pointer;
    QPalette::ColorGroup gp = QPalette::ColorGroup(cg);
    QPalette::ColorRole role = QPalette::ColorRole(cr);

    QBrush * brush = (QBrush*)brushPointer;
    palette->setBrush(gp,role,*brush);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    setColorGroup
 * Signature: (JIJJJJJJJJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPalette_setColorGroup
  (JNIEnv * env, jobject self, jlong pointer, jint cr, jlong windowText, jlong button, jlong light, jlong dark, jlong mid, jlong text, jlong bright_text, jlong base, jlong window){

    QBrush * windowTextBrush = (QBrush*)windowText;
    QBrush * buttonBrush = (QBrush*)button;
    QBrush * lightBrush = (QBrush*)light;
    QBrush * darkBrush = (QBrush*)dark;
    QBrush * midBrush = (QBrush*)mid;
    QBrush * textBrush = (QBrush*)text;
    QBrush * brightTextBrush = (QBrush*)bright_text;
    QBrush * baseBrush = (QBrush*)base;
    QBrush * windowBrush = (QBrush*)window;


    QPalette::ColorGroup gp = QPalette::ColorGroup(cr);
    QPalette * palette = (QPalette*)pointer;
    palette->setColorGroup(gp,
                           *windowTextBrush,
                           *buttonBrush,
                           *lightBrush,
                           *darkBrush,
                           *midBrush,
                           *textBrush,
                           *brightTextBrush,
                           *baseBrush,
                           *windowBrush);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    isEqual
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPalette_isEqual
(JNIEnv * env, jobject self, jlong pointer, jint cr1, jint cr2) {

    QPalette * palette = (QPalette*)pointer;
    bool result = palette->isEqual(QPalette::ColorGroup(cr1),QPalette::ColorGroup(cr2));
    return result ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    color
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_color__JI
(JNIEnv * env, jobject self, jlong pointer, jint cr) {

    QPalette * palette = (QPalette*)pointer;
    QColor color = palette->color(QPalette::ColorRole(cr));
    return qRgba(color.red(),color.green(),color.blue(),color.alpha());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    brush
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_brush__JI
(JNIEnv * env, jobject self, jlong pointer, jint cr) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->brush(QPalette::ColorRole(cr));

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    windowText
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_windowText
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->windowText();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    button
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_button
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->button();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    light
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_light
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->light();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    dark
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_dark
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->dark();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    mid
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_mid
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->mid();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    text
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_text
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->text();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    base
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_base
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->base();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    alternateBase
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_alternateBase
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->alternateBase();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    toolTipBase
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_toolTipBase
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->toolTipBase();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    toolTipText
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_toolTipText
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->toolTipText();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    window
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_window
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->window();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    midlight
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_midlight
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->midlight();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    brightText
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_brightText
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->brightText();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    buttonText
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_buttonText
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->buttonText();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    shadow
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_shadow
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->shadow();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    highlight
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_highlight
(JNIEnv * env, jobject self, jlong pointer) {
    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->highlight();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    highlightedText
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_highlightedText
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->highlightedText();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    link
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_link
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->link();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    linkVisited
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_linkVisited
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->linkVisited();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPalette
 * Method:    placeholderText
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPalette_placeholderText
(JNIEnv * env, jobject self, jlong pointer) {

    QPalette * palette = (QPalette*)pointer;
    QBrush brush = palette->placeholderText();

    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}
