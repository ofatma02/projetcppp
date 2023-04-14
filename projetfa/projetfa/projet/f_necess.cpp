#include "f_necess.h"
#include "ui_f_necess.h"

f_necess::f_necess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::f_necess)
{
    ui->setupUi(this);
}

f_necess::~f_necess()
{
    delete ui;
}
