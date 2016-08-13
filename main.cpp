#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("简易计算器  2145133魏姗姗制作");
    w.show();
    return a.exec();
}
