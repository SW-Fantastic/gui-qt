#ifndef SLABEL_H
#define SLABEL_H

#include "../jni.h"
#include "QLabel"

class SLabel :public QLabel {

    Q_OBJECT

private:

    jobject self;

public:

    SLabel(jobject);
    SLabel(jobject,QWidget*);

private:

    void paintEvent(QPaintEvent *);

};


#endif // SLABEL_H
