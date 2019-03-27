#ifndef TESTING_H
#define TESTING_H

#include <QMainWindow>

namespace Ui {
class Testing;
}

class Testing : public QMainWindow
{
    Q_OBJECT

public:
    explicit Testing(QWidget *parent = nullptr);
    ~Testing();

private:
    Ui::Testing *ui;
};

#endif // TESTING_H
