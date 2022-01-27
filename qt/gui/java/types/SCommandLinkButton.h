#ifndef SCOMMANDLINKBUTTON_H
#define SCOMMANDLINKBUTTON_H

#include "../jni.h"
#include <qcommandlinkbutton.h>

class SCommandLinkButton : public QCommandLinkButton {

    Q_OBJECT

private:

    jobject self;

public:

    SCommandLinkButton(jobject);
    SCommandLinkButton(jobject,QWidget*);

protected:
     void paintEvent(QPaintEvent *) override;
};

#endif // SCOMMANDLINKBUTTON_H
