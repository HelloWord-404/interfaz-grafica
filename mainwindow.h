#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



class audio;
class Dias;
class House;
class Juegos;
class Calculadora;
class appstore;
class whatsapp;
class word;


namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();
    Ui::MainWindow *ui;

private slots:
    void on_house_clicked();
    void on_juegos_clicked();
    void on_music_clicked();
    void on_calendario_clicked();
    void on_calculadora_clicked();
    void on_volumen_valueChanged();
    void on_app_clicked();
    void on_chatear_clicked();
    void on_word_clicked();

private:
    appstore *m_apps;
    audio *m_audio;
    Dias *m_Dias;
    House *m_House;
    Juegos *m_Juegos;
    Calculadora *m_Calculadora;
    whatsapp *chat;
    word *m_word;
};
#endif // MAINWINDOW_H
