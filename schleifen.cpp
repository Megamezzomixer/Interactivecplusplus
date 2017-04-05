#include "schleifen.h"
#include "ui_schleifen.h"
#include "testmodule2.h"

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
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wie wird eine Schleife verwendet?<br/></span></p><p><span style=" "font-size:16pt;"">Eine Schleife dient dazu, ein Programm­stück mehrfach zu wiederholen.<br/>Das Programm­stück, der Schleifen­k&ouml;rper, wird solange wiederholt, wie <br/>eine bestimmte Bedingung, die Schleifen­bedingung, erf&uuml;llt ist. <br/>Es handelt sich hierbei um einen boolean Typ (true oder false).</span></p><p><br/></p></body></html>");
    }
    else if(zaehler1 == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wo wird eine Schleife verwendet?</span></p><p><span style=" "font-size:16pt;"">Eine Schleife wird innerhalb des Programms ausgef&uuml;hrt. Sie wird innerhalb </span></p><p><span style=" "font-size:16pt;"">der Klasse und der Methode verwendet. Die Schleife kann nicht auszlig;erhalb </span></p><p><span style=" "font-size:16pt;"">einer Klasse verwendet werden.</span></p><p><span style=" "font-size:16pt;""></span></p><p><span style=" "font-size:16pt; font-weight:600;"">public void fahren()</span></p><p><span style=" "font-size:16pt; font-weight:600;"">{</span></p><p><span style=" "font-size:16pt; font-weight:600;"">for(i=0;i&lt;10;i++)</span></p><p><span style=" "font-size:16pt; font-weight:600;"">{</span></p><p><span style=" "font-size:16pt; font-weight:600;"">}</span></p><p><span style=" "font-size:16pt; font-weight:600;"">}</span></p></body></html>");

    }
    else if(zaehler1 ==3)
    {
        zaehler1 = 1;
        testmodule2 *tm2 = new testmodule2();
        tm2->show();
        this->close();

    }
        zaehler1++;
}
