#include "basics.h"
#include "ui_basics.h"
#include "variablen.h"
#include <iostream>
#include <fstream>

Basics::Basics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Basics)
{
    ui->setupUi(this);
}

Basics::~Basics()
{
    delete ui;
}

void Basics::on_pushButton_clicked()
{
Variablen *var = new Variablen();
var->show();
}

void Basics::on_pushButton_2_clicked()
{

}

void Basics::on_Basics_finished(int result)
{
    std::ifstream file("progress.txt");
    std::string temp;
    std::getline(file, temp);

    if(temp.find("variablen = true") != std::string::npos)
    {
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_2->setStyleSheet("background-color:blue");
    }
result = 1;
}
