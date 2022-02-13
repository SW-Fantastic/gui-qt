#ifndef SFONTCOMBOBOX_H
#define SFONTCOMBOBOX_H

#include "../jni.h"
#include <qfontcombobox.h>

class SFontComboBox : public QFontComboBox {

private:

    jobject self;

public:

    SFontComboBox(jobject self);
    SFontComboBox(jobject self, QWidget* parent);

protected:

    void paintEvent(QPaintEvent *);

};

#endif // SFONTCOMBOBOX_H
