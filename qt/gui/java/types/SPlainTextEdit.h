#ifndef SPLAINTEXTEDIT_H
#define SPLAINTEXTEDIT_H

#include "QPlainTextEdit"
#include "../jni.h"

class SPlainTextEdit : public QPlainTextEdit {

private:

    jobject self;

public:

    SPlainTextEdit(jobject self);
    SPlainTextEdit(jobject self,QWidget * parent, QString text);

protected:

    void paintEvent(QPaintEvent *e);

};

#endif // SPLAINTEXTEDIT_H
