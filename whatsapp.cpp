#include "whatsapp.h"
#include "ui_whatsapp.h"
#include "QMessageBox"


whatsapp::whatsapp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::whatsapp)
{
    ui->setupUi(this);
}

whatsapp::~whatsapp()
{
    delete ui;
}

void whatsapp::on_pushButton_clicked()
{
    ui->lineEdit->clear();
    QMessageBox::information(this, "listo!", "Mensaje Enviado");

}

