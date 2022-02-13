#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SComboBox.h"


#include "java/org_swdc_qt_internal_widgets_SComboBox.h"

SComboBox::SComboBox(jobject self):QComboBox() {
    this->self = self;
}

SComboBox::SComboBox(jobject self, QWidget * parent):QComboBox(parent) {
    this->self = self;
}

void SComboBox::paintEvent(QPaintEvent * event) {
    QComboBox::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}



/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SComboBox * box = nullptr;
    if(pointer > 0) {
        QWidget * parent = (QWidget*)pointer;
        box = new SComboBox(self,parent);
    } else {
        box = new SComboBox(self);
    }

    SWidget::initializeWidgetEvents(box,self);

    return (jlong)(intptr_t)box;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    maxVisibleItems
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_maxVisibleItems
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->maxVisibleItems();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setMaxVisibleItems
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setMaxVisibleItems
(JNIEnv * env, jobject self, jlong pointer, jint maxVisable) {

    QComboBox * box = (QComboBox*)pointer;
    box->setMaxVisibleItems(maxVisable);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_count
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->count();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setMaxCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setMaxCount
(JNIEnv * env, jobject self, jlong pointer, jint maxCount) {

    QComboBox * box = (QComboBox*)pointer;
    box->setMaxCount(maxCount);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    maxCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_maxCount
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->maxCount();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    duplicatesEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_duplicatesEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->duplicatesEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setDuplicatesEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setDuplicatesEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QComboBox * box = (QComboBox*)pointer;
    box->setDuplicatesEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setFrame
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setFrame
(JNIEnv * env, jobject self, jlong pointer, jboolean frame) {

    QComboBox * box = (QComboBox*)pointer;
    box->setFrame(frame);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    hasFrame
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_hasFrame
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->hasFrame() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    findText
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_findText
(JNIEnv * env, jobject self, jlong pointer, jstring text, jint matchFlags) {

    Qt::MatchFlags flag = Qt::MatchFlags(matchFlags);
    QComboBox * box = (QComboBox*)pointer;

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    int result = box->findText(QString(cText),flag);
    env->ReleaseStringUTFChars(text,cText);
    return result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    insertPolicy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_insertPolicy
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QComboBox::InsertPolicy p = box->insertPolicy();
    return int(p);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setInsertPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setInsertPolicy
(JNIEnv * env, jobject self, jlong pointer, jint policy) {

    QComboBox::InsertPolicy insPolicy = QComboBox::InsertPolicy(policy);
    QComboBox * box = (QComboBox*)pointer;
    box->setInsertPolicy(insPolicy);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    sizeAdjustPolicy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_sizeAdjustPolicy
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QComboBox::SizeAdjustPolicy policy = box->sizeAdjustPolicy();
    return int(policy);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setSizeAdjustPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setSizeAdjustPolicy
(JNIEnv * env, jobject self, jlong pointer, jint policy) {

    QComboBox * box = (QComboBox*)pointer;
    QComboBox::SizeAdjustPolicy adjPolicy = QComboBox::SizeAdjustPolicy(policy);
    box->setSizeAdjustPolicy(adjPolicy);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    minimumContentsLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_minimumContentsLength
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->minimumContentsLength();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setMinimumContentsLength
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setMinimumContentsLength
(JNIEnv * env, jobject self, jlong pointer, jint leng) {

    QComboBox * box = (QComboBox*)pointer;
    box->setMinimumContentsLength(leng);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    iconSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_iconSize
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QSize* size = new QSize(box->iconSize());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setIconSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setIconSize
(JNIEnv * env, jobject self, jlong pointer, jlong size) {

    QSize * sizeVal = (QSize*)size;
    QComboBox * box = (QComboBox*)pointer;
    box->setIconSize(*sizeVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setPlaceholderText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setPlaceholderText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QComboBox * box = (QComboBox*)pointer;
    const char* placeHolderText = env->GetStringUTFChars(text,JNI_FALSE);
    box->setPlaceholderText(QString(placeHolderText));
    env->ReleaseStringUTFChars(text,placeHolderText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    placeholderText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_placeholderText
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    std::string str = box->placeholderText().toStdString();
    const char* cText = str.c_str();
    return asJavaString(env,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    isEditable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_isEditable
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->isEditable() ? JNI_TRUE :JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setEditable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setEditable
(JNIEnv * env, jobject self, jlong pointer, jboolean editable) {

    QComboBox * box = (QComboBox*)pointer;
    box->setEditable(editable);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setLineEdit
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setLineEdit
(JNIEnv * env, jobject self, jlong pointer, jlong lineEdit) {

    QLineEdit * edit = (QLineEdit*)lineEdit;
    QComboBox * box = (QComboBox*)pointer;
    box->setLineEdit(edit);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    lineEdit
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_lineEdit
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QLineEdit * edit = box->lineEdit();
    return (jlong)(intptr_t)edit;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    model
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_model
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QAbstractItemModel * model = box->model();
    return (jlong)(intptr_t)model;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setModel
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setModel
(JNIEnv * env, jobject self, jlong pointer, jlong absModel) {

    QComboBox * box = (QComboBox*)pointer;
    QAbstractItemModel * model = (QAbstractItemModel*)absModel;
    box->setModel(model);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    rootModelIndex
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_rootModelIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QModelIndex rootIdx = box->rootModelIndex();
    QModelIndex * idx = new QModelIndex();
    *idx = rootIdx;
    return (jlong)(intptr_t)idx;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setRootModelIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setRootModelIndex
(JNIEnv * env, jobject self, jlong pointer, jlong rootIndex) {

    QComboBox * box = (QComboBox*)pointer;
    QModelIndex * index = (QModelIndex*)rootIndex;
    box->setRootModelIndex(*index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    modelColumn
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_modelColumn
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->modelColumn();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setModelColumn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setModelColumn
(JNIEnv * env, jobject self, jlong pointer, jint col) {

    QComboBox * box = (QComboBox*)pointer;
    box->setModelColumn(col);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    currentIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_currentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    return box->currentIndex();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    currentText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_currentText
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    std::string str = box->currentText().toStdString();
    const char* text = str.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    currentData
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_currentData
(JNIEnv * env, jobject self, jlong pointer, jint role) {

    QComboBox * box = (QComboBox*)pointer;
    Qt::ItemDataRole roleVal = Qt::ItemDataRole(role);
    QVariant data = box->currentData(roleVal);
    QVariant * target = new QVariant();
    *target = data;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    itemText
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_itemText
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QComboBox * box = (QComboBox*)pointer;
    std::string text = box->itemText(index).toStdString();
    const char* cText = text.c_str();
    return asJavaString(env,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    itemIcon
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_itemIcon
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QComboBox * box = (QComboBox*)pointer;
    QIcon icon = box->itemIcon(index);

    QIcon * target = new QIcon();
    *target = icon;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    itemData
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_itemData
(JNIEnv * env, jobject self, jlong pointer, jint index, jint role) {

    Qt::ItemDataRole roleVal = Qt::ItemDataRole(role);
    QComboBox * box = (QComboBox*)pointer;
    QVariant data = box->itemData(index,roleVal);

    QVariant * target = new QVariant();
    *target = data;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    addItem
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_addItem__JLjava_lang_String_2J
(JNIEnv * env, jobject self, jlong pointer, jstring text, jlong dataPointer) {

    QComboBox * box = (QComboBox*)pointer;
    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    if(dataPointer > 0) {
        QVariant * data = (QVariant*)dataPointer;
        box->addItem(QString(cText),*data);
    } else {
        box->addItem(QString(cText));
    }

    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    addItem
 * Signature: (JJLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_addItem__JJLjava_lang_String_2J
(JNIEnv * env, jobject self, jlong pointer, jlong iconPointer, jstring text, jlong dataPointer) {

    if(iconPointer <= 0) {
        return;
    }

    QIcon * icon = (QIcon*)iconPointer;
    QComboBox * box = (QComboBox*)pointer;
    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    if(dataPointer > 0) {
        QVariant * data = (QVariant*)dataPointer;
        box->addItem(*icon,QString(cText),*data);
    } else {
        box->addItem(*icon,QString(cText));
    }

    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    addItems
 * Signature: (J[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_addItems
  (JNIEnv * env, jobject self, jlong pointer, jobjectArray items) {

    QComboBox * box = (QComboBox*)pointer;
    int len = env->GetArrayLength(items);

    QStringList itemsList;

    for(int idx = 0; idx < len; idx ++) {
        jstring str = (jstring)env->GetObjectArrayElement(items,idx);
        const char* cText = env->GetStringUTFChars(str,0);
        itemsList.push_back(QString(cText));
        env->ReleaseStringUTFChars(str,cText);
    }

    box->addItems(itemsList);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    insertItem
 * Signature: (JILjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_insertItem__JILjava_lang_String_2J
(JNIEnv * env, jobject self, jlong pointer, jint index, jstring text, jlong dataPointer) {

    QComboBox * box = (QComboBox*)pointer;

    const char* cText = env->GetStringUTFChars(text,0);
    QString qText(cText);
    if(dataPointer > 0) {
        QVariant * variant = (QVariant*)dataPointer;
        box->insertItem(index,qText,*variant);
    } else {
        box->insertItem(index,qText);
    }
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    insertItem
 * Signature: (JIJLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_insertItem__JIJLjava_lang_String_2J
(JNIEnv * env, jobject self, jlong pointer, jint index, jlong iconPointer, jstring text, jlong dataPointer) {

    if(iconPointer <= 0) {
        return;
    }

    QIcon* icon = (QIcon*)iconPointer;
    QComboBox * box = (QComboBox*)pointer;

    const char* cText = env->GetStringUTFChars(text,0);
    if(dataPointer > 0) {
        QVariant* variant = (QVariant*)dataPointer;
        box->insertItem(index,*icon,QString(cText),*variant);
    } else {
         box->insertItem(index,*icon,QString(cText));
    }

    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    insertItems
 * Signature: (JI[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_insertItems
(JNIEnv * env, jobject self, jlong pointer, jint index, jobjectArray items) {

    QComboBox * box = (QComboBox*)pointer;
    int len = env->GetArrayLength(items);

    QStringList itemsList;

    for(int idx = 0; idx < len; idx ++) {
        jstring str = (jstring)env->GetObjectArrayElement(items,idx);
        const char* cText = env->GetStringUTFChars(str,0);
        itemsList.push_back(QString(cText));
        env->ReleaseStringUTFChars(str,cText);
    }

    box->insertItems(index,itemsList);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    insertSeparator
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_insertSeparator
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QComboBox * box = (QComboBox*)pointer;
    box->insertSeparator(index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    removeItem
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_removeItem
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QComboBox * box = (QComboBox*)pointer;
    box->removeItem(index);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setItemText
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setItemText
(JNIEnv * env, jobject self, jlong pointer, jint index, jstring text) {

    const char* cText = env->GetStringUTFChars(text,0);
    QComboBox * box = (QComboBox*)pointer;
    box->setItemText(index,QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setItemIcon
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setItemIcon
(JNIEnv * env, jobject self, jlong pointer, jint index, jlong iconPointer) {

    QIcon * icon = (QIcon*)iconPointer;
    QComboBox * box = (QComboBox*)pointer;
    box->setItemIcon(index,*icon);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    setItemData
 * Signature: (JIJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_setItemData
(JNIEnv * env, jobject self, jlong pointer, jint index, jlong dataPointer, jint roleVal) {

    QComboBox * box = (QComboBox*)pointer;
    Qt::ItemDataRole role = Qt::ItemDataRole(roleVal);
    if(dataPointer > 0) {
        QVariant * variant = (QVariant*)dataPointer;
        box->setItemData(index,*variant,role);
    } else {
        box->setItemData(index,role);
    }

}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QSize * size = new QSize(box->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    QSize * size = new QSize(box->minimumSizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    showPopup
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_showPopup
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    box->showPopup();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SComboBox
 * Method:    hidePopup
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SComboBox_hidePopup
(JNIEnv * env, jobject self, jlong pointer) {

    QComboBox * box = (QComboBox*)pointer;
    box->hidePopup();
}
