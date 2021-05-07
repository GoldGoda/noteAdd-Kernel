#include "card.h"
#
card::card(QWidget *parent) :
    QPushButton(parent)
{
    this->setMinimumSize(271 , 311);
    this->setMaximumSize(271 , 311);
       this->setStyleSheet("QWidget{\
background-color: rgb(226, 226, 226);\
padding-bottom: 250px;\
border-radius: 30px;\
background-image: url(:/icon/resource/add.png);\
background-repeat: none;\
background-position: center;\
}\
QWidget:hover{\
    background-color: rgb(199, 199, 199);\
}");

}
