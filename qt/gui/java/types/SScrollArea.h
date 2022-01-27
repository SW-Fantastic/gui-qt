#ifndef SSCROLLAREA_H
#define SSCROLLAREA_H

#include <qscrollarea.h>
#include "../jni.h"

class SScrollArea : public QScrollArea {

private:

    jobject self;

public:

    SScrollArea(jobject);
    SScrollArea(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent* event);

};

#endif // SSCROLLAREA_H
