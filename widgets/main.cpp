#include <QApplication>
#include <QtWidgets>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QWidget window;

//    window.setFixedSize(300, 150);
    QPushButton btn("Cancel", &window);

    btn.setGeometry(60, 70, 180, 70);

    window.show();

    app.exec();
}
