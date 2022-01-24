#ifndef SMESSAGEDIALOG_H
#define SMESSAGEDIALOG_H

#include "../../jni.h"
#include <qmessagebox.h>

class SMessageDialog : public QMessageBox {
    Q_OBJECT
private:
    jobject self;
public:
    SMessageDialog(jobject self);
    SMessageDialog(jobject self,QWidget*);

protected:
    void paintEvent(QPaintEvent *event);
};


#endif // SMESSAGEDIALOG_H
