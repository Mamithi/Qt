#include "testing.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Testing w;
    w.show();

    return a.exec();
}
