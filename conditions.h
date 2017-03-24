#ifndef CONDITIONS_H
#define CONDITIONS_H

#include <QDialog>

namespace Ui {
class Conditions;
}

class Conditions : public QDialog
{
    Q_OBJECT

public:
    explicit Conditions(QWidget *parent = 0);
    ~Conditions();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Conditions *ui;
};

#endif // CONDITIONS_H
