#include "jumuisha.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Jumuisha window;
    window.show();

    return a.exec();
}
