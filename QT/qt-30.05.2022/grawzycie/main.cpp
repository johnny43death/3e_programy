#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>
#include <QMessageBox>

using namespace std;

QPushButton *button[10][10];
QGridLayout *layout = new QGridLayout;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int tab[10][10];

    for(int x=0;x<10;x++){
        for(int y=0;y<10;y++){
            tab[x][y]=0;
            button[x][y] = new QPushButton;
            button[x][y]->setFixedSize(60,60);
            button[x][y]->setText(" ");
            layout->addWidget(button[x][y],x,y,1,1);
            QObject::connect(button[x][y],&QPushButton::clicked,[=](){
                if(button[x][y]->text()==" "){
                    int licznik=0;
                    button[x][y]->setText("O");
                    for(int i=x-1; i<3; i+=2){
                        for(int j=y-1; j<3; j+=2){
                            if(button[i][j]->text()=="O"){
                                licznik+=1;
                                tab[i][j]=licznik;
                            }
                        }
                    }
                }else if(button[x][y]->text()=="O"){
                    button[x][y]->setText(" ");
                    for(int i=x-1; i<3; i+=2){
                        for(int j=y-1; j<3; j+=2){
                            if(button[i][j]->text()=="O"){

                            }
                        }
                    }
                }
            });
        }
    }

    QPushButton *start = new QPushButton;
    start->setText("START");
    QObject::connect(start,&QPushButton::clicked,[=](){

    });
    start->setFixedSize(200,100);

    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addLayout(layout);
    vlayout->addWidget(start);

    Widget w;
    w.setFixedSize(650,750);
    w.setLayout(vlayout);
    w.show();
    return a.exec();
}
