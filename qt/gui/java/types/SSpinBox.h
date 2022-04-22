#ifndef SSPINBOX_H
#define SSPINBOX_H

#include "../jni.h"
#include "QSpinBox"

class SSpinBox : public QSpinBox {

    Q_OBJECT

private:

    jobject self;

public:

    SSpinBox(jobject self);
    SSpinBox(jobject self, QWidget* parent);

protected:

     void paintEvent(QPaintEvent* event);
};

#endif // SSPINBOX_H
