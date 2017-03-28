#include "classses.h"
#include "ui_classses.h"
#include "testmodule6.h"
classses::classses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::classses)
{
    ui->setupUi(this);
}
    int zaehler6 = 1;

classses::~classses()
{
    delete ui;
}

void classses::on_pushButton_clicked()
{
    if(zaehler6 == 1)
    {
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wie wird eine Klasse verwendet?</span></p><p><span style=" "font-size:16pt;"">Jedes erstelte Programm, hat eine sogenannte &quot;main class<br>&quot;(Hauptklasse), die von der Entwicklungsumgebung automatisch <br>erstellt wurde. Der User kann jedoch selber Klassen erstellen. <br>Eine Klasse ist wie folgt aufgebaut:</span></p><p><span style=" "font-size:16pt;"">1. Sichtbarkeitstyp 2. Schlüsselwort class 3. Name der Klasse</span></p></body></html>");// WIE
    }
    else if(zaehler6 == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wo wird eine Klasse verwendet?</span></p><p><span style=" "font-size:16pt;"">Eine Klasse wir im Code-Editor verwendet, Sie ist sogesehen der<br> Hauptteil des Codes. Eine Klasse dient als eine Art Bauplan nachdem<br> das Programm arbeitet.</span></p></body></html>");// WO

    }
    else if(zaehler6 ==3)
    {
        zaehler6 = 1;
        testmodule6 *tm6 = new testmodule6();
        tm6->show();

        this->close();
    }
        zaehler6++;
}
