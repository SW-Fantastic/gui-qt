#ifndef STEXTBROWSER_H
#define STEXTBROWSER_H

#include "QTextBrowser"
#include "../jni.h"

class STextBrowser: public QTextBrowser {

    Q_OBJECT

private:

    jobject self;

public:

    STextBrowser(jobject);
    STextBrowser(jobject, QWidget*);

protected:

    void paintEvent(QPaintEvent *e);

};

#endif // STEXTBROWSER_H
