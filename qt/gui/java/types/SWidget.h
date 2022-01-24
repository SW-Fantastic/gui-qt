#ifndef SWIDGET_H
#define SWIDGET_H

#include "../jni.h"
#include <qwidget.h>

class SWidget : public QWidget {

    Q_OBJECT

private:
    jobject self;

public:

    SWidget(jobject self);
    SWidget(jobject self,QWidget * parent);

    static void initializeWidgetEvents(QWidget * widget,jobject self);

protected:
    void paintEvent(QPaintEvent *event);
};




#endif // SWIDGET_H
