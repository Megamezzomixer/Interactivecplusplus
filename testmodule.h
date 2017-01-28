#ifndef TESTMODULE_H
#define TESTMODULE_H

#include <QDialog>

namespace Ui {
class testModule;
}

class testModule : public QDialog
{
    Q_OBJECT
    
public:
    explicit testModule(QWidget *parent = 0);
    ~testModule();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::testModule *ui;
};

#endif // TESTMODULE_H
