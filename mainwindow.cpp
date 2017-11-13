#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamehandler.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->plainTextEdit->setPlainText("начало игры");
    GameHandler:: startNewGame();



}

