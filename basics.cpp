#include "basics.h"
#include "ui_basics.h"
#include "variablen.h"
#include <iostream>
#include <fstream>
#include "schleifen.h"
#include "pointer.h"

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

//std::ifstream file("progress.txt");
//std::string temp;
//std::getline(file, temp);

//if(temp.find("variablen = true") != std::string::npos)
//{

//ui->pushButton_2->setEnabled(true);
//ui->pushButton_2->setStyleSheet("background-color:blue");


//}

}

void Basics::on_pushButton_2_clicked()
{
    schleifen *loops = new schleifen();
    loops->show();
}




void Basics::on_pushButton_3_clicked()
{
    Pointer *point = new Pointer();
    point->show();
}
