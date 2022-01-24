#ifndef SSTACKWIDGET_H
#define SSTACKWIDGET_H

#include "../jni.h"
#include <qstackedwidget.h>

class SStackWidget: public QStackedWidget {

    Q_OBJECT

private:

    jobject self;

public:
    SStackWidget(jobject self);
    SStackWidget(jobject self,QWidget * parent);

protected:

    void paintEvent(QPaintEvent* event);

};

#endif // SSTACKWIDGET_H
