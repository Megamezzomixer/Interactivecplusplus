#include "testmodule6.h"
#include "ui_testmodule6.h"
#include "qmessagebox.h"

testmodule6::testmodule6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testmodule6)
{
    ui->setupUi(this);
}

testmodule6::~testmodule6()
{
    delete ui;
}

void testmodule6::on_pushButton_clicked()
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

    ui->checkBox->setEnabled(false);
    ui->checkBox_2->setEnabled(false);
    ui->checkBox_3->setEnabled(false);


    if(ui->checkBox->isChecked() == true)
    {ui->checkBox->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_2->isChecked() == true)
    {ui->checkBox_2->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_2->setStyleSheet("background-color:red"); wert5 = false;}

    if(ui->checkBox_3->isChecked() == false)
    {ui->checkBox_3->setStyleSheet("background-color:green"); wert5 = true;}
    else
    {ui->checkBox_3->setStyleSheet("background-color:red"); wert5 = false;}




    if(ui->tb1->text() == "public class Fahrrad")
    {ui ->tb1 -> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb1->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb2->text() == "public void fahren()")
    {ui ->tb2-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb2->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb3->text() == "{")
    {ui ->tb3-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb3->setStyleSheet("background-color:red"); wert3 = false;}

    if(ui->tb4->text() == "}")
    {ui ->tb4-> setStyleSheet("background-color:green"); wert3 = true;}
    else
    {ui->tb4->setStyleSheet("background-color:red"); wert3 = false;}





}
}
