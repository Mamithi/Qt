#ifndef DIALOG_H
#define DIALOG_H

#include <QApplication>
#include <QtWidgets>

class Dialog : public QWidget {
    Q_OBJECT
public:
    Dialog();

public slots:
    void message();
    void displayText();
    void fontSelection();
    void changeColor();
    void fileSelection();

private:
    QPushButton *btn;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QLabel *fontLabel;


};

#endif // DIALOG_H
