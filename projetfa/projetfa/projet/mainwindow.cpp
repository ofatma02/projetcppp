#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QSqlQuery>
#include "QMessageBox"
#include <QString>
#include "global.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::validateEmployee(QString nom, int id) {
        QSqlQuery query;
        query.prepare("SELECT COUNT(*) FROM EMPLOYEE WHERE  NOM = ? AND IDENTIFIANT = ?");
        query.addBindValue(nom);
        query.addBindValue(id);
        query.exec();

        if (query.next()) {
            int count = query.value(0).toInt();
            if (count == 1) {
                return true;
            }
        }
        return false;
}


void MainWindow::on_login_clicked()
{
        QString name = ui->lineEdit_nom->text();
        int password = ui->lineEdit_mdp->text().toInt();
        g_loginInfo.username = ui->lineEdit_nom->text();
        g_loginInfo.id = ui->lineEdit_mdp->text().toInt();

         if (validateEmployee(name, password))
         {
              menu m;
              m.setModal(true);
              m.exec();
                // Allow access to the application
         } else
         {
              QMessageBox::warning(this, "Error", "Invalid name or password.");
                // Deny access to the application
         }






}

