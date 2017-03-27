#ifndef TESTMODULE5_H
#define TESTMODULE5_H

#include <QDialog>

namespace Ui {
class testmodule5;
}

class testmodule5 : public QDialog
{
    Q_OBJECT

public:
    explicit testmodule5(QWidget *parent = 0);
    ~testmodule5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::testmodule5 *ui;
};

#endif // TESTMODULE5_H
