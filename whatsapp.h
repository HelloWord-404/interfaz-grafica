#ifndef WHATSAPP_H
#define WHATSAPP_H

#include <QDialog>

namespace Ui {
class whatsapp;
}

class whatsapp : public QDialog
{
    Q_OBJECT

public:
    explicit whatsapp(QWidget *parent = nullptr);
    ~whatsapp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::whatsapp *ui;
};

#endif // WHATSAPP_H
