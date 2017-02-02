#ifndef SCHLEIFEN_H
#define SCHLEIFEN_H

#include <QDialog>

namespace Ui {
class schleifen;
}

class schleifen : public QDialog
{
    Q_OBJECT
    
public:
    explicit schleifen(QWidget *parent = 0);
    ~schleifen();
    
private:
    Ui::schleifen *ui;
};

#endif // SCHLEIFEN_H
