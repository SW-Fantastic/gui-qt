#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SPainter.h"


const char* PainterClassType = "org/swdc/qt/internal/graphics/SPainter";

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_createWidget
(JNIEnv * env, jobject self, jlong device) {

    QWidget * qWidget = (QWidget*)device;
    QPainter * painter = new QPainter();
    painter->begin(qWidget);
    return (jlong)(intptr_t)painter;
}



/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    createPixmap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_createPixmap
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QPainter * painter = new QPainter();
    painter->begin(pixmap);
    return (jlong)(intptr_t)painter;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setCompositionMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setCompositionMode
(JNIEnv * env, jobject self, jlong pointer, jint mode) {

    QPainter::CompositionMode cMode = QPainter::CompositionMode(mode);
    QPainter * painter = (QPainter*)pointer;
    painter->setCompositionMode(cMode);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    compositionMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPainter_compositionMode
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    return int(painter->compositionMode());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    isActive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainter_isActive
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    return painter->isActive() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setColorPen
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setColorPen
(JNIEnv * env, jobject self, jlong pointer, jlong color) {

    QPainter * painter = (QPainter*)pointer;
    QRgb rgb = QRgb(color);
    QColor qColor(rgb);
    painter->setPen(qColor);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setPen
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setPen__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong penPointer) {

    QPen * pen = (QPen*)penPointer;
    QPainter * painter = (QPainter*)pointer;
    painter->setPen(*pen);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setPen
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setPen__JI
(JNIEnv * env, jobject self, jlong pointer, jint penStyle) {

    Qt::PenStyle style = Qt::PenStyle(penStyle);
    QPainter * painter = (QPainter*)pointer;
    painter->setPen(style);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    pen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_pen
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    QPen pen = painter->pen();
    QPen * target = new QPen(pen);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBrush__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QPainter * painter = (QPainter*)pointer;
    painter->setBrush(*brush);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBrush
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBrush__JI
(JNIEnv * env, jobject self, jlong pointer, jint style) {

    Qt::BrushStyle brushStyle = Qt::BrushStyle(style);
    QPainter * painter = (QPainter*)pointer;
    painter->setBrush(brushStyle);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    brush
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_brush
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    QBrush brush = painter->brush();

    QBrush* target = new QBrush(brush);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBackgroundMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBackgroundMode
(JNIEnv * env, jobject self, jlong pointer, jint mode) {

    Qt::BGMode bgMode = Qt::BGMode(mode);
    QPainter * painter = (QPainter*)pointer;
    painter->setBackgroundMode(bgMode);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    backgroundMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPainter_backgroundMode
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    return int(painter->backgroundMode());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setBackground
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setBackground
(JNIEnv * env, jobject self, jlong pointer, jlong brushBackground) {

    QBrush * brush = (QBrush*)brushBackground;
    QPainter * painter = (QPainter*)pointer;
    painter->setBackground(*brush);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    background
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_background
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    QBrush brush = painter->background();

    QBrush* target = new QBrush(brush);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    opacity
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPainter_opacity
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    return painter->opacity();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setOpacity
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setOpacity
(JNIEnv * env, jobject self, jlong pointer, jdouble opacity) {

    QPainter * painter = (QPainter*)pointer;
    painter->setOpacity(opacity);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setTransform
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setTransform
(JNIEnv * env, jobject self, jlong pointer, jlong transformPointer, jboolean combine) {

    QPainter * painter = (QPainter*)pointer;
    QTransform * transform = (QTransform*)transformPointer;

    painter->setTransform(*transform,combine);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    transform
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_transform
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    QTransform trans = painter->transform();
    QTransform * target = new QTransform(trans);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    resetTransform
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_resetTransform
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    painter->resetTransform();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setWorldTransform
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setWorldTransform
(JNIEnv * env, jobject self, jlong pointer, jlong transformationPointer, jboolean combine) {

    QPainter * painter = (QPainter*)pointer;
    QTransform * transformation = (QTransform*)transformationPointer;
    painter->setWorldTransform(*transformation,combine);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    worldTransform
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_worldTransform
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    QTransform transform = painter->worldTransform();

    QTransform * target = new QTransform(transform);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    combinedTransform
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_combinedTransform
(JNIEnv * env, jobject self, jlong pointer){

    QPainter * painter = (QPainter*)pointer;
    QTransform transform = painter->combinedTransform();
    QTransform * target = new QTransform(transform);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setWorldMatrixEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setWorldMatrixEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPainter * painter = (QPainter*)pointer;
    painter->setWorldMatrixEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    worldMatrixEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainter_worldMatrixEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    return painter->worldMatrixEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    scale
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_scale
(JNIEnv * env, jobject self, jlong pointer, jdouble sx, jdouble sy) {

    QPainter * painter = (QPainter*)pointer;
    painter->scale(sx,sy);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    shear
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_shear
(JNIEnv * env, jobject self, jlong pointer, jdouble sh, jdouble sv) {

    QPainter * painter = (QPainter*)pointer;
    painter->shear(sh,sv);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    rotate
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_rotate
(JNIEnv * env, jobject self, jlong pointer, jdouble a) {

    QPainter * painter = (QPainter*)pointer;
    painter->rotate(a);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    translate
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_translate
(JNIEnv * env, jobject self, jlong pointer, jdouble dx, jdouble dy) {

    QPainter * painter = (QPainter*)pointer;
    painter->translate(dx,dy);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    window
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_window
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    QRect window = painter->window();
    QRect * target = new QRect(window);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setWindow
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setWindow
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height) {

    QPainter * painter = (QPainter*)pointer;
    painter->setWindow(x,y,width,height);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    viewport
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_viewport
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;
    QRect rect = painter->viewport();

    QRect * target = new QRect(rect);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setViewport
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setViewport
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height) {

    QPainter * painter = (QPainter*)pointer;
    painter->setViewport(x,y,width,height);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setViewTransformEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setViewTransformEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QPainter * painter = (QPainter*)pointer;
    painter->setViewTransformEnabled(val);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    viewTransformEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainter_viewTransformEnabled
(JNIEnv * env, jobject self, jlong pointer){

    QPainter * painter = (QPainter*)pointer;
    return painter->viewTransformEnabled() ? JNI_TRUE : JNI_FALSE;
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    strokePath
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_strokePath
(JNIEnv * env, jobject self, jlong pointer, jlong painterPathPointer, jlong penPointer) {

    QPen * pen = (QPen*)penPointer;
    QPainterPath * path = (QPainterPath*)painterPathPointer;
    QPainter * painter = (QPainter*)pointer;

    painter->strokePath(*path,*pen);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillPath
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillPath
(JNIEnv * env, jobject self, jlong pointer, jlong pathPointer, jlong brushPointer) {

    QPainter * painter = (QPainter*)pointer;
    QBrush * brush = (QBrush*)brushPointer;
    QPainterPath * path = (QPainterPath*)pathPointer;


    painter->fillPath(*path,*brush);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPath
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPath
(JNIEnv * env, jobject self, jlong pointer, jlong pathPointer) {

    QPainter * painter = (QPainter*)pointer;
    QPainterPath * path = (QPainterPath*)pathPointer;

    painter->drawPath(*path);

}



/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPoint
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPoint__JII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

    QPainter * painter = (QPainter*)pointer;
    painter->drawPoint(x,y);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPoint
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPoint__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QPainter * painter = (QPainter*)pointer;
    painter->drawPoint(*point);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPoints
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPoints
(JNIEnv * env, jobject self, jlong pointer, jlongArray pointsPointer) {

    int arrLen = env->GetArrayLength(pointsPointer);
    jlong * arr = env->GetLongArrayElements(pointsPointer,JNI_FALSE);

    QVector<QPoint> points;
    for(int idx = 0; idx < arrLen; idx ++) {
        QPoint * point = (QPoint*)arr[idx];
        points.append(*point);
    }

    QPainter * painter = (QPainter*)pointer;
    painter->drawPoints(points);

}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawLine
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawLine__JIIII
(JNIEnv * env, jobject self, jlong pointer, jint x1, jint y1, jint x2, jint y2) {

    QPainter * painter = (QPainter*)pointer;
    painter->drawLine(x1,y2,x2,y2);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawLine
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawLine__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong line) {

    QLine * qLine = (QLine*)line;
    QPainter * painter = (QPainter*)pointer;
    painter->drawLine(*qLine);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawLine
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawLine__JJJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointAPointer, jlong pointBPointer) {

    QPoint * pointA = (QPoint*)pointAPointer;
    QPoint * pointB = (QPoint*)pointBPointer;
    QPainter * painter = (QPainter*)pointer;

    painter->drawLine(*pointA,*pointB);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRect
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRect__JIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height) {

    QPainter * painter = (QPainter*)pointer;
    painter->drawRect(x,y,width,height);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRect
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRect__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer) {

    QRect * rect = (QRect*)rectPointer;
    QPainter * painter = (QPainter*)pointer;
    painter->drawRect(*rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealRect
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer) {

    QPainter * painter = (QPainter*)pointer;
    QRectF * rect = (QRectF*)rectPointer;

    painter->drawRect(*rect);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawEllipse
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawEllipse__JIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height) {

    QPainter * painter = (QPainter*)pointer;
    painter->drawEllipse(x,y,width,height);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawEllipse
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawEllipse__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer) {


    QPainter * painter = (QPainter*)pointer;
    QRect * rect = (QRect*)rectPointer;

    painter->drawRect(*rect);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealEllipse
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealEllipse
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer) {


    QPainter * painter = (QPainter*)pointer;
    QRectF * rect = (QRectF*)rectPointer;

    painter->drawEllipse(*rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawArc
 * Signature: (JIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawArc__JIIIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    painter->drawArc(x,y,width,height,a,alen);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawArc
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawArc__JJII
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    QRect * rect = (QRect*)rectPointer;
    painter->drawArc(*rect,a,alen);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealArc
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealArc
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    QRectF * rect = (QRectF*)rectPointer;
    painter->drawArc(*rect,a,alen);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPie
 * Signature: (JIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPie__JIIIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    painter->drawPie(x,y,width,height,a,alen);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPie
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPie__JJII
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    QRect * rect = (QRect*)rectPointer;
    painter->drawPie(*rect,a,alen);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealPie
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealPie
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    QRectF * rect = (QRectF*)rectPointer;
    painter->drawPie(*rect,a,alen);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawChord
 * Signature: (JIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawChord__JIIIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    painter->drawChord(x,y,width,height,a,alen);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawChord
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawChord__JJII
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    QRect * rect = (QRect*)rectPointer;
    painter->drawPie(*rect,a,alen);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealChord
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealChord
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint a, jint alen) {

    QPainter * painter = (QPainter*)pointer;
    QRectF * rect = (QRectF*)rectPointer;
    painter->drawChord(*rect,a,alen);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRoundedRect
 * Signature: (JIIIIDDI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRoundedRect__JIIIIDDI
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jdouble radX, jdouble radY, jint sizeMode) {

    Qt::SizeMode mode = Qt::SizeMode(sizeMode);
    QPainter * painter = (QPainter*)pointer;
    painter->drawRoundedRect(x,y,width,height,radX,radY,mode);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRoundedRect
 * Signature: (JJDDI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRoundedRect__JJDDI
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jdouble radX, jdouble radY, jint sizeModeVal) {

    QPainter * painter = (QPainter*)pointer;
    QRect * rect = (QRect*)rectPointer;
    Qt::SizeMode mode = Qt::SizeMode(sizeModeVal);
    painter->drawRoundedRect(*rect,radX,radY,mode);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealRoundedRect
 * Signature: (JJDDI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealRoundedRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jdouble radX, jdouble radY, jint sizeModeVal) {

    QPainter * painter = (QPainter*)pointer;
    QRectF * rect = (QRectF*)rectPointer;
    Qt::SizeMode mode = Qt::SizeMode(sizeModeVal);
    painter->drawRoundedRect(*rect,radX,radY,mode);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawTiledPixmap
 * Signature: (JIIIIJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawTiledPixmap
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jlong imagePointer, jint sx, jint sy) {

    QPixmap * image = (QPixmap*)imagePointer;
    QPainter * painter = (QPainter*)pointer;
    painter->drawTiledPixmap(x,y,width,height,*image,sx,sy);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIIIJIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIIIJIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jlong pixmapPointer, jint sx, jint sy, jint sw, jint sh) {

    QPixmap * pixmap = (QPixmap*)pixmapPointer;
    QPainter * painter = (QPainter*)pointer;

    painter->drawPixmap(x,y,width,height,*pixmap,sx,sy,sw,sh);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIJIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIJIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jlong pixmapPointer, jint sx, jint sy, jint sw, jint sh) {

    QPainter * painter = (QPainter*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(x,y,*pixmap,sx,sy,sw,sh);

}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmapPoint
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmapPoint
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer, jlong pixmapPointer, jlong sourceRectPointer) {

    QRect * rect = (QRect*)sourceRectPointer;
    QPoint * point = (QPoint*)pointPointer;
    QPainter * painter = (QPainter*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(*point,*pixmap,*rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmapRealPoint
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmapRealPoint__JJJJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer, jlong pixmapPointer, jlong sourceRectPointer) {

    QRectF * rect = (QRectF*)sourceRectPointer;
    QPointF * point = (QPointF*)pointPointer;
    QPainter * painter = (QPainter*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(*point,*pixmap,*rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JJJJ
(JNIEnv * env, jobject self, jlong pointer, jlong targetRectPointer, jlong pixmapPointer, jlong sourceRectPointer) {

    QRect * rect = (QRect*)sourceRectPointer;
    QRect * sourceRect = (QRect*)sourceRectPointer;
    QPainter * painter = (QPainter*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(*sourceRect,*pixmap,*rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealPixmap
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealPixmap
(JNIEnv * env, jobject self, jlong pointer, jlong targetPointer, jlong pixmapPointer, jlong sourceRectPointer) {

    QRectF * rect = (QRectF*)sourceRectPointer;
    QRectF * sourceRect = (QRectF*)sourceRectPointer;
    QPainter * painter = (QPainter*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(*sourceRect,*pixmap,*rect);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmapRealPoint
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmapRealPoint__JJJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer, jlong pixmapPointer) {

    QPainter * painter = (QPainter*)pointer;
    QPointF * point = (QPointF*)pointPointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(*point,*pixmap);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JJJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer, jlong pixmapPointer) {

    QPainter * painter = (QPainter*)pointer;
    QPoint * point = (QPoint*)pointPointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(*point,*pixmap);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmapRect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmapRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jlong pixmapPointer){

    QPainter * painter = (QPainter*)pointer;
    QRect * point = (QRect*)rectPointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(*point,*pixmap);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIJ
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jlong pixmapPointer) {

    QPainter * painter = (QPainter*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(x,y,*pixmap);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawPixmap
 * Signature: (JIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawPixmap__JIIIIJ
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jlong pixmapPointer) {

    QPainter * painter = (QPainter*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;

    painter->drawPixmap(x,y,width,height,*pixmap);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawImage
 * Signature: (JIIJIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawImage
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jlong imagePointer, jint sx, jint sy, jint sw, jint sv, jlong conversation) {

    Qt::ImageConversionFlag conv = Qt::ImageConversionFlag(conversation);
    QImage * image = (QImage*)imagePointer;
    QPainter * painter = (QPainter*)pointer;
    painter->drawImage(x,y,*image,sx,sy,sw,sv,conv);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawText
 * Signature: (JIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawText__JIILjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jstring text) {

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(cText);
    QPainter * painter = (QPainter*)pointer;
    painter->drawText(x,y,str);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawText
 * Signature: (JIIIIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawText__JIIIIILjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jint flag, jstring text) {

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(cText);
    QPainter * painter = (QPainter*)pointer;
    painter->drawText(x,y,width,height,flag,str);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawTextRealRect
 * Signature: (JJILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawTextRealRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint flags, jstring text) {

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QRectF * rect = (QRectF*)rectPointer;
    QString str(cText);
    QPainter * painter = (QPainter*)pointer;
    painter->drawText(*rect,flags,str);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawTextRect
 * Signature: (JJILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawTextRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint flags, jstring text) {

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QRect * rect = (QRect*)rectPointer;
    QString str(cText);
    QPainter * painter = (QPainter*)pointer;
    painter->drawText(*rect,flags,str);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawText
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawText__JJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer, jstring text) {

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QPoint * point = (QPoint*)pointPointer;
    QString str(cText);
    QPainter * painter = (QPainter*)pointer;
    painter->drawText(*point,str);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    drawRealText
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_drawRealText
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer, jstring text){

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QPointF * point = (QPointF*)pointPointer;
    QString str(cText);
    QPainter * painter = (QPainter*)pointer;
    painter->drawText(*point,str);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    boundingRect
 * Signature: (JIIIIILjava/lang/String;)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainter_boundingRect
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jint flag, jstring text) {

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(cText);
    QPainter * painter = (QPainter*)pointer;
    QRect rect = painter->boundingRect(x,y,width,height,flag,str);
    QRect * target = new QRect(rect);
    return (jlong)(intptr_t)target;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRectBrush
 * Signature: (JIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRectBrush
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QPainter * painter = (QPainter*)pointer;
    painter->fillRect(x,y,width,height,*brush);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRect__JJJ
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QPainter * painter = (QPainter*)pointer;
    QRect * rect = (QRect*)rectPointer;

    painter->fillRect(*rect,*brush);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRealRect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRealRect__JJJ
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QPainter * painter = (QPainter*)pointer;
    QRectF * rect = (QRectF*)rectPointer;

    painter->fillRect(*rect,*brush);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRect
 * Signature: (JIIIIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRect__JIIIIJ
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jlong color) {

    QRgb qColor = QRgb(color);
    QColor qBrushColor(qColor);

    QPainter * painter = (QPainter*)pointer;
    painter->fillRect(x,y,width,height,qBrushColor);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillColorRect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillColorRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jlong rgbaVal) {

    QRgb rgb = QRgb(rgbaVal);
    QColor color = QColor(rgb);
    QRect * rect = (QRect*)rectPointer;
    QPainter * painter = (QPainter*)pointer;

    painter->fillRect(*rect,color);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillColorRealRect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillColorRealRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jlong rgbaVal) {

    QRgb rgb = QRgb(rgbaVal);
    QColor color = QColor(rgb);
    QRectF * rect = (QRectF*)rectPointer;
    QPainter * painter = (QPainter*)pointer;

    painter->fillRect(*rect,color);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRect
 * Signature: (JIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRect__JIIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height, jint brushStyle) {

    Qt::BrushStyle style = Qt::BrushStyle(brushStyle);
    QPainter * painter = (QPainter*)pointer;
    painter->fillRect(x,y,width,height,style);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRect
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRect__JJI
  (JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint brushStyleVal) {

    Qt::BrushStyle style = Qt::BrushStyle(brushStyleVal);
    QRect * rect = (QRect*)rectPointer;
    QPainter * painter = (QPainter*)pointer;

    painter->fillRect(*rect,style);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRealRect
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRealRect__JJI
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer, jint brushStyleVal) {

    Qt::BrushStyle style = Qt::BrushStyle(brushStyleVal);
    QRectF * rect = (QRectF*)rectPointer;
    QPainter * painter = (QPainter*)pointer;

    painter->fillRect(*rect,style);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRectWithPresetGradient
 * Signature: (JIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRectWithPresetGradient
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint w, jint h, jint presetVal) {

    QGradient::Preset preset = QGradient::Preset(presetVal);
    QPainter * painter = (QPainter*)pointer;
    painter->fillRect(x,y,w,h,preset);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRectWithRectPresetGradient
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRectWithRectPresetGradient
(JNIEnv * env, jobject self, jlong pointer, jlong rect, jint presetVal) {

    QGradient::Preset preset = QGradient::Preset(presetVal);
    QRect * qRect = (QRect*)rect;
    QPainter * painter = (QPainter*)pointer;
    painter->fillRect(*qRect,preset);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    fillRealRectWithRectPresetGradient
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_fillRealRectWithRectPresetGradient
(JNIEnv * env, jobject self, jlong pointer, jlong rect, jint presetVal) {

    QGradient::Preset preset = QGradient::Preset(presetVal);
    QRectF * qRect = (QRectF*)rect;
    QPainter * painter = (QPainter*)pointer;
    painter->fillRect(*qRect,preset);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    eraseRect
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_eraseRect__JIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint width, jint height) {

    QPainter * painter = (QPainter*)pointer;
    painter->eraseRect(x,y,width,height);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    eraseRect
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_eraseRect__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer){

    QRect * rect = (QRect*)rectPointer;
    QPainter * painter = (QPainter*)pointer;
    painter->eraseRect(*rect);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    eraseRealRect
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_eraseRealRect
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer) {

    QRectF * rect = (QRectF*)rectPointer;
    QPainter * painter = (QPainter*)pointer;
    painter->eraseRect(*rect);
}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setRenderHint
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setRenderHint
(JNIEnv * env, jobject self, jlong pointer, jlong renderHintVal, jboolean on) {

    QPainter::RenderHint hint = QPainter::RenderHint(renderHintVal);
    QPainter * painter = (QPainter*)pointer;
    painter->setRenderHint(hint,on);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    setRenderHints
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_setRenderHints
(JNIEnv * env, jobject self, jlong pointer, jlong renderHints, jboolean on) {

    QPainter * painter = (QPainter*)pointer;
    QPainter::RenderHints hints = QPainter::RenderHints(renderHints);
    painter->setRenderHints(hints);

}


/*
 * Class:     org_swdc_qt_internal_graphics_SPainter
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainter_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QPainter * painter = (QPainter*)pointer;

    delete painter;
    cleanJavaPointer(env,self);
}
