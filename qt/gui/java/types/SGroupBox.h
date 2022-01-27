#ifndef SGROUPBOX_H
#define SGROUPBOX_H

#include "../jni.h"
#include <qgroupbox.h>

class SGroupBox: public QGroupBox {

private:

    jobject self;

public:

    SGroupBox(jobject);
    SGroupBox(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent *);

};

#endif // SGROUPBOX_H
