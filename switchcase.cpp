#include "switchcase.h"
#include "ui_switchcase.h"

switchcase::switchcase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::switchcase)
{
    ui->setupUi(this);
}

switchcase::~switchcase()
{
    delete ui;
}
