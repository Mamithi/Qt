#include <QApplication>
#include <QtWidgets>

int main(int argc, char** argv) {
       QApplication app(argc, argv);
       QPushButton btn("QPush Button");

       btn.setText("Cancel");
       btn.setToolTip("You are going to leave the app");

       QFont qfont("Arial", QFont::Bold, true);

       btn.setFont(qfont);
       btn.setCursor(Qt::PointingHandCursor);

       QProgressBar progressBar;
       progressBar.setValue(34);
       progressBar.show();

       btn.show();

       return app.exec();
}
