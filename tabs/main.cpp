#include <QApplication>
#include <QtWidgets>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QWidget window;

    QTabWidget *tab =new QTabWidget(&window);
    tab->setGeometry(30, 20, 240, 160);
    QWidget *page1 =  new QWidget();
    QWidget *page2 = new QWidget();
    QLabel *page3 = new QLabel();

    // Page 1
    QLineEdit *lineEdit = new QLineEdit("Name");
    QPushButton *btn = new QPushButton("Click Here");
    QPushButton *btn1 = new QPushButton("Maybe Here");
    QVBoxLayout *vlayout = new QVBoxLayout();
    vlayout->addWidget(lineEdit);
    vlayout->addWidget(btn);
    vlayout->addWidget(btn1);
    page1->setLayout(vlayout);

    // Page 2
    QProgressBar *progress = new QProgressBar();
    progress->setValue(53);
    QSlider *slider = new QSlider(Qt::Horizontal);
    QPushButton *btn2 = new QPushButton("Validate");
    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addWidget(progress);
    vlayout1->addWidget(slider);
    vlayout1->addWidget(btn2);
    page2->setLayout(vlayout1);

    page3->setPixmap(QPixmap("icon.png"));
    page3->setAlignment(Qt::AlignCenter);

    tab->addTab(page1, "Options");
    tab->addTab(page2, "Continue");
    tab->addTab(page3, "Image");




    window.show();
    return app.exec();
}
