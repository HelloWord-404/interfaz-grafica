#ifndef HOUSE_H
#define HOUSE_H

#include <QDialog>

namespace Ui {
class House;
}

class House : public QDialog
{
    Q_OBJECT

public:
    explicit House(QWidget *parent = nullptr);
    ~House();

private slots:
    void on_pushButton_clicked();

    void on_siri_audio_clicked();

private:
    Ui::House *ui;
};

#endif // HOUSE_H
