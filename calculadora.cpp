#include "calculadora.h"
#include "ui_calculadora.h"
#include <QLineEdit>
#include <string>

Calculadora::Calculadora(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calculadora)
{
    ui->setupUi(this);
    setWindowTitle("Calculadora");
}

Calculadora::~Calculadora()
{
    delete ui;
}

void Calculadora::on_numero_0_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(0);
    }
    else{
        ui->n1->setValue(0);
    }
}


void Calculadora::on_numero_1_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(1);
    }
    else{
        ui->n1->setValue(1);
    }
}


void Calculadora::on_numero_2_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(2);
    }
    else{
        ui->n1->setValue(2);
    }
}


void Calculadora::on_numero_3_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(3);
    }
    else{
        ui->n1->setValue(3);
    }}


void Calculadora::on_numero_4_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(4);
    }
    else{
        ui->n1->setValue(4);
    }
}


void Calculadora::on_numero_5_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(5);
    }
    else{
        ui->n1->setValue(5);
    }
}

void Calculadora::on_numero_6_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(6);
    }
    else{
        ui->n1->setValue(6);
    }
}


void Calculadora::on_numero_7_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(7);
    }
    else{
        ui->n1->setValue(7);
    }
}


void Calculadora::on_numero_8_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(8);
    }
    else{
        ui->n1->setValue(8);
    }
}


void Calculadora::on_numero_9_clicked()
{
    if(ui->label->text()=="X" || ui->label->text()=="/" || ui->label->text()=="+" || ui->label->text()=="-" || ui->label->text()=="%"){
        ui->n2->setValue(9);
    }
    else{
        ui->n1->setValue(9);
    }
}


void Calculadora::on_division_clicked()
{
    ui->label->setText("/");
}


void Calculadora::on_multiplicacion_clicked()
{
    ui->label->setText("X");
}


void Calculadora::on_suma_clicked()
{
    ui->label->setText("+");

}


void Calculadora::on_resta_clicked()
{
    ui->label->setText("-");
}


void Calculadora::on_igual_clicked()
{
    float resultado;
    float porcentaj;

    if(ui->label->text()=="X"){
        resultado=ui->n1->value()*ui->n2->value();
    }
    else if(ui->label->text()=="/"){
        resultado=ui->n1->value()/ui->n2->value();
    }
    else if(ui->label->text()=="+"){
        resultado=ui->n1->value()+ui->n2->value();
    }
    else if(ui->label->text()=="-"){
        resultado=ui->n1->value()-ui->n2->value();
    }
    else if(ui->label->text()=="%"){
        porcentaj=(ui->n1->value()*ui->n2->value())/100;
    }
    QString s = QString::number(resultado);
    if(ui->label->text()=="%")
        s = QString::number(porcentaj);
    ui->respuesta->setText(s);
    ui->label->clear();
}


void Calculadora::on_borrar_clicked()
{
    ui->n1->clear();
    ui->n2->clear();
    ui->respuesta->clear();
    ui->label->clear();
}


void Calculadora::on_porcentaje_clicked()
{
    ui->label->setText("%");
}


void Calculadora::on_signo_clicked()
{
    QString p=ui->respuesta->text();
    QString l="-"+p;
    ui->respuesta->setText(l);
}

