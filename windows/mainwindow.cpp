#include "mainwindow.h"

MainWindow::MainWindow() : QMainWindow () {
    centralWidget = new QMdiArea;
    line =new QLineEdit(centralWidget);
    line1 = new QLineEdit(centralWidget);

    QFormLayout *form = new QFormLayout;
    form->addRow("line 1", line);
    form->addRow("line 2", line1);

    centralWidget->setLayout(form);
    sub = new QMdiSubWindow;
    sub1 = new QMdiSubWindow;
    centralWidget->addSubWindow(sub);
    centralWidget->addSubWindow(sub1);
    setCentralWidget(centralWidget);
}
