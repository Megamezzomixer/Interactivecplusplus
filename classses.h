#ifndef CLASSSES_H
#define CLASSSES_H

#include <QDialog>

namespace Ui {
class classses;
}

class classses : public QDialog
{
    Q_OBJECT

public:
    explicit classses(QWidget *parent = 0);
    ~classses();

private slots:
    void on_pushButton_clicked();

private:
    Ui::classses *ui;
};

#endif // CLASSSES_H
