#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QApplication>
#include <QString>
#include <QMessageBox>
#include <ctime>

using namespace std;

QPushButton *button[3][3];
QGridLayout *layout = new QGridLayout;
int x=2, y=2;

void change(int i, int j){
    bool pusty = false;
    for(int k=-1;k<=1;k+=2){
        if((i+k==x)&&(j==y)) pusty = true;
        if((i==x)&&(j+k==y)) pusty = true;
    }
    if(pusty){
        button[x][y]->setText(button[i][j]->text());
        button[i][j]->setText(" ");
        x=i;
        y=j;
    }
}

void check(){
    bool ok = true;
    int pom=1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            if(pom<9)
                if(button[i][j]->text().toInt()!=pom) ok=false;
            pom++;
        };
    if(ok){
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                button[i][j]->setDisabled(1);
        QMessageBox mb;
        mb.setWindowTitle("wynik");
        mb.setText("WYGRANA");
        mb.exec();
    }
}

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    srand(time(NULL));

    QString liczby[9] = {"1","2","3","4","5","6","7","8"," "};
    for(int i=0;i<50;i++){
        swap(liczby[rand()%8],liczby[rand()%8]);
    }
    int licznik=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            button[i][j] = new QPushButton;
            button[i][j]->setText(liczby[licznik++]);
            button[i][j]->setFixedSize(100,100);
                //button[i][j]->setStyleSheet("width:100px;height:100px;");
            layout->addWidget(button[i][j],i,j,1,1);
            QObject::connect(button[i][j],&QPushButton::clicked,[=](){
                change(i,j);
                check();
            });
        }
    }

    QPushButton *reset = new QPushButton;
    reset->setText("RESET");
    reset->setFixedSize(320,100);
    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addLayout(layout);
    vlayout->addWidget(reset);

    Widget w;
    w.setFixedSize(350,450);
    w.setLayout(vlayout);
    w.show();
    return a.exec();
}
