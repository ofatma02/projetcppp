#include "event.h"
#include "ui_event.h"

event::event(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::event)
{
    ui->setupUi(this);
}

event::~event()
{
    delete ui;
}
