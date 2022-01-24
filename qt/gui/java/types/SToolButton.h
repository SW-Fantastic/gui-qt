#ifndef STOOLBUTTON_H
#define STOOLBUTTON_H

#include "../jni.h"
#include <qtoolbutton.h>

class SToolButton : public QToolButton {

    Q_OBJECT

private:
    jobject self;
public:

    SToolButton(jobject self);
    SToolButton(jobject self,QWidget * parent);

protected:
    void paintEvent(QPaintEvent *event);

};


#endif // STOOLBUTTON_H
