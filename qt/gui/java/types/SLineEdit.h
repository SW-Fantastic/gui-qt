#ifndef SLINEEDIT_H
#define SLINEEDIT_H

#include "../jni.h"
#include <qlineedit.h>

class SLineEdit : public QLineEdit {

    Q_OBJECT

private :

    jobject self;

public:

    SLineEdit(jobject self);
    SLineEdit(jobject self,QWidget * parent);

protected:

    void paintEvent(QPaintEvent *);

};

#endif // SLINEEDIT_H
