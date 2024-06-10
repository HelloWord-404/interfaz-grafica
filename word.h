#ifndef WORD_H
#define WORD_H

#include <QDialog>

namespace Ui {
class word;
}

class word : public QDialog
{
    Q_OBJECT

public:
    explicit word(QWidget *parent = nullptr);
    ~word();

private:
    Ui::word *ui;
};

#endif // WORD_H
