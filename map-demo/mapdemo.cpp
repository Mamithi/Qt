#include "mapdemo.h"
#include "ui_mapdemo.h"

MapDemo::MapDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapDemo)
{
    ui->setupUi(this);
}

MapDemo::~MapDemo()
{
    delete ui;
}
