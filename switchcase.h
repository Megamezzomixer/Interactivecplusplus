#ifndef SWITCHCASE_H
#define SWITCHCASE_H

#include <QDialog>

namespace Ui {
class switchcase;
}

class switchcase : public QDialog
{
    Q_OBJECT

public:
    explicit switchcase(QWidget *parent = 0);
    ~switchcase();

private slots:
    void on_pushButton_clicked();

private:
    Ui::switchcase *ui;
};

#endif // SWITCHCASE_H
