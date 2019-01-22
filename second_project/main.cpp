#include <QApplication>
#include <QPushButton>
#include <QFont>

int main(int argc, char** argv) {
       QApplication app(argc, argv);
       QPushButton btn("QPush Button");

       btn.setText("Cancel");
       btn.setToolTip("You are going to leave the app");

       QFont qfont("Arial", QFont::Bold, true);

       btn.setCursor(Qt::PointingHandCursor);
       btn.setFont(qfont);
       btn.show();

       return app.exec();
}
