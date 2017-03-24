#include "conditions.h"
#include "ui_conditions.h"
#include "ifelse.h"
#include "switchcase.h"

Conditions::Conditions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Conditions)
{
    ui->setupUi(this);
}

Conditions::~Conditions()
{
    delete ui;
}

void Conditions::on_pushButton_clicked()
{
    ifelse *ife = new ifelse();
    ife->show();



}

void Conditions::on_pushButton_2_clicked()
{
    switchcase *swi = new switchcase();
    swi->show();
}
