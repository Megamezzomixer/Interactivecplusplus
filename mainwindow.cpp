#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "basics.h"
#include "testmodule.h"
#include "pointer.h"
#include "conditions.h"
#include "classses.h"
#include "handbuch.h"


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
    Basics *bs = new Basics();
    bs->show();


}

void MainWindow::on_pushButton_2_clicked()
{
    Conditions *con = new Conditions();
    con->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    classses *cs = new classses();
    cs->show();

}

void MainWindow::on_pushButton_4_clicked()
{
    handbuch *hb = new handbuch();
    hb->show();
}
