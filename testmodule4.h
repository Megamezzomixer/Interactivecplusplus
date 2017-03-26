#ifndef TESTMODULE4_H
#define TESTMODULE4_H

#include <QDialog>

namespace Ui {
class testmodule4;
}

class testmodule4 : public QDialog
{
    Q_OBJECT

public:
    explicit testmodule4(QWidget *parent = 0);
    ~testmodule4();

private:
    Ui::testmodule4 *ui;
};

#endif // TESTMODULE4_H
