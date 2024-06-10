#ifndef DIAS_H
#define DIAS_H

#include <QDialog>

namespace Ui {
class Dias;
}

class Dias : public QDialog
{
    Q_OBJECT

public:
    explicit Dias(QWidget *parent = nullptr);
    ~Dias();

private:
    Ui::Dias *ui;
};

#endif // DIAS_H
