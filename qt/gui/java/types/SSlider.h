#ifndef SSLIDER_H
#define SSLIDER_H

#include <QSlider>
#include "../jni.h"

class SSlider: public QSlider {

    Q_OBJECT
private:
    jobject self;

public:
    SSlider(jobject);
    SSlider(jobject,QWidget *);

protected:

    void paintEvent(QPaintEvent *ev);

};

#endif // SSLIDER_H
