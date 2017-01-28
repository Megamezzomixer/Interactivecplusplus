#include "basics.h"
#include "ui_basics.h"
#include "variablen.h"

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
