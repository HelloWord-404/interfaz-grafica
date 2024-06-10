#include "juegos.h"
#include "ui_juegos.h"

Juegos::Juegos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Juegos)
{
    ui->setupUi(this);
}

Juegos::~Juegos()
{
    delete ui;
}
