#include "cardinformationadd.h"
#include "ui_cardinformationadd.h"
#include <QGraphicsDropShadowEffect>
cardInformationAdd::cardInformationAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cardInformationAdd)
{

    ui->setupUi(this);
    setAttribute(Qt::WA_TranslucentBackground); //enable MainWindow to be transparent
    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    ui->widget->setGraphicsEffect(effect);

}

cardInformationAdd::~cardInformationAdd()
{
    delete ui;
}

void cardInformationAdd::setTitle(QString title)
{
    ui->titulo->setText(title);
}

QString cardInformationAdd::getTitle() const
{
    return ui->titulo->text();
}
void cardInformationAdd::setContentText(QString text)
{
    ui->contenido->setText(text);
}
QString cardInformationAdd::getContentText() const
{

    return ui->contenido->toPlainText();
}


void cardInformationAdd::on_crearTutelaBtn_clicked()
{
   accept();
}

void cardInformationAdd::on_cancelarBtn_clicked()
{
 reject();
}
