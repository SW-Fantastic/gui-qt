#ifndef SRADIOBUTTON_H
#define SRADIOBUTTON_H

#include "../jni.h"
#include <qradiobutton.h>

class SRadioButton: public QRadioButton {

    Q_OBJECT

private:
    jobject self;

public:
    SRadioButton(jobject);
    SRadioButton(jobject,QWidget*);
protected:
    void paintEvent(QPaintEvent* event);
};

#endif // SRADIOBUTTON_H
