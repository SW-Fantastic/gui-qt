#ifndef STIMEEDIT_H
#define STIMEEDIT_H

#include "../jni.h"
#include <QTimeEdit>

class STimeEdit : public QTimeEdit {

    Q_OBJECT

private:

    jobject self;

public:

    STimeEdit(jobject);
    STimeEdit(jobject,QWidget*);

protected:

    void paintEvent(QPaintEvent *event);

};

#endif // STIMEEDIT_H
