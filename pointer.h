#ifndef POINTER_H
#define POINTER_H

#include <QDialog>

namespace Ui {
class Pointer;
}

class Pointer : public QDialog
{
    Q_OBJECT
    
public:
    explicit Pointer(QWidget *parent = 0);
    ~Pointer();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Pointer *ui;
};

#endif // POINTER_H
