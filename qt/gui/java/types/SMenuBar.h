#ifndef SMENUBAR_H
#define SMENUBAR_H

#include "../jni.h"
#include <qmenubar.h>

class SMenuBar :public QMenuBar {

    Q_OBJECT

private:

    jobject self;

public:

    SMenuBar(jobject self);
    SMenuBar(jobject self,QWidget * widget);

protected:

    void paintEvent(QPaintEvent *);

};

#endif // SMENUBAR_H
