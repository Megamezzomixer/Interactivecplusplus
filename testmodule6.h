#ifndef TESTMODULE6_H
#define TESTMODULE6_H

#include <QDialog>

namespace Ui {
class testmodule6;
}

class testmodule6 : public QDialog
{
    Q_OBJECT

public:
    explicit testmodule6(QWidget *parent = 0);
    ~testmodule6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::testmodule6 *ui;
};

#endif // TESTMODULE6_H
