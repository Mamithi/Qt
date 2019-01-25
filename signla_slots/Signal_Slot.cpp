#include "Signal_Slot.h"

Signal_Slot::Signal_Slot():QWidget() {

     btn = new QPushButton("Reveal",this);
     btn->move(60, 70);
     label = new QLabel("Here is your text", this);
     label->setVisible(false);
     QObject::connect(btn, SIGNAL(clicked()), this, SLOT(reveal()) );
//     connect(this, SIGNAL(invlabel()), this, showFullScreen());
}


void Signal_Slot::reveal() {
    label->setVisible(true);
    if(label->isVisible()) {
        emit invlabel();
    }
}
