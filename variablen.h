#ifndef VARIABLEN_H
#define VARIABLEN_H

#include <QDialog>

namespace Ui {
class Variablen;
}

class Variablen : public QDialog
{
    Q_OBJECT
    
public:
    explicit Variablen(QWidget *parent = 0);
    ~Variablen();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Variablen *ui;
};

#endif // VARIABLEN_H
