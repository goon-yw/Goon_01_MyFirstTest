#include "FirstTest1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstTest1 w;
    w.setWindowTitle("test");
    w.show();
    return a.exec();
}
