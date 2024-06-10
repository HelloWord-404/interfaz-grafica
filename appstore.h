#ifndef APPSTORE_H
#define APPSTORE_H

#include <QDialog>

class whatsapp;
class word;
class MainWindow;

//class QPushButton;

namespace Ui {
class appstore;
}

class appstore : public QDialog
{
    Q_OBJECT

public:
    explicit appstore(QWidget *parent = nullptr);
    ~appstore();

private slots:
    void on_app1_clicked();

    void on_app2_clicked();

private:
    Ui::appstore *ui;
    whatsapp *chat;
    word *documento;
    MainWindow *escritorio;
};

#endif // APPSTORE_H
