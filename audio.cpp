#include "audio.h"
#include "ui_audio.h"
#include <QMediaPlayer>
#include <QFileDialog>
#include <QAudioOutput>
audio::audio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::audio)
{
    ui->setupUi(this);
    player = new QMediaPlayer;
    audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);

    connect(player,&QMediaPlayer::positionChanged,[&](qint64 pos){
     ui->progreso->setValue(pos);
    });



}


    //connect(player, QMediaPlayer::positionChanged())


audio::~audio()
{
    delete ui;
}

//void QMediaPlayer::positionChanged(qint64 pos);

void audio::on_cancion_clicked()
{
   player->setSource(QUrl::fromLocalFile("C:\\proyecto\\house_life_tech\\musica\\Y2meta.app - Dread Mar I - Hoja en Blanco (Video Oficial) (128 kbps).mp3"));
   audioOutput->setVolume(100);
}

void audio::on_play_clicked()
{
   player->play();
}

void audio::on_pause_clicked()
{
   player->pause();
}

void audio::on_cancion_2_clicked()
{
   player->setSource(QUrl::fromLocalFile("C:\\proyecto\\house_life_tech\\musica\\Y2meta.app - Eladio Carrión - Mbappe (Video Oficial) _ SEN2 KBRN VOL. 2 (128 kbps).mp3"));
}


void audio::on_cancion_3_clicked()
{
   player->setSource(QUrl::fromLocalFile("C:\\proyecto\\house_life_tech\\musica\\Y2meta.app - BAD BUNNY - AMORFODA (Video Oficial) (128 kbps).mp3"));

}


void audio::on_cancion_4_clicked()
{
   player->setSource(QUrl::fromLocalFile("C:\\proyecto\\house_life_tech\\musica\\Y2meta.app - WOS - ARRANCARMELO (Video Oficial) (128 kbps).mp3"));

}


void audio::on_cancion_5_clicked()
{
   player->setSource(QUrl::fromLocalFile("C:\\proyecto\\house_life_tech\\musica\\Y2meta.app - Santa Fe Klan, Neto Peña, Yoss Bones - Debo Entender (128 kbps).mp3"));

}


void audio::on_cancion_6_clicked()
{
   player->setSource(QUrl::fromLocalFile("C:\\proyecto\\house_life_tech\\musica\\Y2meta.app - Vicente Fernández - Un Millon De Primaveras (128 kbps).mp3"));

}


void audio::on_volumen_valueChanged(int value)
{
    audioOutput->setVolume(value);
}

