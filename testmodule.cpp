#include "testmodule.h"
#include "ui_testmodule.h"
#include "QMessageBox"

testModule::testModule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testModule)
{
    ui->setupUi(this);
}

testModule::~testModule()
{
    delete ui;
}

void testModule::on_pushButton_clicked()
{
QMessageBox::StandardButton reply;
reply = QMessageBox::question(this, "Bestätigung", "Sind alle Daten korrekt?", QMessageBox::Yes|QMessageBox::No);
if(reply == QMessageBox::Yes)
{
ui->tb1->setEnabled(false);
ui->tb2->setEnabled(false);
ui->tb3->setEnabled(false);
ui->tb4->setEnabled(false);
ui->checkBox->setEnabled(false);
ui->checkBox2->setEnabled(false);
ui->checkBox3->setEnabled(false);


if(ui->tb1->text() == "x"){ui->tb1->setStyleSheet("background-color:green");}else{ui->tb1->setStyleSheet("background-color:red");}
if(ui->tb2->text() == "5"){ui ->tb2 -> setStyleSheet("backround-color:green");}else{ui->tb2->setStyleSheet("background-color:red");}
if(ui->tb3->text() == "string"){ui ->tb3 -> setStyleSheet("background-color:green");}else{ui->tb3->setStyleSheet("background-color:red");}
if(ui->tb4->text() == "Dies ist ein Test"){ui ->tb4 -> setStyleSheet("background-color:green");}else{ui->tb4->setStyleSheet("background-color:red");}
if(ui->checkBox->checkState() == true){ui->checkBox->setStyleSheet("background-color:green");}else{ui->checkBox->setStyleSheet("background-color:red");}
if(ui->checkBox2->checkState() == false){ui->checkBox2->setStyleSheet("background-color:green");}else{ui->checkBox2->setStyleSheet("background-color:red");}
if(ui->checkBox3->checkState() == true){ui->checkBox3->setStyleSheet("background-color:green");}else{ui->checkBox3->setStyleSheet("background-color:red");}



}
}

