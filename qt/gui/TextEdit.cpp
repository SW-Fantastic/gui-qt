#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_STextEdit.h"

#include "java/types/SWidget.h"
#include "java/types/STextEdit.h"


STextEdit::STextEdit(jobject self):QTextEdit() {
    this->self = self;
}

STextEdit::STextEdit(jobject self,QWidget * parent):QTextEdit(parent) {
    this->self = self;
}

void STextEdit::paintEvent(QPaintEvent *event) {
    QTextEdit::paintEvent(event);
    paintEventWithJava(event,this->self,_P(this));
}


/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_create
(JNIEnv * env, jobject self, jlong parentPointer) {

    self = env->NewGlobalRef(self);
    STextEdit * edit = nullptr;
    if(parentPointer > 0) {
        QWidget * widget = (QWidget*)parentPointer;
        edit = new STextEdit(self,widget);
    } else {
        edit = new STextEdit(self);
    }

    SWidget::initializeWidgetEvents(edit,self);
    return _P(edit);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    dispose
 * Signature: (J)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    delete edit;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setDocument
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setDocument
(JNIEnv * env, jobject self, jlong pointer, jlong documentPointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextDocument * document = (QTextDocument*)documentPointer;
    edit->setDocument(document);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    document
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_document
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return _P(edit->document());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setPlaceholderText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setPlaceholderText
(JNIEnv * env, jobject self, jlong pointer, jstring strVal) {

    const char * str = env->GetStringUTFChars(strVal,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setPlaceholderText(QString(str));
    env->ReleaseStringUTFChars(strVal,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    placeholderText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_placeholderText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    std::string str = edit->placeholderText().toStdString();
    const char * strVal = str.c_str();
    return asJavaString(env,strVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setTextCursor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setTextCursor
(JNIEnv * env, jobject self, jlong pointer, jlong textCursorPointer){

    QTextCursor * cursor = (QTextCursor*)textCursorPointer;
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setTextCursor(*cursor);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    textCursor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_textCursor
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = edit->textCursor();
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    isReadOnly
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_isReadOnly
(JNIEnv * env, jobject self, jlong pointer){

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->isReadOnly() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setReadOnly
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setReadOnly
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setReadOnly(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setTextInteractionFlags
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setTextInteractionFlags
(JNIEnv * env, jobject self, jlong pointer, jint flags) {

    Qt::TextInteractionFlags flagsVal = Qt::TextInteractionFlags(flags);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setTextInteractionFlags(flagsVal);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    fontPointSize
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_fontPointSize
(JNIEnv * env, jobject self, jlong pointer){

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->fontPointSize();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    fontFamily
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_fontFamily
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    std::string strVal = edit->fontFamily().toStdString();
    const char * val = strVal.c_str();
    return asJavaString(env,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    fontWeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_fontWeight
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->fontWeight();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    fontUnderline
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_fontUnderline
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->fontUnderline() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    fontItalic
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_fontItalic
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->fontItalic() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    textColor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_textColor
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QColor color = edit->textColor();
    return (jlong)qRgba(color.red(),color.green(),color.blue(),color.alpha());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    textBackgroundColor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_textBackgroundColor
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QColor color = edit->textBackgroundColor();
    return (jlong)qRgba(color.red(),color.green(),color.blue(),color.alpha());
}
/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    currentFont
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_currentFont
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = new QFont();
    QTextEdit * edit = (QTextEdit*)pointer;
    *font = edit->currentFont();
    return _P(font);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return (unsigned int)(edit->alignment());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    mergeCurrentCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_mergeCurrentCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong charFormatPointer) {

    QTextCharFormat * format = (QTextCharFormat*)charFormatPointer;
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->mergeCurrentCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setCurrentCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setCurrentCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong formatPointer) {

    QTextCharFormat * format = (QTextCharFormat*)formatPointer;
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setCurrentCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    currentCharFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_currentCharFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = edit->currentCharFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    autoFormatting
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_autoFormatting
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return int(edit->autoFormatting());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setAutoFormatting
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setAutoFormatting
(JNIEnv * env, jobject self, jlong pointer, jint autoFormatVal) {

    QTextEdit::AutoFormatting formatting = QTextEdit::AutoFormatting(autoFormatVal);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setAutoFormatting(formatting);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    tabChangesFocus
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_tabChangesFocus
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->tabChangesFocus() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setTabChangesFocus
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setTabChangesFocus
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setTabChangesFocus(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setDocumentTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setDocumentTitle
  (JNIEnv * env, jobject self, jlong pointer, jstring strText) {

    QTextEdit * edit = (QTextEdit*)pointer;
    const char * cTitle = env->GetStringUTFChars(strText,0);
    edit->setDocumentTitle(QString(cTitle));
    env->ReleaseStringUTFChars(strText,cTitle);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    documentTitle
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_documentTitle
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    std::string title = edit->documentTitle().toStdString();
    const char* cTitle = title.c_str();
    return asJavaString(env,cTitle);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    isUndoRedoEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_isUndoRedoEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->isUndoRedoEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setUndoRedoEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setUndoRedoEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setUndoRedoEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    lineWrapMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_lineWrapMode
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->lineWrapMode();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setLineWrapMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setLineWrapMode
(JNIEnv * env, jobject self, jlong pointer, jint wrapMode) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextEdit::LineWrapMode mode = QTextEdit::LineWrapMode(wrapMode);
    edit->setLineWrapMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    lineWrapColumnOrWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_lineWrapColumnOrWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return int(edit->lineWrapColumnOrWidth());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setLineWrapColumnOrWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setLineWrapColumnOrWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setLineWrapColumnOrWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    wordWrapMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_wordWrapMode
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return int(edit->wordWrapMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setWordWrapMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setWordWrapMode
(JNIEnv * env, jobject self, jlong pointer, jint modeVal) {

    QTextOption::WrapMode mode = QTextOption::WrapMode(modeVal);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setWordWrapMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    find
 * Signature: (JLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_find
  (JNIEnv * env, jobject self, jlong pointer, jstring subjectVal, jint findFlags) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextDocument::FindFlags flags = QTextDocument::FindFlags(findFlags);
    const char * subject = env->GetStringUTFChars(subjectVal,0);

    jboolean val = edit->find(QString(subject),flags) ? JNI_TRUE : JNI_FALSE ;
    env->ReleaseStringUTFChars(subjectVal,subject);
    return val;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    findRegexp
 * Signature: (JJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_findRegexp
(JNIEnv * env, jobject self, jlong pointer, jlong regexpPointer, jint findFlagsVal) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextDocument::FindFlags flags = QTextDocument::FindFlags(findFlagsVal);
    QRegExp * regexp = (QRegExp*)regexpPointer;
    return edit->find(*regexp,flags) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    findRegularExpression
 * Signature: (JJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_findRegularExpression
(JNIEnv * env, jobject self, jlong pointer, jlong regularExpressionPointer, jint findFlagsVal) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextDocument::FindFlags flags = QTextDocument::FindFlags(findFlagsVal);
    QRegularExpression * exp = (QRegularExpression*)regularExpressionPointer;

    return edit->find(*exp,flags);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    toPlainText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_toPlainText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    std::string str = edit->toPlainText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    toHtml
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_toHtml
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    std::string str = edit->toHtml().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    toMarkdown
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_toMarkdown
(JNIEnv * env, jobject self, jlong pointer, jint markdownFlags) {

    QTextDocument::MarkdownFeatures future = QTextDocument::MarkdownFeatures(markdownFlags);
    QTextEdit * edit = (QTextEdit*)pointer;
    std::string str = edit->toMarkdown(future).toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    ensureCursorVisible
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_ensureCursorVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->ensureCursorVisible();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    loadResource
 * Signature: (JILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_loadResource
(JNIEnv * env, jobject self, jlong pointer, jint typeVal, jstring urlStr) {

    QTextEdit * edit = (QTextEdit*)pointer;
    const char * cUrl = env->GetStringUTFChars(urlStr,0);
    QString url(cUrl);
    QTextDocument::ResourceType type = QTextDocument::ResourceType(typeVal);

    QVariant * data = new QVariant();
    *data = edit->loadResource(type,QUrl(url));
    return _P(data);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    createStandardContextMenu
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_createStandardContextMenu__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QMenu * menu = edit->createStandardContextMenu();
    return _P(menu);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    createStandardContextMenu
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_createStandardContextMenu__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QPoint * point = (QPoint*)pointPointer;
    QMenu * menu = edit->createStandardContextMenu(*point);
    return _P(menu);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    cursorForPosition
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_cursorForPosition
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QTextEdit * edit = (QTextEdit*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = edit->cursorForPosition(*point);
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    cursorRect
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_cursorRect__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong cursorPointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QTextCursor * cursor = (QTextCursor*)cursorPointer;
    QRect * rect = new QRect();
    *rect = edit->cursorRect(*cursor);

    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    cursorRect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_cursorRect__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QRect * rect = new QRect();
    *rect = edit->cursorRect();

    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    anchorAt
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_anchorAt
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QTextEdit * edit = (QTextEdit*)pointer;
    std::string str = edit->anchorAt(*point).toStdString();

    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    overwriteMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_overwriteMode
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->overwriteMode() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setOverwriteMode
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setOverwriteMode
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setOverwriteMode(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    tabStopDistance
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_tabStopDistance
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->tabStopDistance();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setTabStopDistance
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setTabStopDistance
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setTabStopDistance(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    cursorWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_cursorWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->cursorWidth();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setCursorWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setCursorWidth
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setCursorWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    acceptRichText
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_acceptRichText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->acceptRichText() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setAcceptRichText
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setAcceptRichText
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setAcceptRichText(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setExtraSelections
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setExtraSelections
(JNIEnv * env, jobject self, jlong pointer, jlongArray selectionPointers) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QList<QTextEdit::ExtraSelection> selections;

    jlong * arr = env->GetLongArrayElements(selectionPointers,0);
    int len = env->GetArrayLength(selectionPointers);

    for(int idx = 0; idx < len; idx ++) {
        QTextEdit::ExtraSelection * elem = (QTextEdit::ExtraSelection*)arr[idx];
        selections.append(*elem);
    }

    edit->setExtraSelections(selections);
    env->ReleaseLongArrayElements(selectionPointers,arr,0);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    extraSelections
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_extraSelections
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QList<QTextEdit::ExtraSelection> selections = edit->extraSelections();

    jlong * arr = new jlong[selections.size()];
    for(int idx = 0; idx < selections.size(); idx++) {
        QTextEdit::ExtraSelection * elem = new QTextEdit::ExtraSelection();
        *elem = selections.at(idx);
        arr[idx] = _P(elem);
    }

    jlongArray result = env->NewLongArray(selections.size());
    env->SetLongArrayRegion(result,0,selections.size(),arr);
    return result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    moveCursor
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_moveCursor
(JNIEnv * env, jobject self, jlong pointer, jint moveOperationVal, jint moveModeVal) {

    QTextCursor::MoveOperation op = QTextCursor::MoveOperation(moveOperationVal);
    QTextCursor::MoveMode moveMode = QTextCursor::MoveMode(moveModeVal);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->moveCursor(op,moveMode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    canPaste
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_canPaste
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    return edit->canPaste() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    inputMethodQuery
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_inputMethodQuery__JI
(JNIEnv * env, jobject self, jlong pointer, jint propVal) {

    Qt::InputMethodQuery query = Qt::InputMethodQuery(propVal);
    QTextEdit * edit = (QTextEdit*)pointer;
    QVariant * data = new QVariant();
    *data = edit->inputMethodQuery(query);
    return _P(data);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    inputMethodQuery
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_inputMethodQuery__JIJ
(JNIEnv * env, jobject self, jlong pointer, jint propVal, jlong variantPointer) {

    Qt::InputMethodQuery query = Qt::InputMethodQuery(propVal);
    QTextEdit * edit = (QTextEdit*)pointer;
    QVariant * variant = (QVariant*)variantPointer;

    QVariant * data = new QVariant();
    *data = edit->inputMethodQuery(query,*variant);
    return _P(data);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setFontPointSize
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setFontPointSize
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setFontPointSize(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setFontFamily
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setFontFamily
(JNIEnv * env, jobject self, jlong pointer, jstring familyVal) {

    const char * val = env->GetStringUTFChars(familyVal,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setFontFamily(QString(val));
    env->ReleaseStringUTFChars(familyVal,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setFontWeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setFontWeight
(JNIEnv * env, jobject self, jlong pointer, jint weight) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setFontWeight(weight);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setFontUnderline
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setFontUnderline
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setFontUnderline(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setFontItalic
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setFontItalic
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setFontItalic(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setTextColor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setTextColor
(JNIEnv * env, jobject self, jlong pointer, jlong color) {

    QRgb rgb = QRgb(color);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setTextColor(QColor(rgb));
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setTextBackgroundColor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setTextBackgroundColor
(JNIEnv * env, jobject self, jlong pointer, jlong bgColor) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QRgb color = QRgb(bgColor);
    edit->setTextBackgroundColor(QColor(color));
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setCurrentFont
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setCurrentFont
(JNIEnv * env, jobject self, jlong pointer, jlong fontPointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    QFont * font = (QFont*)fontPointer;
    edit->setCurrentFont(*font);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong align) {

    Qt::Alignment alignVal = Qt::Alignment((unsigned int)align);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setAlignment(alignVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setPlainText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setPlainText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char* val = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setPlainText(QString(val));
    env->ReleaseStringUTFChars(text,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setHtml
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setHtml
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char* val = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setHtml(QString(val));
    env->ReleaseStringUTFChars(text,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setMarkdown
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setMarkdown
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char* val = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setMarkdown(QString(val));
    env->ReleaseStringUTFChars(text,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_setText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char* val = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->setText(QString(val));
    env->ReleaseStringUTFChars(text,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    cut
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_cut
(JNIEnv * env, jobject self, jlong pointer){

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->cut();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    copy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_copy
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->copy();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    paste
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_paste
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->paste();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    undo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_undo
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->undo();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    redo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_redo
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->redo();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->clear();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    selectAll
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_selectAll
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->selectAll();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    insertPlainText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_insertPlainText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->insertPlainText(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    insertHtml
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_insertHtml
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->insertHtml(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    append
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_append
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->append(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    scrollToAnchor
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_scrollToAnchor
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,0);
    QTextEdit * edit = (QTextEdit*)pointer;
    edit->scrollToAnchor(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    zoomIn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_zoomIn
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->zoomIn(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextEdit
 * Method:    zoomOut
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextEdit_zoomOut
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextEdit * edit = (QTextEdit*)pointer;
    edit->zoomOut(val);
}
