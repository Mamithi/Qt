#ifndef MAPDEMO_H
#define MAPDEMO_H

#include <QMainWindow>

namespace Ui {
class MapDemo;
}

class MapDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapDemo(QWidget *parent = nullptr);
    ~MapDemo();

private:
    Ui::MapDemo *ui;
};

#endif // MAPDEMO_H
