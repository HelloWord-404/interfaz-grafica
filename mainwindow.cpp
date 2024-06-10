#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "audio.h"
#include "Dias.h"
#include "House.h"
#include "Juegos.h"
#include "calculadora.h"
#include "appstore.h"
#include "whatsapp.h"
#include "word.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_audio = new audio(this);
    m_Dias = new Dias(this);
    m_House = new House(this);
    m_Juegos = new Juegos(this);
    m_Calculadora = new Calculadora(this);
    m_apps = new appstore(this);
    chat = new whatsapp(this);
    m_word = new word(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_house_clicked()
{
    m_House->show();
}


void MainWindow::on_juegos_clicked()
{
    m_Juegos->show();
}


void MainWindow::on_music_clicked()
{
    m_audio->show();
}


void MainWindow::on_calendario_clicked()
{
    m_Dias->show();
}


void MainWindow::on_calculadora_clicked()
{
    m_Calculadora->show();
}


void MainWindow::on_app_clicked()
{
    m_apps->show();
    //ui->ocultar->setVisible(false);
    //ui->chatear->setEnabled(false);
    if(m_apps->isVisible())
        ui->ocultar->setVisible(false);

}



void MainWindow::on_chatear_clicked()
{
    chat->show();
}


void MainWindow::on_word_clicked()
{
    m_word->show();
}

