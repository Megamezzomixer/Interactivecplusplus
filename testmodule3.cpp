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

}
