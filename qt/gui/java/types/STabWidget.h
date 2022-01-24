#ifndef STABWIDGET_H
#define STABWIDGET_H

#include "../jni.h"
#include <qtabwidget.h>


class STabWidget : public QTabWidget {

    Q_OBJECT

private:

    jobject self;

public:

    STabWidget(jobject self);
    STabWidget(jobject self, QWidget * parent);

protected:

    void paintEvent(QPaintEvent *);

};


#endif // STABWIDGET_H
