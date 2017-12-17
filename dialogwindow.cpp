#include "dialogwindow.h"
#include "ui_dialogwindow.h"
#include "nonplayercharacter.h"
#include "QStringList"

DialogWindow::DialogWindow(QWidget *parent, GameEntites *entites, int ID) :
    QWidget(parent),
    ui(new Ui::DialogWindow),
    entites(entites)
{
    ui->setupUi(this);
    ui->textEdit->setPlainText("...");

    connect(ui->toMapBtn, &QPushButton::clicked, this, [=](){goToMapSlot(currentChacterID);});

    connect(ui->toMenuBtn, &QPushButton::clicked, this, &DialogWindow::goToMenuSlot);

    connect(ui->responseButton, &QPushButton::clicked, this, [=] () {
        nextPhrase(currentChacterID);
    });

}


DialogWindow::~DialogWindow()
{
    delete ui;
}

void DialogWindow::ChangeCharacterId(int ID)
{
    currentChacterID=ID;
}

void DialogWindow::goToMenuSlot()
{
    emit stateChanged(GraphicStates::MAIN_MENU,0);
}

void DialogWindow::goToMapSlot(int ID)
{
    emit stateChanged(GraphicStates::GAME_MAP,ID);
}

void DialogWindow::nextPhrase(int ID)
{

    if(isJustStarted){

        if(!entites->getNonPlayerCharacterById(ID)->isEndOfPhrases()){
            ui->textEdit->append(entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterName()+": "+entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterPhrase());
        }

        if(!entites->getNonPlayerCharacterById(ID)->isEndOfAnswers()){
            if(!entites->getNonPlayerCharacterById(ID)->isEndOfAnswers()){
                ui->responseButton->setText(entites->getNonPlayerCharacterById(ID)->getLastPlayerAnswer());
            }
        }
        isJustStarted = false;
    }
    else{
        if(!entites->getNonPlayerCharacterById(ID)->isEndOfAnswers()){
            ui->textEdit->append("Вы: "+entites->getNonPlayerCharacterById(ID)->getPlayerAnswer());
        }
        if(!entites->getNonPlayerCharacterById(ID)->isEndOfPhrases()){
            ui->textEdit->append(entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterName()+": "+entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterPhrase());
        }
        if(!entites->getNonPlayerCharacterById(ID)->isEndOfAnswers()){
            ui->responseButton->setText(entites->getNonPlayerCharacterById(ID)->getLastPlayerAnswer());
        }else{
            isJustStarted = true;
        }
    }

}

void DialogWindow::showEvent(QShowEvent *  /* event */)
{
    ui->textEdit->setPlainText("...");
    ui->responseButton->setText("Поговорить");
}
