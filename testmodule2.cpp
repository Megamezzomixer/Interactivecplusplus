#include "testmodule2.h"
#include "ui_testmodule2.h"
#include "QMessageBox"
#include <iostream>
#include <fstream>
#include <string>



testmodule2::testmodule2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testmodule2)
{
    ui->setupUi(this);
}

testmodule2::~testmodule2()
{
    delete ui;
}


void testmodule2::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Bestätigung", "Sind alle Daten korrekt?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {


    bool wert1;
    bool wert2;
    bool wert3;
    bool wert4;
    bool wert5;
    bool wert6;
    bool wert7;


    ui->tb1->setEnabled(false);
    ui->tb1_2->setEnabled(false);
    ui->tb1_3->setEnabled(false);
    ui->checkBox->setEnabled(false);
    ui->checkBox_2->setEnabled(false);
    ui->checkBox_3->setEnabled(false);
    ui->checkBox_4->setEnabled(false);
    ui->checkBox_5->setEnabled(false);
    ui->checkBox_6->setEnabled(false);

    if(ui->checkBox->isChecked() == false)
    {ui->checkBox->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_2->isChecked() == true)
    {ui->checkBox_2->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_2->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_3->isChecked() == true)
    {ui->checkBox_3->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_3->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_4->isChecked() == false)
    {ui->checkBox_4->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_4->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_5->isChecked() == true)
    {ui->checkBox_5->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_5->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_6->isChecked() == true)
    {ui->checkBox_6->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_6->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->tb1->text() == "int x = 1")
    {ui ->tb1 -> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb1->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb1_2->text() == "x < 11")
    {ui ->tb1_2-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb1_2->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb1_2->text() == "x++")
    {ui ->tb1_2-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb1_2->setStyleSheet("background-color:red"); wert3 = false;}


}


}
