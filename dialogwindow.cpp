#include "dialogwindow.h"
#include "ui_dialogwindow.h"

DialogWindow::DialogWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogWindow)
{
    ui->setupUi(this);

     ui->textEdit->setPlainText("rfr ndjb ltkf&");
     connect(ui->toMapBtn, &QPushButton::clicked, this, &DialogWindow::goToMapSlot);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &DialogWindow::goToMenuSlot);
    connect(ui->var1, &QPushButton::clicked, this, &DialogWindow::nextPhrase);

}

DialogWindow::~DialogWindow()
{
    delete ui;
}

void DialogWindow::goToMenuSlot()
{
    emit stateChanged(GraphicStates::MAIN_MENU);
}

void DialogWindow::goToMapSlot()
{
    emit stateChanged(GraphicStates::GAME_MAP);
}

void DialogWindow::nextPhrase()
{
    if(!isListOfPhrasesEmpty())
    
    
    ui->textEdit->setPlainText("");
}

