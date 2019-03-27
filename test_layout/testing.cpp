#include "testing.h"
#include "ui_testing.h"

Testing::Testing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Testing)
{
    ui->setupUi(this);
}

Testing::~Testing()
{
    delete ui;
}
