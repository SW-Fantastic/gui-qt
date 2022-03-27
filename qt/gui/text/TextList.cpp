#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextList.h"

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextList_create
(JNIEnv * env, jobject self, jlong docPointer) {

    QTextDocument * doc = (QTextDocument*)docPointer;
    QTextList * list = new QTextList(doc);
    return _P(list);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextList_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextList * list = (QTextList*)pointer;
    delete list;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextList_count
(JNIEnv * env, jobject self, jlong pointer) {

    QTextList * list = (QTextList*)pointer;
    return list->count();
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    item
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextList_item
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QTextList * list = (QTextList*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = list->item(index);
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    itemNumber
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextList_itemNumber
(JNIEnv * env, jobject self, jlong pointer, jlong blockPointer) {

    QTextBlock * block = (QTextBlock*)blockPointer;
    QTextList * list = (QTextList*)pointer;
    return list->itemNumber(*block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    itemText
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextList_itemText
(JNIEnv * env, jobject self, jlong pointer, jlong blockPointer) {

    QTextBlock * block = (QTextBlock*)blockPointer;
    QTextList * list = (QTextList*)pointer;
    QString str = list->itemText(*block);
    std::string text = str.toStdString();
    const char * cText = text.c_str();

    return asJavaString(env,cText);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    removeItem
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextList_removeItem
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QTextList * list = (QTextList*)pointer;
    list->removeItem(index);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    remove
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextList_remove
(JNIEnv * env, jobject self, jlong pointer, jlong blockPointer) {

    QTextBlock * block = (QTextBlock*)blockPointer;
    QTextList * list = (QTextList*)pointer;
    list->remove(*block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    add
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextList_add
(JNIEnv * env, jobject self, jlong pointer, jlong blockPointer) {

    QTextList * list = (QTextList*)pointer;
    QTextBlock * block = (QTextBlock*)blockPointer;
    list->add(*block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    setFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextList_setFormat
(JNIEnv * env, jobject self, jlong pointer, jlong textBlockFormatPointer){

    QTextList * list = (QTextList*)pointer;
    QTextListFormat * format = (QTextListFormat *)textBlockFormatPointer;
    list->setFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextList
 * Method:    format
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextList_format
(JNIEnv * env, jobject self, jlong pointer) {

    QTextList * list = (QTextList*)pointer;
    QTextListFormat * format = new QTextListFormat();
    *format = list->format();
    return _P(format);
}
