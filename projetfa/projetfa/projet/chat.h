#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QAbstractSocket>
#include <QTcpSocket>

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();
     QTcpSocket *m_pEmployeeSocket;
     void debug(const QString& message);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_connect_clicked();

    void on_pushButton_disconnect_clicked();

    void on_pushButton_send_clicked();

    void displayError(QAbstractSocket::SocketError socketError);



    void on_label_3_linkActivated(const QString &link);

private:
    Ui::chat *ui;
    QString m_recipient;
    QTcpSocket *m_socket;

};

#endif // CHAT_H
