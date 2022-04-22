#ifndef SDOUBLESPINBOX_H
#define SDOUBLESPINBOX_H

#include "../jni.h"
#include "QDoubleSpinBox"

class SDoubleSpinBox : public QDoubleSpinBox {

    Q_OBJECT

private:

    jobject self;

public:

    SDoubleSpinBox(jobject self);
    SDoubleSpinBox(jobject self,QWidget * parent);

protected:

    void paintEvent(QPaintEvent *);

};


#endif // SDOUBLESPINBOX_H
