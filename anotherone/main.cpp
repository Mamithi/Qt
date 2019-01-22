#include <QApplication>
#include <QtWidgets>

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    QWidget window;

    QPushButton btn1(&window);
    QPushButton btn2(&window);

    btn1.setText("Ok");
    btn2.setText("Cancel");

    btn1.move(50, 70);
    btn2.move(100, 60);

    QProgressBar progress(&window);
    progress.setValue(45);

    window.show();

    return app.exec();
}
