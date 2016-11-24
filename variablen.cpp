#include "variablen.h"
#include "ui_variablen.h"

Variablen::Variablen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Variablen)
{
    ui->setupUi(this);
}
int zaehler = 1;

Variablen::~Variablen()
{
    delete ui;
}


void Variablen::on_pushButton_clicked()
{
    if(zaehler == 1)
    {
        ui->label_2->setText("<html><head/><body><p><span style="" font-size:18pt;"">Wie wird eine Variable verwendet?<br></span><span style=" "font-size:16pt;"">Um eine Variable zu verwenden, muss der User sie zuallererst ins Leben<br/>rufen(deklarieren). Nach der Deklaration folgt die Initialisierung, wobei der Variable<br/>ein bestimmter Wert übergeben wird.</span></p></body></html>");
    }
    else if(zaehler == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("WO wird eine Variable verwendet");
    }
        zaehler++;
}
