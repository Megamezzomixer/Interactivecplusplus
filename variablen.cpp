#include "variablen.h"
#include "ui_variablen.h"
#include "testmodule.h"

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
        ui->label_2->setText("<html><head/><body><p><span style="" font-size:18pt;"">Wie wird eine Variable verwendet?<br></span><span style=" "font-size:16pt;"">Um eine Variable zu verwenden, muss der User sie zuallererst ins Leben<br/>rufen(deklarieren). Nach der Deklaration folgt die Initialisierung, wobei der Variable<br/>ein bestimmter Wert &uuml;bergeben wird.</span></p></body></html>");
    }
    else if(zaehler == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("<html><head/><body><p><span style="" font-size:18pt;"">Wo wird eine Variable verwendet?<br> </span></p><p><span style=" "font-size:16pt;"">Eine Variable wird innerhalb des Programms initialisiert, deklariert <br>und benutzt. Sie wird innerhalb der Klasse und der Methode verwendet.<br> Die Variable kann nicht au&szlig;erhalb einer Klasse verwendet werden.</span></p><p><span style=" "font-size:16pt;"">Beispiel:</span></p><p><span style=" "font-size:14pt; font-weight:600;"">int x = 10;</span></p><p><span style=" "font-size:14pt;"">if (</span><span style=" "font-size:14pt; font-weight:600;"">x</span><span style=" "font-size:14pt;"">+3==13)</span></p><p><span style=" "font-size:14pt;"">{ } </span></p></body></html>");

    }
    else if(zaehler ==3)
    {
        testModule *tm = new testModule();
        tm->show();
        this->close();

    }
        zaehler++;
}
