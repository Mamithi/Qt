#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QApplication>
#include <QtWidgets>

class MainWindow : public QMainWindow {
public:
    MainWindow();
public slots:
signals:
private:
    QMdiArea *centralWidget;
    QLineEdit *line;
    QLineEdit *line1;
    QMdiSubWindow *sub;
    QMdiSubWindow *sub1;
};

#endif // MAINWINDOW_H
