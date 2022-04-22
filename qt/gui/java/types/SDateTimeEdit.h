#ifndef SDATETIMEEDIT_H
#define SDATETIMEEDIT_H

#include "../jni.h"
#include "QDateTimeEdit"

class SDateTimeEdit : public QDateTimeEdit {

    Q_OBJECT

private:

    jobject self;

public:

    SDateTimeEdit(jobject);
    SDateTimeEdit(jobject,QWidget *);

protected:

    void paintEvent(QPaintEvent *event);

};

#endif // SDATETIMEEDIT_H
