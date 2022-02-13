#ifndef SCOMBOBOX_H
#define SCOMBOBOX_H

#include "../jni.h"
#include <qcombobox.h>

class SComboBox : public QComboBox {

    Q_OBJECT

private:

    jobject self;

public:

    SComboBox(jobject);
    SComboBox(jobject,QWidget*);

private:

    void paintEvent(QPaintEvent *);

};

#endif // SCOMBOBOX_H
