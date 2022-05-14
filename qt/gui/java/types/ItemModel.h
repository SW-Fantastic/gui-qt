#ifndef ITEMMODEL_H
#define ITEMMODEL_H

#include <QAbstractItemModel>
#include <QList>
#include "../jni.h"

class ItemModel : public QAbstractItemModel {

    Q_OBJECT

public:

    explicit ItemModel(jobject self,QObject *parent = nullptr);
    ~ItemModel();

    QModelIndex index(int row, int column,const QModelIndex &parent) const override;
    QModelIndex parent(const QModelIndex &child) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    //bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;

    QVariant headerData(int section, Qt::Orientation orientation,
                                int role = Qt::DisplayRole) const override;
    /*bool setHeaderData(int section, Qt::Orientation orientation, const QVariant &value,
                               int role = Qt::EditRole) override;*/
    void resetReference();

private:

    jobject self;
    jclass modelClazz;
    jmethodID methodCount;
    jmethodID methodColumnCount;
    jmethodID methodGetNode;
    jmethodID methodGetParent;
    jmethodID methodGetParentRowIndex;
    jmethodID methodGetDataString;
    jmethodID methodGetHeaderString;

    QList<jobject> * globalRef;

};

#endif // ITEMMODEL_H
