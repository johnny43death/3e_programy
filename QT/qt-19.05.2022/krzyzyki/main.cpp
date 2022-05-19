#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>
#include <QMessageBox>

using namespace std;

QPushButton *button[5][7];
QGridLayout *layout = new QGridLayout;

void fill(int x, int y){
    if(button[x][y]->text()=="X"){
        button[x][y]->setText(" ");
    }else{
        button[x][y]->setText("X");
    }
}

void check() {
    int licznik=0;
    for(int i=1;i<4;i++){
        for(int j=1;j<6;j++){
            if(button[i][j]->text()=="X"){
                licznik++;
            };
        }
    }
    if(licznik==15){
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
            button[i][j]->setText(" ");
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
