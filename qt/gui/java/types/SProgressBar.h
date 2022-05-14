#ifndef SPROGRESSBAR_H
#define SPROGRESSBAR_H

#include "../jni.h"
#include "QProgressBar"

class SProgressBar : public QProgressBar {

    Q_OBJECT

private:
    jobject self;

public:

    SProgressBar(jobject);
    SProgressBar(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent *);

};

#endif // SPROGRESSBAR_H
