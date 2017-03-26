#include "testmodule4.h"
#include "ui_testmodule4.h"

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
