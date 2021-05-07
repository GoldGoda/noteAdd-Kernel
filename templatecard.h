#ifndef TEMPLATECARD_H
#define TEMPLATECARD_H

#include <QPushButton>

namespace Ui {
class templateCard;
}

class templateCard : public QPushButton
{
    Q_OBJECT

public:
    explicit templateCard(QWidget *parent = nullptr);
    void setTitle(QString title);
    QString getTitle() const;
    void setContentText(QString text);
    QString getContentText() const;
    ~templateCard();

private:
    Ui::templateCard *ui;
};

#endif // TEMPLATECARD_H
