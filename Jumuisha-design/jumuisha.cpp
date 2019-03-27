#include "jumuisha.h"
#include "ui_jumuisha.h"

#include <iostream>

using namespace  std;

Jumuisha::Jumuisha(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Jumuisha)
{
    ui->setupUi(this);
}

Jumuisha::~Jumuisha()
{
    delete ui;
}

