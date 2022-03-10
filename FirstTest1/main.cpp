#include "FirstTest1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstTest1 w;
    w.setWindowTitle(u8"一二三四五aaa！");
    w.show();
    return a.exec();
    // test push1
    // test push2
    // test push3
}
