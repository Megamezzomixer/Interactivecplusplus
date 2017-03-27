#include "testmodule4.h"
#include "ui_testmodule4.h"
#include "QMessageBox"
#include <iostream>
#include <fstream>
#include <string>


testmodule4::testmodule4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testmodule4)
{
    ui->setupUi(this);
}

testmodule4::~testmodule4()
{
    delete ui;
}

void testmodule4::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Bestätigung", "Sind alle Daten korrekt?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {

   ;
    bool wert3;
    bool wert5;


    ui->tb1->setEnabled(false);
    ui->tb2->setEnabled(false);
    ui->checkBox->setEnabled(false);
    ui->checkBox_2->setEnabled(false);
    ui->checkBox_3->setEnabled(false);
    ui->checkBox_4->setEnabled(false);
    ui->checkBox_5->setEnabled(false);
    ui->checkBox_6->setEnabled(false);

    if(ui->checkBox->isChecked() == true)
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

    if(ui->checkBox_5->isChecked() == true )
    {ui->checkBox_5->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_5->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_6->isChecked() == false)
    {ui->checkBox_6->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_6->setStyleSheet("background-color:red"); wert5 = false;}


    if(ui->tb1->text() == "x=10")
    {ui ->tb1 -> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb1->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb2->text() == "b=*x;")
    {ui ->tb2-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb2->setStyleSheet("background-color:red"); wert3 = false;}





}
}
