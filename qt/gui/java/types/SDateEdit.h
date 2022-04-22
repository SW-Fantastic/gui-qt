#ifndef SDATEEDIT_H
#define SDATEEDIT_H

#include "gui_global.h"
#include <QDateEdit>

class SDateEdit: public QDateEdit {

    Q_OBJECT

private:

    jobject self;

public:

    SDateEdit(jobject);
    SDateEdit(jobject,QWidget *);

protected:

    void paintEvent(QPaintEvent *event);

};


#endif // SDATEEDIT_H
