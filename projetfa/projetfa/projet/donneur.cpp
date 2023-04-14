#include "donneur.h"
#include "ui_donneur.h"

donneur::donneur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::donneur)
{
    ui->setupUi(this);
}

donneur::~donneur()
{
    delete ui;
}
