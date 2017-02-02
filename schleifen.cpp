#include "schleifen.h"
#include "ui_schleifen.h"

schleifen::schleifen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::schleifen)
{
    ui->setupUi(this);
}

schleifen::~schleifen()
{
    delete ui;
}
