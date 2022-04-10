#ifndef STEXTEDIT_H
#define STEXTEDIT_H

#include "../jni.h"
#include <qtextedit.h>

class STextEdit : public QTextEdit {

    Q_OBJECT

private:

    jobject self;

public:

    STextEdit(jobject self);
    STextEdit(jobject self, QWidget * parent);

protected:

    void paintEvent(QPaintEvent *event);

};

#endif // STEXTEDIT_H
