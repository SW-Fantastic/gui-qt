#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_SAbstractTextLayout.h"


/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    draw
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_draw
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jlong contextPointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)contextPointer;
    QPainter * painter = (QPainter*)painterPointer;

    layout->draw(painter,*ctx);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    anchorAt
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_anchorAt
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QPointF * pos = (QPointF*)posPointer;
    std::string str = layout->anchorAt(*pos).toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    imageAt
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_imageAt
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QPointF * pos = (QPointF*)posPointer;
    std::string str = layout->imageAt(*pos).toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    formatAt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_formatAt
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QPointF * pos = (QPointF*)posPointer;
    QTextFormat * format = new QTextFormat();
    *format = layout->formatAt(*pos);
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    blockWithMarkerAt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_blockWithMarkerAt
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QPointF * pos = (QPointF*)posPointer;
    QTextBlock * block = new QTextBlock();
    *block = layout->blockWithMarkerAt(*pos);
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    pageCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_pageCount
(JNIEnv * env, jobject self, jlong pointer){

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    return layout->pageCount();
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    documentSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_documentSize
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QSizeF * sizeF = new QSizeF();
    *sizeF = layout->documentSize();
    return _P(sizeF);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    frameBoundingRect
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_frameBoundingRect
(JNIEnv * env, jobject self, jlong pointer, jlong textFramePointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QTextFrame * frame = (QTextFrame*)textFramePointer;
    QRectF * rectF = new QRectF();
    *rectF = layout->frameBoundingRect(frame);
    return _P(rectF);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    blockBoundingRect
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_blockBoundingRect
(JNIEnv * env, jobject self, jlong pointer, jlong blockPointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    QTextBlock * block = (QTextBlock*)blockPointer;
    QRectF * rect = new QRectF();
    *rect = layout->blockBoundingRect(*block);
    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    document
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_document
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    return _P(layout->document());
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    registerHandler
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_registerHandler
(JNIEnv * env, jobject self, jlong pointer, jint val, jlong widgetPointer) {

    if(widgetPointer <= 0) {
        return;
    }

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    layout->registerHandler(val,(QObject*)widgetPointer);
}

/*
 * Class:     org_swdc_qt_internal_text_SAbstractTextLayout
 * Method:    unregisterHandler
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SAbstractTextLayout_unregisterHandler
(JNIEnv * env, jobject self, jlong pointer, jint val, jlong widgetPointer) {

    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)pointer;
    if(widgetPointer > 0) {
        layout->unregisterHandler(val,(QObject*)widgetPointer);
    } else {
        layout->unregisterHandler(val);
    }

}
