#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>
#include <QMessageBox>

using namespace std;

QPushButton *button[5][7];
QGridLayout *layout = new QGridLayout;

void fill(int x, int y){
    if(button[x][y]->text()=="0"){
        button[x][y]->setText("1");
        button[x][y]->setStyleSheet("background-color:yellow;color:yellow;");
    }else if(button[x][y]->text()=="1"){
        button[x][y]->setText("2");
        button[x][y]->setStyleSheet("background-color:green;color:green;");
    }else if(button[x][y]->text()=="2"){
        button[x][y]->setText("3");
        button[x][y]->setStyleSheet("background-color:red;color:red;");
    }else if(button[x][y]->text()=="3"){
        button[x][y]->setText("2");
        button[x][y]->setStyleSheet("background-color:green;color:green;");
    }
}

void check() {
    int licznikY=0,licznikG=0,licznikR=0;
    for(int i=1;i<4;i++){
        for(int j=1;j<6;j++){
            if(button[i][j]->text()=="1"){
                licznikY++;
            } else if(button[i][j]->text()=="2"){
                licznikG++;
            } else if(button[i][j]->text()=="3"){
                licznikR++;
            };
        }
    }
    if(licznikY==15 || licznikG==15 || licznikR==15){
        QMessageBox mb;
        mb.setWindowTitle("wynik");
        mb.setText("WYGRANA");
        mb.exec();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            button[i][j] = new QPushButton;
        }
    }

    for(int i=1;i<4;i++){
        for(int j=1;j<6;j++){
            button[i][j]->setFixedSize(100,100);
            button[i][j]->setStyleSheet("background-color:white;color:white;");
            button[i][j]->setText("0");
            layout->addWidget(button[i][j],i,j,1,1);
            QObject::connect(button[i][j],&QPushButton::clicked,[=](){
                fill(i, j);
                fill(i-1, j);
                fill(i+1, j);
                fill(i, j-1);
                fill(i, j+1);
                check();
            });
        }
    }

    Widget w;
    w.setFixedSize(600,450);
    w.setLayout(layout);
    w.show();
    return a.exec();
}
