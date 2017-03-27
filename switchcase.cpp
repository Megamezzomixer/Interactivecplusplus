#include "switchcase.h"
#include "ui_switchcase.h"
#include"switchcase.h"
#include "testmodule5.h"

switchcase::switchcase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::switchcase)
{
    ui->setupUi(this);
}
    int zaehler4 =1;

switchcase::~switchcase()
{
    delete ui;
}




void switchcase::on_pushButton_clicked()
{
    if(zaehler4 == 1)
    {
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wie wird eine switch case Anweisung verwendet?</span></p><p><span style=" "font-size:16pt;"">Möchten wir viele Fälle unterscheiden und für jeden Fall<br> unterschiedliche Aktionen ausführen, so können wir das mit <br>vielen </span><span style=" "font-size:16pt; font-weight:600;"">if</span><span style=" "font-size:16pt;""> Anweisungen oder mit einer </span><span style="" font-size:16pt; font-weight:600;"">switch case</span><span style=" "font-size:16pt;""> Anweisung <br>erreichen.</span></p><p><br/></p><p><br/></p></body></html>");// WIE
    }
    else if(zaehler4 == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wo wird eine switch case Anweisung verwendet?</span></p><p><span style=" "font-size:16pt;"">Eine switch Case Anweisung, wird wie die If-else Anweisung <br>nur einnerhalb einer Methode verwendet.</span></p><p><br/></p></body></html>");// WO

    }
    else if(zaehler4 ==3)
    {
        zaehler4 = 1;
        testmodule5 *tm5 = new testmodule5();
        tm5->show();

        this->close();
    }
        zaehler4++;
}
