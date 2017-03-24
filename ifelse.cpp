#include "ifelse.h"
#include "ui_ifelse.h"

ifelse::ifelse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ifelse)
{
    ui->setupUi(this);
}

ifelse::~ifelse()
{
    delete ui;
}
