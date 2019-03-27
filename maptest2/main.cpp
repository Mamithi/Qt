#include <QGuiApplication>
#include <QtQml/QQmlApplicationEngine>

int main(int argc, char **argv) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main2.qml")));

    return app.exec();
}
