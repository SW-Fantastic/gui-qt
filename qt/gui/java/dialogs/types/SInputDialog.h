#ifndef SINPUTDIALOG_H
#define SINPUTDIALOG_H

#include "../../jni.h"
#include <qinputdialog.h>

class SInputDialog : public QInputDialog {

    Q_OBJECT

private:
    jobject self;
public:
    SInputDialog(jobject);
    SInputDialog(jobject, QWidget*);
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // SINPUTDIALOG_H
