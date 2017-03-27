#include "ifelse.h"
#include "ui_ifelse.h"
#include "testmodule4.h"


ifelse::ifelse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ifelse)
{
    ui->setupUi(this);
}
int zaehler3 = 1;

ifelse::~ifelse()
{
    delete ui;
}

void ifelse::on_pushButton_clicked()
{
    if(zaehler3 == 1)
    {
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wie wird eine If-else Anweisung verwendet?</span></p><p><span style=" "font-size:16pt;"">Eine bedingte Anweisung besteht aus einer Bedingung und <br> einem Codeabschnitt, der wiederum aus einer oder Mehreren<br> Anweisungen besteht. Wird bei der Programmausf&uuml;hrung die <br>bedingte Anweisung erreicht, dann wird erst die Bedingung<br> ausgewertet, und falls diese zutrifft (und nur dann) wird <br>anschließend der Codeabschnitt ausgef&uuml;hrt.<br/>werden muss.</span></p><p><br/></p></body></html>");
    }
    else if(zaehler3 == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wo wird eine If-else Anweisung verwendet?</span></p><p><span style=" "font-size:16pt;"">Eine If-else Anweisung kann innerhalb und außerhalb einer<br> Methode verwendet werden. Sie wird mei&szlig;t dort eingestzt, <br>wo zwischen zwei oder mehreren Bedingungen entschieden<br> werden muss.</span></p><p><br/></p></body></html>");

    }
    else if(zaehler3 == 3)
    {
        zaehler3 = 1;
        testmodule4 *tm4 = new testmodule4();
        tm4->show();

        this->close();

    }
        zaehler3++;
    }
