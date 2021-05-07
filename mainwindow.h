#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include "card.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void addCards();
    ~MainWindow();

private slots:
    void on_btn_inicio_clicked();

private:
    Ui::MainWindow *ui;
    QGridLayout *CardContainer = new QGridLayout();
    card *addButtonCard = new card(this);


};
#endif // MAINWINDOW_H
