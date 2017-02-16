#include "schleifen.h"
#include "ui_schleifen.h"

schleifen::schleifen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::schleifen)
{
    ui->setupUi(this);
}

int zaehler1 = 1;

schleifen::~schleifen()
{
    delete ui;
}




void schleifen::on_pushButton_clicked()
{
    if(zaehler1 == 1)
    {
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wie wird eine Schleife verwendet?<br/></span></p><p><span style=" "font-size:16pt;"">Eine Schleife dient dazu, ein Programm­stück mehrfach zu wiederholen.<br/>Das Programm­stück, der Schleifen­körper, wird solange wiederholt, wie <br/>eine bestimmte Bedingung, die Schleifen­bedingung, erfüllt ist. <br/>Es handelt sich hierbei um einen boolean Typ (true oder false).</span></p><p><br/></p></body></html>");
    }
    else if(zaehler1 == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wo wird eine Schleife verwendet?</span></p><p><span style=" "font-size:16pt;"">Eine Schleife wird innerhalb des Programms ausgeführt. Sie wird innerhalb </span></p><p><span style=" "font-size:16pt;"">der Klasse und der Methode verwendet. Die Schleife kann nicht außerhalb </span></p><p><span style=" "font-size:16pt;"">einer Klasse verwendet werden.</span></p><p><span style=" "font-size:16pt;"">Beispiel:</span></p><p><span style=" "font-size:16pt; font-weight:600;"">public void fahren()</span></p><p><span style=" "font-size:16pt; font-weight:600;"">{</span></p><p><span style=" "font-size:16pt; font-weight:600;"">for(i=0;i&lt;10;i++)</span></p><p><span style=" "font-size:16pt; font-weight:600;"">{</span></p><p><span style=" "font-size:16pt; font-weight:600;"">}</span></p><p><span style=" "font-size:16pt; font-weight:600;"">}</span></p></body></html>");

    }
    else if(zaehler1 ==3)
    {


    }
        zaehler1++;
}
