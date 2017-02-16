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

    void on_pushButton_2_clicked();

    void on_Basics_finished(int result);

private:
    Ui::Basics *ui;
};

#endif // BASICS_H
