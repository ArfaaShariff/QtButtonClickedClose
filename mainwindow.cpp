#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    setCentralWidget(ui->plainTextEdit);
    ui->pushButton->setText("Close");

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar_3,SLOT(setValue(int)));

    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
//   MyDialog mDialog;
//    mDialog.setModal(true);
//    mDialog.exec();
//    mDialog.show();
    mDialog = new  MyDialog(this);
    mDialog->show();

}
