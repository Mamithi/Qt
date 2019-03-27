#ifndef JUMUISHA_H
#define JUMUISHA_H

#include <QMainWindow>

namespace Ui {
class Jumuisha;
}

class Jumuisha : public QMainWindow
{
    Q_OBJECT

public:
    explicit Jumuisha(QWidget *parent = nullptr);
    ~Jumuisha();

private slots:

private:
    Ui::Jumuisha *ui;
};

#endif // JUMUISHA_H
