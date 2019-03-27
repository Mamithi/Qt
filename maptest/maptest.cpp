#include "maptest.h"
#include "ui_maptest.h"

Maptest::Maptest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Maptest)
{
    ui->setupUi(this);
}

Maptest::~Maptest()
{
    delete ui;
}
