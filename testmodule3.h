#ifndef TESTMODULE3_H
#define TESTMODULE3_H

#include <QDialog>

namespace Ui {
class testmodule3;
}

class testmodule3 : public QDialog
{
    Q_OBJECT
    
public:
    explicit testmodule3(QWidget *parent = 0);
    ~testmodule3();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::testmodule3 *ui;
};

#endif // TESTMODULE3_H
