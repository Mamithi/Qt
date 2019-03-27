#include "jumuisha.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Jumuisha w;
    w.show();

    return a.exec();
}
