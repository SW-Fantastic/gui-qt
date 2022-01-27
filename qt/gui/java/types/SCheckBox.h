#ifndef SCHECKBOX_H
#define SCHECKBOX_H

#include "../jni.h"
#include <qcheckbox.h>

class SCheckBox: public QCheckBox {

    Q_OBJECT

private:

    jobject self;
public:

    SCheckBox(jobject);
    SCheckBox(jobject,QWidget*);

protected:
    void paintEvent(QPaintEvent *);
};

#endif // SCHECKBOX_H
