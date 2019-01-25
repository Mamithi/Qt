#include <QApplication>
#include <QtWidgets>

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    QWidget window;

//    QPushButton btn("First Button", &window);
//    QPushButton btn1("Second Button", &window);
//    QPushButton btn2("Third Button", &window);
//    btn.move(120, 150);

    QVBoxLayout verticalLayout;
    QHBoxLayout horizontalLayout;
    QGridLayout gridLayout;

    QFormLayout form;
    QHBoxLayout hlayout;

    QPushButton okBtn("Ok", &window);
    QPushButton cancelBtn("Cancel", &window);
    hlayout.addWidget(&okBtn);
    hlayout.addWidget(&cancelBtn);

    QVBoxLayout vlayout;
    vlayout.addLayout(&form);
    vlayout.addLayout(&hlayout);


//    verticalLayout.addWidget(&btn);
//    verticalLayout.addWidget(&btn1);
//    verticalLayout.addWidget(&btn2);

//    horizontalLayout.addWidget(&btn);
//    horizontalLayout.addWidget(&btn1);
//    horizontalLayout.addWidget(&btn2);

//    gridLayout.addWidget(&btn, 0, 0, 2, 1, Qt::AlignCenter);
//    gridLayout.addWidget(&btn1, 1, 2, 1, 1);
//    gridLayout.addWidget(&btn2, 3, 2, 2, 2);

    QLineEdit firstname;
    QLineEdit lastname;
    QLineEdit age;

    form.addRow("First Name", &firstname);
    form.addRow("Last Name", &lastname);
    form.addRow("Age", &age);





//    window.setLayout(&verticalLayout);
//    window.setLayout(&horizontalLayout);
    window.setLayout(&vlayout);


    window.show();

    return app.exec();
}
