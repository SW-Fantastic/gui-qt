#ifndef SLISTVIEW_H
#define SLISTVIEW_H

#include "../jni.h"
#include "QListView"

class SListView : public QListView {

    Q_OBJECT

private:

    jobject self;

public:

    SListView(jobject);
    SListView(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent *e);

};

#endif // SLISTVIEW_H
