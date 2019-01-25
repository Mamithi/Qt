#include <QApplication>
#include <QtWidgets>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QWidget window;



    // Dialog widgets
//    QDialog dialog;
//    dialog.setFixedSize(300, 150);
//    dialog.setModal(false);
//    QPushButton btn("Welcome", &window);
//    btn.move(100, 50);

//    QObject::connect(&btn, SIGNAL(clicked()), &dialog, SLOT(show()));
    // End of dialog widgets


    // Buttons widgets
//    QCheckBox study("Study", &window);
//    QCheckBox sleep("Sleep", &window);
//    QCheckBox play("Play", &window);

//    QVBoxLayout vlayout;

//    vlayout.addWidget(&study);
//    vlayout.addWidget(&sleep);
//    vlayout.addWidget(&play);

//    QGroupBox group("What do you prefer to do ?", &window);

//    group.setLayout(&vlayout);


    // End of button widgets

    // Q Radio button
//    QRadioButton sleepBtn("Sleep", &window);
//    QRadioButton studyBtn("Study", &window);
//    QVBoxLayout  vlayout1;
//    vlayout1.addWidget(&sleepBtn);
//    vlayout1.addWidget(&studyBtn);

//    QGroupBox group1("Options", &window);

//    group1.setLayout(&vlayout1);

//    QVBoxLayout v1;
//    v1.addWidget(&group);
//    v1.addWidget(&group1);

//    window.setLayout(&v1);
  // End of Q Radio button

    // Combo box


    // End of combo box
    QComboBox list(&window);
    list.addItem("London");
    list.addItem("Nairobi");





    window.show();

    return app.exec();
}
