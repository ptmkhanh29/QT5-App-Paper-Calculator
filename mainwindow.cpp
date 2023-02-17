#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString daiString = ui->dai->text();
    double chieuDai = daiString.toDouble();
    QString rongString = ui->rong->text();
    double chieuRong = rongString.toDouble();

    QString gsm = ui->gsm->text();
    double gsmSo = gsm.toDouble();

    // So gam
    double khoiLuong = (gsmSo*chieuDai*chieuRong)/10000;
    QString myString = QString::number(khoiLuong);
    ui->gamPer->setText(myString);
    //
    QString weigh = ui->weight->text();
    double soKg = weigh.toDouble();
    QString kgString = QString::number(soKg);
    ui->weight_1->setText(kgString);

    double soTo = (soKg*1000)/khoiLuong;
    QString persString = QString::number(soTo,'f', 4);
    ui->Pers->setText(persString);

    // Ream
    QString ream = ui->reamPers->text();
    double reamSo = ream.toDouble();
    QString reamDisplay = QString::number(reamSo);
    ui->ream->setText(reamDisplay);

    double reamPer = (reamSo*khoiLuong)/1000;
    QString reamPerDisplay = QString::number(reamPer);
    ui->Pers_2->setText(reamPerDisplay);
}

