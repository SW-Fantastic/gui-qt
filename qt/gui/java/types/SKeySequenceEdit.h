#ifndef SKEYSEQUENCEEDIT_H
#define SKEYSEQUENCEEDIT_H

#include "../jni.h"
#include "QKeySequenceEdit"

class SKeySequenceEdit : public QKeySequenceEdit {

private:

    jobject self;

public:

    SKeySequenceEdit(jobject self);
    SKeySequenceEdit(jobject self,QWidget*);

protected:

    void paintEvent(QPaintEvent *);

};

#endif // SKEYSEQUENCEEDIT_H
