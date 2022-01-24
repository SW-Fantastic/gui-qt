#ifndef SPUSHBUTTON_H
#define SPUSHBUTTON_H

#include "../jni.h"
#include <qpushbutton.h>

class SPushButton :public QPushButton {

    Q_OBJECT

private:
    jobject self;

public:

    SPushButton(jobject self);
    SPushButton(jobject self,QWidget* parent);
    void setSelf(jobject);

    static void initializeButtonEvents(QPushButton * pushButton,jobject self);

protected:
    void paintEvent(QPaintEvent* event);
};


#endif // SPUSHBUTTON_H
