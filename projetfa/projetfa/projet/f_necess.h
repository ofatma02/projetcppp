#ifndef F_NECESS_H
#define F_NECESS_H

#include <QDialog>

namespace Ui {
class f_necess;
}

class f_necess : public QDialog
{
    Q_OBJECT

public:
    explicit f_necess(QWidget *parent = nullptr);
    ~f_necess();

private:
    Ui::f_necess *ui;
};

#endif // F_NECESS_H
