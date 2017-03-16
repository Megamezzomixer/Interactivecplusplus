#include "pointer.h"
#include "ui_pointer.h"

Pointer::Pointer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pointer)
{
    ui->setupUi(this);
}

int Zaehler = 1();

Pointer::~Pointer()
{
    delete ui;
}

