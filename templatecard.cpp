#include "templatecard.h"
#include "ui_templatecard.h"
#include <QPushButton>

templateCard::templateCard(QWidget *parent) :
    QPushButton(parent),
    ui(new Ui::templateCard)
{
    ui->setupUi(this);
}


void templateCard::setTitle(QString title)
{
    ui->titleCard->setText(title);
}

QString templateCard::getTitle() const
{
    return ui->titleCard->text();
}
void templateCard::setContentText(QString text)
{
    ui->contentCard->setText(text);
}
QString templateCard::getContentText() const
{

    return ui->contentCard->text();
}

templateCard::~templateCard()
{
    delete ui;
}
