#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QDebug>
#include <QFile>
void Write(QString Filename)
{
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
            qDebug()<<"Could not open file for writing";
                      return;
}
    QTextStream out(&mFile);
    out<<"Hello World";
    mFile.flush();
    mFile.close();
}


void Read(QString Filename)
{
    QFile mFile(Filename);
    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
            qDebug()<<"Could not open file for writing";
                      return;
}
    QTextStream in(&mFile);
    QString mText = in.readAll();
    qDebug()<<mText;
    mFile.close();

}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QDir mDir("C:/QtProjects") ;

//    foreach(QFileInfo mItm, mDir.drives())
//    {
//        qDebug() << mItm.absoluteFilePath();
//    }
//    qDebug()<<mDir.exists();


    QString mFilename ="D:/test/myfile.txt";
    Write(mFilename);
    Read(mFilename);
    MainWindow w;
    w.show();

    return a.exec();
}
