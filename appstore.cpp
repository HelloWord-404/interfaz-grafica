#include "appstore.h"
#include "ui_appstore.h"
#include "whatsapp.h"
//#include "mainwindow.h"
#include "word.h"
#include "ui_mainwindow.h"

appstore::appstore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::appstore)
{
    ui->setupUi(this);
    chat = new whatsapp(this);
    documento = new word(this);
    //ocultar = new MainWindow(this);
   // app1 = new QPushButton("Boton 1");
    //escritorio = new MainWindow(this);
}

appstore::~appstore()
{
   // connect(app1,SIGNAL(clicked()), SLOT(on_app1_clicked()));
    delete ui;
}

void appstore::on_app1_clicked()
{
    chat->show();
    //Ui::MainWindow ui;
   // ui.ocultar->setVisible(false);



}


void appstore::on_app2_clicked()
{
    documento->show();
}

