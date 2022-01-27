#ifndef SSCROLLBAR_H
#define SSCROLLBAR_H

#include "../jni.h"
#include <qscrollbar.h>

class SScrollBar: public QScrollBar {

    Q_OBJECT

private:

    jobject self;

public:

    SScrollBar(jobject);
    SScrollBar(jobject,QWidget*);

    void setSelf(jobject self);

protected:

     void paintEvent(QPaintEvent* event);

};

#endif // SSCROLLBAR_H
