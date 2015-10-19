#include "mainwindow.h"
#include <QApplication>
#include <QDir>
    #include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir mDir("C:/QtProjects") ;
    qDebug()<<mDir.exists();
    MainWindow w;
    w.show();

    return a.exec();
}
