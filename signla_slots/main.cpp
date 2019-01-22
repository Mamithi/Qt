#include <QApplication>
#include "Signal_Slot.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    Signal_Slot ss;
    ss.show();

    return app.exec();
}
