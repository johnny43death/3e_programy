#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString email, password, password_rep;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_enter_clicked()
{
    do {
        email = ui->email->text();
        ui->out->setText("Nieprawidłowy adres e-mail");
        do {

        } while ()
    } while (!email.contains("@"));

}
