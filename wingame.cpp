#include "wingame.h"
#include "ui_wingame.h"

WinGame::WinGame(QWidget *parent, int flag) :
    QMainWindow(parent),
    ui(new Ui::WinGame)
{

}

WinGame::~WinGame()
{
    delete ui;
}

void WinGame::changeWin(int flag)
{
    ui->setupUi(this);
    if (flag==1){
        ui->label->setText("Вы победили!!!");
    }
    else{ ui->label->setText("Сожалем, вы проиграли( ");
    }
    connect(ui->Go_To_Menu,&QPushButton::clicked,this,&WinGame::goTuMenuClicked);
}

void WinGame::goTuMenuClicked()
{
    emit stateChanged(GraphicStates::MAIN_MENU,0);
}

