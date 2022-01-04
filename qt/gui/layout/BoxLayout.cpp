#include"gui_global.h"
#include"java/layout/org_swdc_qt_internal_layout_SBoxLayout.h"


// -----------------------Directions Property--------------------

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    doSetDirection
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_doSetDirection
(JNIEnv * env, jobject self, jlong pointer, jint val) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    QBoxLayout::Direction direction = QBoxLayout::Direction(val);
    boxLayout->setDirection(direction);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    doGetDirection
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_doGetDirection
(JNIEnv * env, jobject self, jlong pointer) {
  QBoxLayout* boxLayout = (QBoxLayout*)pointer;
  return boxLayout->direction();
}

// -------------------------Add Properties ------------------------

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    addSpacing
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_addSpacing
(JNIEnv * env, jobject self, jlong pointer, jint specVal) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    boxLayout->addSpacing(specVal);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    addStretch
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_addStretch
(JNIEnv * env, jobject self, jlong pointer, jint stretch) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    boxLayout->addStretch(stretch);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    addSpacerItem
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_addSpacerItem
(JNIEnv * env, jobject self, jlong pointer, jlong spacerItemPointer) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    QSpacerItem* item = (QSpacerItem*)spacerItemPointer;
    boxLayout->addSpacerItem(item);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    addLayout
 * Signature: (Lorg/swdc/qt/layout/SLayout;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_addLayout
(JNIEnv * env, jobject self,jlong pointer, jlong layoutPointer) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    QLayout* layout = (QLayout*)layoutPointer;
    boxLayout->addLayout(layout);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    addStrut
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_addStrut
(JNIEnv * env, jobject self,jlong pointer, jint val){
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    boxLayout->addStrut(val);
}

// ---------------------------- Insert Properties --------------------------

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    insertSpacing
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_insertSpacing
(JNIEnv * env, jobject self, jlong pointer, jint index, jint spacing) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    boxLayout->insertSpacing(index,spacing);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    insertStretch
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_insertStretch
(JNIEnv * env, jobject self, jlong pointer, jint index, jint strech) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    boxLayout->insertStretch(index,strech);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    insertSpacerItem
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_insertSpacerItem
(JNIEnv * env, jobject self, jlong pointer, jint index, jlong spacerItemPointer) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    QSpacerItem* item = (QSpacerItem*)spacerItemPointer;
    boxLayout->insertSpacerItem(index,item);
}


/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    insertLayout
 * Signature: (ILorg/swdc/qt/layout/SLayout;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_insertLayout
(JNIEnv * env, jobject self,jlong pointer, jint index, jlong layoutPointer ) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    QLayout* layout = (QLayout*)layoutPointer;
    boxLayout->insertLayout(index,layout);
}

/*
 * Class:     org_swdc_qt_layout_SBoxLayout
 * Method:    insertItem
 * Signature: (ILorg/swdc/qt/layout/SLayoutItem;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SBoxLayout_insertItem
(JNIEnv * env, jobject self,jlong pointer, jint index, jlong layoutItemPointer) {
    QBoxLayout* boxLayout = (QBoxLayout*)pointer;
    QLayoutItem* item = (QLayoutItem*)layoutItemPointer;
    boxLayout->addItem(item);
}




