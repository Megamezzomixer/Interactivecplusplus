#include "pointer.h"
#include "ui_pointer.h"
#include "testmodule3.h"

Pointer::Pointer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pointer)
{
    ui->setupUi(this);
}

int zaehler2 = 1;

Pointer::~Pointer()
{
    delete ui;
}


void Pointer::on_pushButton_clicked()
{
    if(zaehler2 == 1)
    {
        ui->label_2->setText("<html><head/><body><p><span style=" " font-size:18pt;"">Wo wird ein Pointer verwendet?<br/></span></p><p><span style=" " font-size:16pt;"">Pointer werden erstellt, wo ein manuelles Speichermanagement erfolgt.</span></p><p><span style=" " font-size:16pt;"">Zudem ist die Gr&ouml;&szlig;e von Pointern immer gleich, was beim Kompilieren des Codes wichtig ist.</span></p></body></html>");
    }
    else if(zaehler2 == 2)
    {
        ui->pushButton->setText("Zum Test");
        ui->label_2->setText("<html><head/><body><p><span style=" "font-size:18pt;"">Wie wird ein Pointer verwendet?</span></p><p><span style=" "font-size:16pt;"">Ein Pointer (*) wird einfach bei der Deklaration einer Variable <br>vor den Bezeichner gesetzt. Möchte man den Wert einer<br> Variable einer anderen übergeben, so muss man auf der <br>rechten Seite einen *Prefix nehmen (z.B. b = *i;).</span></p></body></html>");

    }
    else if(zaehler2 == 3)
    {
        zaehler2 = 1;
        testmodule3 *tm = new testmodule3();
        tm->show();
        this->close();

    }
        zaehler2++;
}
