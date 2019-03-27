#include "maps.h"
#include <QApplication>
#include <QtWebKitWidgets/QWebPage>

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("QtExamples");
//   QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    Maps w;
    w.resize(1024, 768);
    w.show();

    return a.exec();
}
