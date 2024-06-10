#include "word.h"
#include "ui_word.h"

word::word(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::word)
{
    ui->setupUi(this);
}

word::~word()
{
    delete ui;
}
