#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pierwszySlider_valueChanged(int value){
    ui->wynikLabel->setNum(value);
}

void MainWindow::on_zatwierdzButton_clicked(){
    QString zawartoscLineEdita = ui->poleLineEdit->text();
    int wartoscSlidera = ui->pierwszySlider->value();

    ui->label2->setText(zawartoscLineEdita);
    ui->label3->setNum(wartoscSlidera);

    wartoscProgressBara++;
    ui->pierwszyProgressBar->setValue(wartoscProgressBara);
    if(wartoscProgressBara >= 2){
        ui->zatwierdzButton->setDisabled(true);
    }
}
