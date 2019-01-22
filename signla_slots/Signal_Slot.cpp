#include "Signal_Slot.h"

Signal_Slot::Signal_Slot():QWidget() {

     setFixedSize(300, 150);
     btn = new QPushButton(this);
     btn->setText("Cancel");
     connect(btn, SIGNAL(clicked()), qApp, SLOT(quit()));
}
