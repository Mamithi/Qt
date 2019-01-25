#ifndef Signal_SLot_H
#define Signal_SLot_H

#include <QApplication>
#include <QtWidgets>

class Signal_Slot : public QWidget {
    Q_OBJECT
    public:
        Signal_Slot();

    public slots:
        void reveal();

    signals:
        void invlabel();
    private:
        QPushButton *btn;
        QLabel *label;

};

#endif // Signal_SLot_H
