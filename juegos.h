#ifndef JUEGOS_H
#define JUEGOS_H

#include <QDialog>

namespace Ui {
class Juegos;
}

class Juegos : public QDialog
{
    Q_OBJECT

public:
    explicit Juegos(QWidget *parent = nullptr);
    ~Juegos();

private:
    Ui::Juegos *ui;
};

#endif // JUEGOS_H
