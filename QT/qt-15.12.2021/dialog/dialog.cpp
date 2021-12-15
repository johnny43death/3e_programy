#include "dialog.h"
#include "ui_dialog.h"
#include <QHBoxLayout>
#include <QPushButton>

Dialog::Dialog()
{
    createHorizontalGroupBox();
    createVerticalGroupBox();
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(horizontalGroupBox);
    mainLayout->addWidget(verticalGroupBox);
    setLayout(mainLayout);
}

void Dialog::createHorizontalGroupBox(){
    horizontalGroupBox = new QGroupBox();
    QHBoxLayout *layout = new QHBoxLayout;
    for(int i=1;i<5;i++){
        //funkcja tr() służy to określania jaki tekst jest na przycisku
        button[i] = new QPushButton(tr("przycisk %1").arg(i));
        layout->addWidget(button[i]);
    }
    horizontalGroupBox->setLayout(layout);
}

void Dialog::createVerticalGroupBox(){
    verticalGroupBox = new QGroupBox();
    QVBoxLayout *layout2 = new QVBoxLayout;

    spinbox = new QSpinBox();
    zatwierdz = new QPushButton(tr("zatwierdź"));
    layout2->addWidget(zatwierdz);
    layout2->addWidget(spinbox);
    verticalGroupBox->setLayout(layout2);
}
