#ifndef TESTMODULE2_H
#define TESTMODULE2_H

#include <QDialog>

namespace Ui {
class testmodule2;
}

class testmodule2 : public QDialog
{
    Q_OBJECT
    
public:
    explicit testmodule2(QWidget *parent = 0);
    ~testmodule2();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::testmodule2 *ui;
};

#endif // TESTMODULE2_H
