#ifndef IFELSE_H
#define IFELSE_H

#include <QDialog>

namespace Ui {
class ifelse;
}

class ifelse : public QDialog
{
    Q_OBJECT

public:
    explicit ifelse(QWidget *parent = 0);
    ~ifelse();

private:
    Ui::ifelse *ui;
};

#endif // IFELSE_H
