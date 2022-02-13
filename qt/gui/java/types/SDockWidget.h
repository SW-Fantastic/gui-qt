#ifndef SDOCKWIDGET_H
#define SDOCKWIDGET_H

#include "../jni.h"
#include <qdockwidget.h>

class SDockWidget : public QDockWidget {

    Q_OBJECT

private:

    jobject self;

public:

    SDockWidget(jobject);
    SDockWidget(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent* event);

};

#endif // SDOCKWIDGET_H
