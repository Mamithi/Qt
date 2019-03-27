#ifndef MAPTEST_H
#define MAPTEST_H

#include <QMainWindow>

namespace Ui {
class Maptest;
}

class Maptest : public QMainWindow
{
    Q_OBJECT

public:
    explicit Maptest(QWidget *parent = nullptr);
    ~Maptest();

private:
    Ui::Maptest *ui;
};

#endif // MAPTEST_H
