#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "card.h"
#include <iostream>
#include <QWidget>
#include "templatecard.h"
#include "cardinformationadd.h"

//TOCA UNIR LAS FUNCIONES ADDCARD Y CREATECARD ---->> estas dos practicamente cumplen una misma funcion y a veces chocan causando un bug
templateCard *CreateCard()
{
    int result;
    cardInformationAdd *cia = new cardInformationAdd();
    cia->setWindowFlags(Qt::FramelessWindowHint); //Elimina los bordes de la ventana
    result = cia->exec();
    if(result == QDialog::Rejected)
        return nullptr;
    templateCard *tCard = new templateCard();
    tCard->setTitle(cia->getTitle());
    tCard->setContentText(cia->getContentText());
    return tCard;
}


void MainWindow::addCards()
{
    auto result = CreateCard();
    static int i = 0;
    static int x = 1;
    auto rc = CardContainer->itemAtPosition(i,3);
    if(rc == 0)
    {
        if(result == nullptr)
            return;
       CardContainer->addWidget(result , i ,x);

    }
    else
    {
        i++;
        x=0;
        CardContainer->addWidget(CreateCard() , i ,x);
        std::cout << "LLENO" << std::endl;
    }


    x+=1;

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CardContainer->setHorizontalSpacing(30);
    CardContainer->setVerticalSpacing(30);
    ui->contenedorDeCartasScrollW->setLayout(CardContainer);
    CardContainer->addWidget(addButtonCard, 0, 0);
    connect(addButtonCard, &card::clicked , this , &MainWindow::addCards);
    //connect(ew templateCardn, &templateCard::clicked , this , &MainWindow::addCards);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete CardContainer;
}


void MainWindow::on_btn_inicio_clicked()
{

}
