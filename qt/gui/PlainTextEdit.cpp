#include "gui_global.h"

#include "java/types/SWidget.h"
#include "java/types/SPlainTextEdit.h"
#include "java/org_swdc_qt_internal_widgets_SPlainTextEdit.h"


SPlainTextEdit::SPlainTextEdit(jobject self):QPlainTextEdit() {
    this->self = self;
}

SPlainTextEdit::SPlainTextEdit(jobject self, QWidget * parent, QString str):QPlainTextEdit(str,parent) {
    this->self = self;
}

void SPlainTextEdit::paintEvent(QPaintEvent *e) {
    QPlainTextEdit::paintEvent(e);
    paintEventWithJava(e,this->self,_P(this));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_create__
(JNIEnv * env, jobject self) {

    self = env->NewGlobalRef(self);
    SPlainTextEdit * text = new SPlainTextEdit(self);
    SWidget::initializeWidgetEvents(text,self);
    return _P(text);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    create
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_create__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QWidget * widget = (QWidget*)pointer;
    self = env->NewGlobalRef(self);
    const char * cText = env->GetStringUTFChars(text,0);
    SPlainTextEdit * textEdit = new SPlainTextEdit(self,widget,QString(cText));
    env->ReleaseStringUTFChars(text,cText);

    return _P(textEdit);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    delete textEdit;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setDocument
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setDocument
(JNIEnv * env, jobject self, jlong pointer, jlong docPointer) {

    QTextDocument * doc = (QTextDocument*)docPointer;
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setDocument(doc);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    document
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_document
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return _P(textEdit->document());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setPlaceholderText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setPlaceholderText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cStr = env->GetStringUTFChars(text,0);
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setPlaceholderText(QString(cStr));
    env->ReleaseStringUTFChars(text,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    placeholderText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_placeholderText
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    std::string str = textEdit->placeholderText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setTextCursor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setTextCursor
(JNIEnv * env, jobject self, jlong pointer, jlong cursorPointer) {

    QTextCursor * cursor = (QTextCursor*)cursorPointer;
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setTextCursor(*cursor);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    textCursor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_textCursor
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = textEdit->textCursor();

    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    isReadOnly
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_isReadOnly
(JNIEnv * env, jobject self, jlong pointer){

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->isReadOnly() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setReadOnly
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setReadOnly
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setReadOnly(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setTextInteractionFlags
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setTextInteractionFlags
(JNIEnv * env, jobject self, jlong pointer, jint flag) {

    Qt::TextInteractionFlags flagVal = Qt::TextInteractionFlags(flag);
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setTextInteractionFlags(flagVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    mergeCurrentCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_mergeCurrentCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong textFormatPointer) {

    QTextCharFormat * format = (QTextCharFormat*)textFormatPointer;
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->mergeCurrentCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setCurrentCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setCurrentCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong textFormatPointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QTextCharFormat * format = (QTextCharFormat*)textFormatPointer;
    textEdit->setCurrentCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    currentCharFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_currentCharFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = textEdit->currentCharFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    tabChangesFocus
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_tabChangesFocus
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->tabChangesFocus() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setTabChangesFocus
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setTabChangesFocus
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setTabChangesFocus(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setDocumentTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setDocumentTitle
(JNIEnv * env, jobject self, jlong pointer, jstring title) {

    const char * cTitle = env->GetStringUTFChars(title,0);
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setDocumentTitle(QString(cTitle));
    env->ReleaseStringUTFChars(title,cTitle);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    documentTitle
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_documentTitle
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    std::string str = textEdit->documentTitle().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    isUndoRedoEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_isUndoRedoEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->isUndoRedoEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setUndoRedoEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setUndoRedoEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setUndoRedoEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setMaximumBlockCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setMaximumBlockCount
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setMaximumBlockCount(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    maximumBlockCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_maximumBlockCount
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->maximumBlockCount();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    lineWrapMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_lineWrapMode
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return int(textEdit->lineWrapMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setLineWrapMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setLineWrapMode
(JNIEnv * env, jobject self, jlong pointer, jint wrapMode) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QPlainTextEdit::LineWrapMode mode = QPlainTextEdit::LineWrapMode(wrapMode);
    textEdit->setLineWrapMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    wordWrapMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_wordWrapMode
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return int(textEdit->wordWrapMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setWordWrapMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setWordWrapMode
(JNIEnv * env, jobject self, jlong pointer, jint mode) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QTextOption::WrapMode modeVal = QTextOption::WrapMode(mode);
    textEdit->setWordWrapMode(modeVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setBackgroundVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setBackgroundVisible
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setBackgroundVisible(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    backgroundVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_backgroundVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->backgroundVisible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setCenterOnScroll
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setCenterOnScroll
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setCenterOnScroll(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    centerOnScroll
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_centerOnScroll
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->centerOnScroll() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    find
 * Signature: (JLjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_find
(JNIEnv * env, jobject self, jlong pointer, jstring str, jint flags) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QTextDocument::FindFlags flag = QTextDocument::FindFlags(flags);
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    bool val = textEdit->find(QString(cStr),flag);
    env->ReleaseStringUTFChars(str,cStr);

    return val ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    findRegExp
 * Signature: (JJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_findRegExp
(JNIEnv * env, jobject self, jlong pointer, jlong regExpPointer, jint findFlags) {

    QRegExp * exp = (QRegExp*)regExpPointer;
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QTextDocument::FindFlags flag = QTextDocument::FindFlags(findFlags);
    return textEdit->find(*exp,flag) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    findRegularExpression
 * Signature: (JJI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_findRegularExpression
(JNIEnv * env, jobject self, jlong pointer, jlong regExpressPointer, jint findFlags) {

    QRegularExpression * exp = (QRegularExpression*)regExpressPointer;
    QTextDocument::FindFlags flag = QTextDocument::FindFlags(findFlags);
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->find(*exp,flag) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    toPlainText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_toPlainText
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    std::string str = textEdit->toPlainText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    ensureCursorVisible
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_ensureCursorVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->ensureCursorVisible();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    loadResource
 * Signature: (JILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_loadResource
(JNIEnv * env, jobject self, jlong pointer, jint typeVal, jstring urlStr) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    const char * cUrl = env->GetStringUTFChars(urlStr,0);
    QString url(cUrl);
    QTextDocument::ResourceType type = QTextDocument::ResourceType(typeVal);

    QVariant * data = new QVariant();
    *data = textEdit->loadResource(type,QUrl(url));
    return _P(data);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    createStandardContextMenu
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_createStandardContextMenu__J
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return _P(textEdit->createStandardContextMenu());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    createStandardContextMenu
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_createStandardContextMenu__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QPoint * point = (QPoint*)posPointer;
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return _P(textEdit->createStandardContextMenu(*point));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    cursorForPosition
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_cursorForPosition
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QPoint * point = (QPoint*)pointPointer;
    QTextCursor * cursor = new QTextCursor();

    *cursor = textEdit->cursorForPosition(*point);
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    cursorRect
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_cursorRect__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong textCursorPointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QTextCursor * cursor = (QTextCursor*)textCursorPointer;
    QRect * rect = new QRect();
    *rect = textEdit->cursorRect(*cursor);

    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    cursorRect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_cursorRect__J
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    QRect * rect = new QRect();
    *rect = textEdit->cursorRect();

    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    anchorAt
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_anchorAt
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QPoint * pos = (QPoint*)posPointer;
    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    std::string str = textEdit->anchorAt(*pos).toStdString();

    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    overwriteMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_overwriteMode
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->overwriteMode() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setOverwriteMode
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setOverwriteMode
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setOverwriteMode(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    tabStopDistance
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_tabStopDistance
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->tabStopDistance();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setTabStopDistance
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setTabStopDistance
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setTabStopDistance(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    cursorWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_cursorWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    return textEdit->cursorWidth();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setCursorWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setCursorWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {

    QPlainTextEdit * textEdit = (QPlainTextEdit*)pointer;
    textEdit->setCursorWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setExtraSelections
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setExtraSelections
(JNIEnv * env, jobject self, jlong pointer, jlongArray selectionPointers) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
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
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    extraSelections
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_extraSelections
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
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
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    moveCursor
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_moveCursor
(JNIEnv * env, jobject self, jlong pointer, jint opVal, jint modeVal) {

    QTextCursor::MoveMode mode = QTextCursor::MoveMode(modeVal);
    QTextCursor::MoveOperation op  = QTextCursor::MoveOperation(opVal);
    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->moveCursor(op,mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    canPaste
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_canPaste
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    return edit->canPaste() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    blockCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_blockCount
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    return edit->blockCount();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    inputMethodQuery
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_inputMethodQuery__JI
(JNIEnv * env, jobject self, jlong pointer, jint prop) {

    Qt::InputMethodQuery query = Qt::InputMethodQuery(prop);
    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    QVariant * data = new QVariant();
    *data = edit->inputMethodQuery(query);

    return _P(data);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    inputMethodQuery
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_inputMethodQuery__JIJ
(JNIEnv * env, jobject self, jlong pointer, jint prop, jlong dataPointer) {

    QVariant * data = (QVariant*)dataPointer;
    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    Qt::InputMethodQuery query = Qt::InputMethodQuery(prop);

    QVariant * result = new QVariant();
    *result = edit->inputMethodQuery(query,*data);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    setPlainText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_setPlainText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    const char * cStr = env->GetStringUTFChars(text,0);
    edit->setPlainText(QString(cStr));
    env->ReleaseStringUTFChars(text,cStr);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    cut
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_cut
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->cut();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    copy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_copy
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->copy();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    paste
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_paste
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->paste();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    undo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_undo
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->undo();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    redo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_redo
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->redo();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->clear();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    selectAll
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_selectAll
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->selectAll();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    insertPlainText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_insertPlainText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * str = env->GetStringUTFChars(text,0);
    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->insertPlainText(QString(str));
    env->ReleaseStringUTFChars(text,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    appendPlainText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_appendPlainText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * str = env->GetStringUTFChars(text,0);
    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->appendPlainText(QString(str));
    env->ReleaseStringUTFChars(text,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    appendHtml
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_appendHtml
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * str = env->GetStringUTFChars(text,0);
    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->appendHtml(QString(str));
    env->ReleaseStringUTFChars(text,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    centerCursor
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_centerCursor
(JNIEnv * env, jobject self, jlong pointer) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->centerCursor();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    zoomIn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_zoomIn
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->zoomIn(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SPlainTextEdit
 * Method:    zoomOut
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SPlainTextEdit_zoomOut
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QPlainTextEdit * edit = (QPlainTextEdit*)pointer;
    edit->zoomOut(val);
}
