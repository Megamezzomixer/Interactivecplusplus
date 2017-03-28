#ifndef HANDBUCH_H
#define HANDBUCH_H

#include <QDialog>

namespace Ui {
class handbuch;
}

class handbuch : public QDialog
{
    Q_OBJECT

public:
    explicit handbuch(QWidget *parent = 0);
    ~handbuch();

private:
    Ui::handbuch *ui;
};

#endif // HANDBUCH_H
