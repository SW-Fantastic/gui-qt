#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SLineEdit.h"

#include "java/org_swdc_qt_internal_widgets_SWidget.h"

SLineEdit::SLineEdit(jobject self):QLineEdit() {
    this->self = self;
}

SLineEdit::SLineEdit(jobject self,QWidget * parent):QLineEdit(parent) {
    this->self = self;
}

void SLineEdit::paintEvent(QPaintEvent * event) {

    QLineEdit::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);

}

/*
 * Class:     org_swdc_qt_widgets_STextField
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_create
(JNIEnv * env, jobject self, jlong parent) {

    self = env->NewGlobalRef(self);

    QLineEdit* edit = nullptr;
    if(parent > 0) {
        edit = new SLineEdit(self,(QWidget*)parent);
    } else {
        edit = new SLineEdit(self);
    }

    initializeWidgetEvents(edit,self);
    return (jlong)(intptr_t)edit;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_text
(JNIEnv * jenv, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    std::string text = lineEdit->text().toStdString();

    return asJavaString(jenv,text.c_str());

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    displayText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_displayText
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    std::string text = lineEdit->displayText().toStdString();

    return asJavaString(env,text.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    placeholderText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_placeholderText
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    std::string text = lineEdit->placeholderText().toStdString();

    return asJavaString(env,text.c_str());

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setPlaceholderText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setPlaceholderText
(JNIEnv * env, jobject self, jlong pointer, jstring str) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    const char* text = env->GetStringUTFChars(str,JNI_FALSE);
    QString val(text);
    lineEdit->setPlaceholderText(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    maxLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_maxLength
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->maxLength();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setMaxLength
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setMaxLength
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setMaxLength(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setFrame
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setFrame
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setFrame(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    hasFrame
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_hasFrame
(JNIEnv * env, jobject self, jlong pointer){

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->hasFrame() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setClearButtonEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setClearButtonEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setClearButtonEnabled(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    isClearButtonEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_isClearButtonEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->isClearButtonEnabled() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    isReadOnly
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_isReadOnly
(JNIEnv * env, jobject self, jlong pointer){

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->isReadOnly() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setReadOnly
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setReadOnly
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setReadOnly(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    cursorPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_cursorPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->cursorPosition();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setCursorPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setCursorPosition
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setCursorPosition(pos);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    cursorPositionAt
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_cursorPositionAt
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    QPoint point(x,y);
    return lineEdit->cursorPositionAt(point);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setAlignment
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong val) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    Qt::Alignment alignment = Qt::Alignment((unsigned int)val);
    lineEdit->setAlignment(Qt::Alignment(alignment));

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    alignment
 * Signature: (J)I
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_alignment
(JNIEnv * env, jobject self, jlong pointer) {


    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return jlong(lineEdit->alignment());

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    cursorForward
 * Signature: (JZI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_cursorForward
(JNIEnv * env, jobject self, jlong pointer, jboolean mark, jint step) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->cursorForward(mark,step);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    cursorBackward
 * Signature: (JZI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_cursorBackward
(JNIEnv * env, jobject self, jlong pointer, jboolean mark, jint step) {


    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->cursorBackward(mark,step);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    cursorWordForward
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_cursorWordForward
(JNIEnv * env, jobject self, jlong pointer, jboolean mark) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->cursorWordForward(mark);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    cursorWordBackward
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_cursorWordBackward
(JNIEnv * env, jobject self, jlong pointer, jboolean mark) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->cursorWordBackward(mark);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    backspace
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_backspace
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->backspace();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    del
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_del
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->del();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    home
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_home
(JNIEnv * env, jobject self, jlong pointer, jboolean mark) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->home(mark);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    end
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_end
(JNIEnv * env, jobject self, jlong pointer, jboolean mark) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->end(mark);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    isModified
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_isModified
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->isModified();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setModified
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setModified
(JNIEnv * env, jobject self, jlong pointer, jboolean modified) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setModified(modified);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setSelection
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setSelection
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setSelection(x,y);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    hasSelectedText
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_hasSelectedText
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->hasSelectedText();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    selectedText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_selectedText
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    std::string text = lineEdit->selectedText().toStdString();

    return asJavaString(env,text.c_str());

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    selectionStart
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_selectionStart
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->selectionStart();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    selectionEnd
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_selectionEnd
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->selectionEnd();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    selectionLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_selectionLength
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->selectionLength();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    isUndoAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_isUndoAvailable
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->isUndoAvailable() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    isRedoAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_isRedoAvailable
  (JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->isRedoAvailable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setDragEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setDragEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setDragEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    dragEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_dragEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    return lineEdit->dragEnabled() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setTextMargins
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setTextMargins
(JNIEnv * env, jobject self, jlong pointer, jint left, jint top, jint right, jint bottom) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->setTextMargins(left,top,right,bottom);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    textMargins
 * Signature: (J)Lorg/swdc/qt/beans/Margins;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_textMargins
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    QMargins * margins = new QMargins(lineEdit->textMargins());
    return (jlong)(intptr_t)margins;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_setText
(JNIEnv * env, jobject self, jlong pointer, jstring val) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    const char* text = env->GetStringUTFChars(val,JNI_FALSE);
    QString str(text);
    lineEdit->setText(str);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->clear();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    selectAll
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_selectAll
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->selectAll();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    undo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_undo
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->undo();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    redo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_redo
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->redo();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    cut
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_cut
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->cut();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    copy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_copy
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->copy();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SLineEdit
 * Method:    paste
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLineEdit_paste
(JNIEnv * env, jobject self, jlong pointer) {

    QLineEdit* lineEdit = (QLineEdit*)pointer;
    lineEdit->paste();

}
