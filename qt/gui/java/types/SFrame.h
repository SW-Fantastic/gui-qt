#ifndef SFRAME_H
#define SFRAME_H

#include "../jni.h"
#include <qframe.h>

class SFrame : public QFrame {

private:

    jobject self;

public:

    SFrame(jobject);
    SFrame(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent *);
};

#endif // SFRAME_H
