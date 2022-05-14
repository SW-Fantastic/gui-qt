#include "gui_global.h"
#include "java/types/ItemModel.h"

#include "java/org_swdc_qt_internal_widgets_SItemModel.h"

/**
 * @param self
 *        this is java ItemModel object, invoke it's methods to
 *        load data from java or save data on it.
 *
 * @param parent
 *        this is parent pointer match the model constrcutor.
 */
ItemModel::ItemModel(jobject self,QObject * parent):QAbstractItemModel(parent) {

    JNIEnv * env = getContext();
    this->self = env->NewGlobalRef(self);
    this->modelClazz = env->FindClass("org/swdc/qt/widgets/ItemModel");

    this->methodCount = env->GetMethodID(this->modelClazz,"count","(Lorg/swdc/qt/widgets/ItemModelNode;)I");
    this->methodColumnCount = env->GetMethodID(this->modelClazz,"columnCounts", "()I");
    this->methodGetNode = env->GetMethodID(this->modelClazz,"getNode","(IILorg/swdc/qt/widgets/ItemModelNode;)Lorg/swdc/qt/widgets/ItemModelNode;");
    this->methodGetParent = env->GetMethodID(this->modelClazz,"getParent","(Lorg/swdc/qt/widgets/ItemModelNode;)Lorg/swdc/qt/widgets/ItemModelNode;");
    this->methodGetParentRowIndex = env->GetMethodID(this->modelClazz,"getParentRowIndex","(Lorg/swdc/qt/widgets/ItemModelNode;)I");
    this->methodGetDataString = env->GetMethodID(this->modelClazz,"getData","(Lorg/swdc/qt/widgets/ItemModelNode;I)J");
    this->methodGetHeaderString = env->GetMethodID(this->modelClazz,"getHeaderString","(IJI)Ljava/lang/String;");
    this->globalRef = new QList<jobject>();
}

ItemModel::~ItemModel() {

    JNIEnv * env = getContext();
    env->DeleteGlobalRef(this->self);
    this->self = nullptr;

    this->resetReference();

    delete this->globalRef;
}

void ItemModel::resetReference() {

    if(this->globalRef == nullptr) {
        return;
    }

    JNIEnv * env = getContext();
    jobject obj = nullptr;
    while (this->globalRef->size() > 0) {
        obj = this->globalRef->takeLast();
        if(!env->IsSameObject(obj,NULL)) {
            env->DeleteWeakGlobalRef(obj);
        }
    }

    /*printf("Addr : %ld \n",methodCount);
    printf("Addr : %ld \n",methodColumnCount);
    printf("Addr : %ld \n",methodGetNode);
    printf("Addr : %ld \n",methodGetParent);
    printf("Addr : %ld \n",methodGetParentRowIndex);
    printf("Addr : %ld \n",methodGetDataString);
    printf("Addr : %ld \n",methodGetHeaderString);*/
}

int ItemModel::rowCount(const QModelIndex &parent) const {

    JNIEnv * env = getContext();
    if(parent.isValid()) {
        jobject obj = (jobject)parent.internalPointer();
        return env->CallIntMethod(this->self,this->methodCount,obj);
    } else {
        return env->CallIntMethod(this->self,this->methodCount,NULL);
    }

}

int ItemModel::columnCount(const QModelIndex &parent) const {

    JNIEnv * env = getContext();
    return env->CallIntMethod(this->self,this->methodColumnCount);
}

QModelIndex ItemModel::index(int row, int column,const QModelIndex &parent) const {

    JNIEnv * env = getContext();
    if(parent.isValid()) {
        jobject obj = (jobject)parent.internalPointer();
        jobject node = env->CallObjectMethod(this->self,this->methodGetNode,row,column,obj);
        if(node) {
            if(!this->globalRef->contains(node)) {
                node = env->NewWeakGlobalRef(node);
                this->globalRef->append(node);
            }
            return createIndex(row,column,node);
        }
    } else {
        jobject node = env->CallObjectMethod(this->self,this->methodGetNode,row,column,NULL);
        if(node) {
            if(!this->globalRef->contains(node)) {
                node = env->NewWeakGlobalRef(node);
                this->globalRef->append(node);
            }
            return createIndex(row,column,node);
        }
    }
    return QModelIndex();
}


QModelIndex ItemModel::parent(const QModelIndex &child) const {

    JNIEnv * env = getContext();
    if(child.isValid()) {
        jobject obj = (jobject)child.internalPointer();
        jobject parent = env->CallObjectMethod(this->self,this->methodGetParent,obj);
        if(parent) {
            if(!this->globalRef->contains(parent)) {
                parent = env->NewWeakGlobalRef(parent);
                this->globalRef->append(parent);
            }

            int row = env->CallIntMethod(this->self,this->methodGetParentRowIndex,parent);
            return createIndex(row,0,parent);
        }
    }
    return QModelIndex();
}

QVariant ItemModel::data(const QModelIndex &index, int role) const {

    JNIEnv * env = getContext();
    if(index.isValid()) {
        jobject obj = (jobject)index.internalPointer();
        jlong variantPointer = env->CallLongMethod(this->self,this->methodGetDataString,obj,role);
        if(variantPointer > 0) {
            QVariant * variant = (QVariant*)variantPointer;

            return *variant;
        }
    }
    return QVariant();
}


QVariant ItemModel::headerData(int section, Qt::Orientation orientation,int role) const {

    JNIEnv * env = getContext();
    jstring val = (jstring)env->CallObjectMethod(this->self,this->methodGetHeaderString,section,(unsigned long)(orientation),role);
    const char * str = env->GetStringUTFChars(val,0);
    QString title(str);
    env->ReleaseStringUTFChars(val,str);

    return QVariant(title);
}



/*
 * -------------------------
 * JNI Handler Implemention
 * -------------------------
 */

/*
 * Class:     org_swdc_qt_internal_widgets_SItemModel
 * Method:    create
 * Signature: (Lorg/swdc/qt/widgets/ItemModel;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SItemModel_create
(JNIEnv * env, jobject self, jobject model) {

    model = env->NewGlobalRef(model);
    ItemModel * result = new ItemModel(model);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemModel
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemModel_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    ItemModel * model = (ItemModel*)pointer;
    delete model;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SItemModel
 * Method:    resetReferences
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SItemModel_resetReferences
(JNIEnv * env, jobject self, jlong pointer) {

    ItemModel * model = (ItemModel*)pointer;
    model->resetReference();
}
