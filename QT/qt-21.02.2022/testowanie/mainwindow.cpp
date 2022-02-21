#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

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

void MainWindow::on_dodajBtn_clicked()
{
    QString osoby = ui->osoby->text();

    QString imie = ui->imie->text();
    QString nazwisko = ui->nazwisko->text();
    QString miasto = ui->miasto->text();

    imie[0].toUpper();
    nazwisko[0].toUpper();
    miasto[0].toUpper();

    if(imie == "" || nazwisko == "" || miasto == ""){
        QMessageBox::information(this, "BŁĄD", "Przynajmniej jedno z pól jest puste.", QMessageBox::Ok);
    }

    ui->osoby->setText(osoby + "\n" + imie + " " + nazwisko + ", " + miasto);

    ui->imie->setText("");
    ui->nazwisko->setText("");
    ui->miasto->setText("");
}
