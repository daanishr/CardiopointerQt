#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    //capture model
    QMessageBox::StandardButton answer;
    answer = QMessageBox::question(this,"Capture Model"," Model Captured\n Do you want to save?",QMessageBox::No | QMessageBox::Yes);

    if(answer == QMessageBox::Yes){
        QMessageBox::information(this,"Capture Model","File saved successfully");

    }
}

void MainWindow::on_pushButton_2_clicked()
{
    //capture cross section
    QMessageBox::StandardButton answer;
    answer = QMessageBox::question(this,"Capture Crossection"," Cross section captured\n Do you want to save?",QMessageBox::No | QMessageBox::Yes);
    if(answer == QMessageBox::Yes){
        QMessageBox::information(this,"Cross section capture","File saved successfully");

    }
}

void MainWindow::on_pushButton_3_clicked()
{
    //reset model
     QMessageBox::information(this,"Reset","Model Reset successfull");
}
