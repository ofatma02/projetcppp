#ifndef EVENT_H
#define EVENT_H

#include <QDialog>

namespace Ui {
class event;
}

class event : public QDialog
{
    Q_OBJECT

public:
    explicit event(QWidget *parent = nullptr);
    ~event();

private:
    Ui::event *ui;
};

#endif // EVENT_H
