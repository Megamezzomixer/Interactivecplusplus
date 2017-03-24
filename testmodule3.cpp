#include "testmodule3.h"
#include "ui_testmodule3.h"
#include "QMessageBox"
#include <iostream>
#include <fstream>
#include <string>

testmodule3::testmodule3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testmodule3)
{
    ui->setupUi(this);
}

testmodule3::~testmodule3()
{
    delete ui;
}

void testmodule3::on_pushButton_clicked()
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
    ui->tb2->setEnabled(false);
    ui->tb3->setEnabled(false);
    ui->tb4->setEnabled(false);
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

    if(ui->checkBox_2->isChecked() == false)
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


    if(ui->tb1->text() == "int")
    {ui ->tb1 -> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb1->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb2->text() == "10")
    {ui ->tb2-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb2->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb3->text() == "x")
    {ui ->tb3-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb3->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb4->text() == "*i")
    {ui ->tb4-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb4->setStyleSheet("background-color:red"); wert3 = false;}




}
}
