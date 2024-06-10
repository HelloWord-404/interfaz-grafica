#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QDialog>

namespace Ui {
class Calculadora;
}

class Calculadora : public QDialog
{
    Q_OBJECT

public:
    explicit Calculadora(QWidget *parent = nullptr);
    ~Calculadora();

private slots:
    void on_numero_0_clicked();

    void on_numero_1_clicked();

    void on_numero_2_clicked();

    void on_numero_3_clicked();

    void on_numero_4_clicked();

    void on_numero_5_clicked();

    void on_numero_6_clicked();

    void on_numero_7_clicked();

    void on_numero_8_clicked();

    void on_numero_9_clicked();

    void on_division_clicked();

    void on_multiplicacion_clicked();

    void on_suma_clicked();

    void on_resta_clicked();

    void on_igual_clicked();

    void on_borrar_clicked();

    void on_porcentaje_clicked();

    void on_signo_clicked();

private:
    Ui::Calculadora *ui;
};

#endif // CALCULADORA_H
