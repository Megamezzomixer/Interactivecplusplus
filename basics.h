#ifndef BASICS_H
#define BASICS_H

#include <QDialog>

namespace Ui {
class Basics;
}

class Basics : public QDialog
{
    Q_OBJECT
    
public:
    explicit Basics(QWidget *parent = 0);
    ~Basics();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Basics *ui;
};

#endif // BASICS_H
