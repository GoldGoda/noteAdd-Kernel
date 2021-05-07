#ifndef CARDINFORMATIONADD_H
#define CARDINFORMATIONADD_H

#include <QDialog>

namespace Ui {
class cardInformationAdd;
}

class cardInformationAdd : public QDialog
{
    Q_OBJECT

public:
    explicit cardInformationAdd(QWidget *parent = nullptr);
    void setTitle(QString title);
    QString getTitle() const;
    void setContentText(QString text);
    QString getContentText() const;
    ~cardInformationAdd();

private slots:
    void on_crearTutelaBtn_clicked();

    void on_cancelarBtn_clicked();

private:
    Ui::cardInformationAdd *ui;
};

#endif // CARDINFORMATIONADD_H
