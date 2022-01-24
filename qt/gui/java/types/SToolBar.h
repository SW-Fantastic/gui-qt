#ifndef STOOLBAR_H
#define STOOLBAR_H

#include"../jni.h"
#include<qtoolbar.h>

class SToolBar : public QToolBar {

    Q_OBJECT

private:
    jobject self;

public:
    SToolBar(jobject self);
    SToolBar(jobject self,QWidget * parent);

protected:
    void paintEvent(QPaintEvent *event);
};


#endif // STOOLBAR_H
