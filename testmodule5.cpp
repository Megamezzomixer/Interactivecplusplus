#include "testmodule5.h"
#include "ui_testmodule5.h"
#include "QMessageBox"
#include <iostream>
#include <fstream>
#include <string>

testmodule5::testmodule5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testmodule5)
{
    ui->setupUi(this);
}

testmodule5::~testmodule5()
{
    delete ui;
}

void testmodule5::on_pushButton_clicked()
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
    ui->tb3->setEnabled(false);
    ui->tb4->setEnabled(false);
    ui->tb5->setEnabled(false);
    ui->tb6->setEnabled(false);
    ui->tb7->setEnabled(false);
    ui->checkBox->setEnabled(false);
    ui->checkBox_2->setEnabled(false);
    ui->checkBox_3->setEnabled(false);


    if(ui->checkBox->isChecked() == true)
    {ui->checkBox->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_2->isChecked() == false)
    {ui->checkBox_2->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_2->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_3->isChecked() == false)
    {ui->checkBox_3->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_3->setStyleSheet("background-color:red"); wert5 = false;}




    if(ui->tb1->text() == "switch(b)")
    {ui ->tb1 -> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb1->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb2->text() == "case1:")
    {ui ->tb2-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb2->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb3->text() == "case2:")
    {ui ->tb3-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb3->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb4->text() == "case3:")
    {ui ->tb4-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb4->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb5->text() == "b=1")
    {ui ->tb5-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb5->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb6->text() == "b=2")
    {ui ->tb6-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb6->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb7->text() == "b=3")
    {ui ->tb7-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb7->setStyleSheet("background-color:red"); wert3 = false;}







}
}
