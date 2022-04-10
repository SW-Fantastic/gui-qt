#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextDocumentLayoutPaintContext.h"


/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_create
(JNIEnv *, jobject) {

    QAbstractTextDocumentLayout::PaintContext * ctx = new QAbstractTextDocumentLayout::PaintContext();
    return _P(ctx);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    delete ctx;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    cursorPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_cursorPosition__J
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    return ctx->cursorPosition;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    cursorPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_cursorPosition__JI
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    ctx->cursorPosition = pos;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    palette
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_palette__J
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    QPalette * palette = new QPalette();
    *palette = ctx->palette;
    return _P(palette);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    palette
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_palette__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong palettePointer) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    QPalette * palette = (QPalette *) palettePointer;
    ctx->palette = *palette;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    clip
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_clip__J
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    QRectF * rect = new QRectF();
    *rect = ctx->clip;
    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    clip
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_clip__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clipPointer) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    QRectF * rect = (QRectF*)clipPointer;
    ctx->clip = *rect;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    selections
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_selections__J
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;
    QVector<QAbstractTextDocumentLayout::Selection> select = ctx->selections;

    jlong * arr = new jlong[select.size()];
    for(int idx = 0; idx < select.size(); idx ++) {
        QAbstractTextDocumentLayout::Selection * sel = new QAbstractTextDocumentLayout::Selection();
        *sel = select.at(idx);
        arr[idx] = _P(sel);
    }

    jlongArray array = env->NewLongArray(select.size());
    env->SetLongArrayRegion(array,0,select.size(),arr);
    delete[] arr;

    return array;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentLayoutPaintContext
 * Method:    selections
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutPaintContext_selections__J_3J
(JNIEnv * env, jobject self, jlong pointer, jlongArray selectionPointers) {

    jlong * arr = env->GetLongArrayElements(selectionPointers,0);
    int len = env->GetArrayLength(selectionPointers);

    QVector<QAbstractTextDocumentLayout::Selection> vect;
    QAbstractTextDocumentLayout::PaintContext * ctx = (QAbstractTextDocumentLayout::PaintContext*)pointer;

    for(int idx = 0; idx < len; idx ++) {
        QAbstractTextDocumentLayout::Selection * sel = (QAbstractTextDocumentLayout::Selection*)arr[idx];
        if(sel) {
            vect.append(*sel);
        }
    }

    ctx->selections = vect;
    env->ReleaseLongArrayElements(selectionPointers,arr,0);
}
