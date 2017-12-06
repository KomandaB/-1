#include "dialogwindow.h"
#include "ui_dialogwindow.h"
#include "nonplayercharacter.h"
#include "QStringList"

DialogWindow::DialogWindow(QWidget *parent, GameEntites *entites, int ID) :
    QWidget(parent),
    ui(new Ui::DialogWindow)
{
    ui->setupUi(this);

     ui->textEdit->setPlainText("rfr ndjb ltkf&");
     connect(ui->toMapBtn, &QPushButton::clicked, this, &DialogWindow::goToMapSlot);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &DialogWindow::goToMenuSlot);
   // connect(ui->var1, &QPushButton::clicked, this, &DialogWindow::nextPhrase);
    connect(ui->var1, &QPushButton::clicked, this, [=] () {
        nextPhrase(entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterPhrase());
    });

}

DialogWindow::~DialogWindow()
{
    delete ui;
}

void DialogWindow::goToMenuSlot()
{
    emit stateChanged(GraphicStates::MAIN_MENU,0);
}

void DialogWindow::goToMapSlot()
{
    emit stateChanged(GraphicStates::GAME_MAP,0);
}

void DialogWindow::nextPhrase(QString phrase)
{
    ui->textEdit->setPlainText(phrase);
}

