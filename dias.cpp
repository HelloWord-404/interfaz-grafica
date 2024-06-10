#include "dias.h"
#include "ui_dias.h"

Dias::Dias(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dias)
{
    ui->setupUi(this);
}

Dias::~Dias()
{
    delete ui;
}
