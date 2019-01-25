#include "dialog.h"

Dialog::Dialog() : QWidget() {
    btn = new QPushButton("information", this);
    btn->setGeometry(10, 30, 100, 50);
    connect(btn, SIGNAL(clicked()), this, SLOT(message()));

    btn1 = new QPushButton("Get user data", this);
    btn1->setGeometry(120, 30, 100, 50);
    connect(btn1, SIGNAL(clicked()), this, SLOT(displayText()));

    btn2 = new QPushButton("Change Font", this);
    btn2->setGeometry(230, 30, 100, 50);
    fontLabel = new QLabel("Here is your text", this);
    connect(btn2, SIGNAL(clicked()), this, SLOT(fontSelection()));

    btn3 = new QPushButton("Change color", this);
    btn3->setGeometry(10, 90, 100, 50);
    connect(btn3, SIGNAL(clicked()), this, SLOT(changeColor()));

    btn4 = new QPushButton("Select file", this);
    btn4->setGeometry(120, 90, 100, 50);
    connect(btn4, SIGNAL(clicked()), this, SLOT(fileSelection()));

}

void Dialog::message() {
    int res = QMessageBox::question(this, "Question", "Do you want to save this file?", QMessageBox::Yes|QMessageBox::No);

    if(res == QMessageBox::Yes) {
        QMessageBox::information(this, "Information", "Your file has been saved");
    }
}

void Dialog::displayText() {
    bool ok;
    QString password = QInputDialog::getText(this, "Password", "Enter Password", QLineEdit::Password, QString(), &ok);

    if(ok && !password.isEmpty()) {
        QMessageBox::information(this, "Password Validated", "Your password has been saved");
    } else {
        QMessageBox::warning(this, "Error", "You have to set a password");
    }
}

void Dialog::fontSelection() {
    bool ok;

    QFont font = QFontDialog::getFont(&ok, fontLabel->font(), this, "Select your font");

    if(ok) {
        fontLabel->setFont(font);
    }
}

void Dialog::changeColor() {
    QColor color = QColorDialog::getColor(Qt::black, this);
    QPalette palette;

    palette.setColor(QPalette::WindowText, color);
    fontLabel->setPalette(palette);

}

void Dialog::fileSelection() {
//   QString folder = QFileDialog::getOpenFileName(this, QString(), QString(), "Images(*.png*.gif*.jpg*.jpeg)");
    QString folder = QFileDialog::getSaveFileName(this, QString(), QString(), "Images(*.jpg*png*.gif)");


}
