#include "house.h"
#include "ui_house.h"
#include "reconocimiento.cpp"

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>


House::House(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::House)
{
    ui->setupUi(this);
}

House::~House()
{
    delete ui;
}

void House::on_siri_audio_clicked()
{
    system("C:\\proyecto\\house_life_tech\\ia.py");

    //system("C:\\proyecto\\house_life_tech\\output\reconocimiento.exe");

    string text;
    ifstream archivo;
    string texto;
    archivo.open("C:\\proyecto\\house_life_tech\\output\\grabacion.txt",ios::in); //abrir el archivo en modo lectura
    if (archivo.fail()){//verificar si a habido errores
        ui->texto->setText("No se pudo abrir el archivo");
    }
    while (!archivo.eof()){//mientras no sea el final del archivo
        getline(archivo,texto);//leer linea por linea y guardarla en la variable texto
        //cout<<texto<<endl;
        if(texto.size()>2)
            text=texto;
    }
    //QString ::fromStdString(text);
    ui->texto->setText(QString ::fromStdString(text));
    //cerramos el archivo
    archivo.close();



    if(ui->texto->text()==" encender bombillo Ártico "){
        ui->bombillo->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.017, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.340909 rgba(0, 0, 0, 255), stop:0.653409 rgba(255, 0, 0, 255), stop:0.659091 rgba(255, 255, 0, 255), stop:0.67 rgba(255, 255, 0, 255));");
    }
    else if(ui->texto->text()==" encender bombillo sala "){
        ui->bombillo_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.017, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.340909 rgba(0, 0, 0, 255), stop:0.653409 rgba(255, 0, 0, 255), stop:0.659091 rgba(255, 255, 0, 255), stop:0.67 rgba(255, 255, 0, 255));");
    }
    else if(ui->texto->text()==" encender bombillo habitación uno "){
        ui->bombillo_3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.017, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.340909 rgba(0, 0, 0, 255), stop:0.653409 rgba(255, 0, 0, 255), stop:0.659091 rgba(255, 255, 0, 255), stop:0.67 rgba(255, 255, 0, 255));");
    }
    else if(ui->texto->text()==" encender bombillo habitación dos "){
        ui->bombillo_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.017, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.340909 rgba(0, 0, 0, 255), stop:0.653409 rgba(255, 0, 0, 255), stop:0.659091 rgba(255, 255, 0, 255), stop:0.67 rgba(255, 255, 0, 255));");
    }
    else if(ui->texto->text()==" encender bombillo baño "){
        ui->bombillo_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.017, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.340909 rgba(0, 0, 0, 255), stop:0.653409 rgba(255, 0, 0, 255), stop:0.659091 rgba(255, 255, 0, 255), stop:0.67 rgba(255, 255, 0, 255));");
    }
    else if(ui->texto->text()==" encender bombillo cocina "){
        ui->bombillo_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.017, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.340909 rgba(0, 0, 0, 255), stop:0.653409 rgba(255, 0, 0, 255), stop:0.659091 rgba(255, 255, 0, 255), stop:0.67 rgba(255, 255, 0, 255));");
    }



}

