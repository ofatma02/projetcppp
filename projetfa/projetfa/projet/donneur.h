#ifndef DONNEUR_H
#define DONNEUR_H

#include <QDialog>

namespace Ui {
class donneur;
}

class donneur : public QDialog
{
    Q_OBJECT

public:
    explicit donneur(QWidget *parent = nullptr);
    ~donneur();

private:
    Ui::donneur *ui;
};

#endif // DONNEUR_H
