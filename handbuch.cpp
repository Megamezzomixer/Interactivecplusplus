#include "handbuch.h"
#include "ui_handbuch.h"

handbuch::handbuch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::handbuch)
{
    ui->setupUi(this);
}

handbuch::~handbuch()
{
    delete ui;
}
