#include "mapdemo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MapDemo w;
    w.show();

    return a.exec();
}
