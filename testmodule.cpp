#include "testmodule.h"
#include "ui_testmodule.h"
#include "QMessageBox"
#include <iostream>
#include <fstream>
#include <string>

testModule::testModule(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::testModule)
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
    reply = QMessageBox::question(this, "Bestätigung", "Sind alle Daten korrekt?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        ui->tb1->setEnabled(false);
        ui->tb2->setEnabled(false);
        ui->tb3->setEnabled(false);
        ui->tb4->setEnabled(false);
        ui->checkBox->setEnabled(false);
        ui->checkBox2->setEnabled(false);
        ui->checkBox3->setEnabled(false);

        bool wert1;
        bool wert2;
        bool wert3;
        bool wert4;
        bool wert5;
        bool wert6;
        bool wert7;


        if (ui->tb1->text() == "x") {
            ui->tb1->setStyleSheet("background-color:green");
            wert1 = true;
        }
        else {
            ui->tb1->setStyleSheet("background-color:red");
            wert1 = false;
        }

        if (ui->tb2->text() == "5") {
            ui->tb2->setStyleSheet("background-color:green");
            wert2 = true;
        }
        else {
            ui->tb2->setStyleSheet("background-color:red");
            wert2 = false;
        }

        if (ui->tb3->text() == "string") {
            ui->tb3->setStyleSheet("background-color:green");
            wert3 = true;
        }
        else {
            ui->tb3->setStyleSheet("background-color:red");
            wert3 = false;
        }

        if (ui->tb4->text() == "Dies ist ein Test") {
            ui->tb4->setStyleSheet("background-color:green");
            wert4 = true;
        }
        else {
            ui->tb4->setStyleSheet("background-color:red");
            wert4 = false;
        }

        if (ui->checkBox->isChecked() == true) {
            ui->checkBox->setStyleSheet("background-color:green");
            wert5 = true;
        }
        else {
            ui->checkBox->setStyleSheet("background-color:red");
            wert5 = false;
        }

        if (ui->checkBox2->isChecked() == false) {
            ui->checkBox2->setStyleSheet("background-color:green");
            wert6 = true;
        }
        else {
            ui->checkBox2->setStyleSheet("background-color:red");
            wert6 = false;
        }
        if (ui->checkBox3->isChecked() == true) {
            ui->checkBox3->setStyleSheet("background-color:green");
            wert7 = true;
        }
        else {
            ui->checkBox3->setStyleSheet("background-color:red");
            wert7 = false;
        }

        if (wert1 && wert2 && wert3 && wert4 && wert5 && wert6 && wert7) {
            std::ofstream out("/progress.txt");

            out << "variablen = true";
            out.close();
        }
    }
}
