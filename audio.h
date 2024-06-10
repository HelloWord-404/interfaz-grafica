#ifndef AUDIO_H
#define AUDIO_H

#include <QDialog>
#include <QMediaPlayer>
#include <QAudioOutput>
class QMediaPlayer;
class QAudioOutput;

namespace Ui {
class audio;
}
class audio : public QDialog
{
    Q_OBJECT

public:

    explicit audio(QWidget *parent = nullptr);
    ~audio();


private slots:
    void on_cancion_clicked();
    void on_cancion_2_clicked();
    void on_cancion_3_clicked();
    void on_cancion_4_clicked();
    void on_cancion_5_clicked();
    void on_cancion_6_clicked();
    void on_play_clicked();
    void on_pause_clicked();




    void on_volumen_valueChanged(int value);

private:
    Ui::audio *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;

};

#endif // AUDIO_H
