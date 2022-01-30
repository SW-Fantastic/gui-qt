#ifndef STOOLBOX_H
#define STOOLBOX_H

#include "../jni.h"
#include <qtoolbox.h>

class SToolBox : public QToolBox {

    Q_OBJECT

private:

    jobject self;

public:

    SToolBox(jobject);
    SToolBox(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent *);

};

#endif // STOOLBOX_H
