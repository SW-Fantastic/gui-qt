#ifndef SMDIAREA_H
#define SMDIAREA_H

#include "../jni.h"
#include "qmdiarea.h"

class SMdiArea : public QMdiArea {

    Q_OBJECT

private:

    jobject self;

public:

    SMdiArea(jobject);
    SMdiArea(jobject,QWidget*);

protected:

     void paintEvent(QPaintEvent *);
};

#endif // SMDIAREA_H
