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
     connect(ui->toMapBtn, &QPushButton::clicked, this, &DialogWindow::goToMapSlot);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &DialogWindow::goToMenuSlot);
   // connect(ui->var1, &QPushButton::clicked, this, &DialogWindow::nextPhrase);
    connect(ui->responseButton, &QPushButton::clicked, this, [=] () {
     // nextPhrase(entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterPhrase(), entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterName());
        nextPhrase(ID);
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

//void DialogWindow::nextPhrase(QString phrase, QString name)
//{
//    ui->textEdit->setPlainText(name+": "+phrase);
//    ui->responseButton->setText("Привет");
//}

void DialogWindow::nextPhrase(int ID)
{



     ui->textEdit->append(entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterName()+": "+entites->getNonPlayerCharacterById(ID)->getNonPlayerCharacterPhrase());
     if(entites->getNonPlayerCharacterById(ID)->isEndOfPhrases()){
         ui->responseButton->setDisabled(true);
     }else{
//         ui->responseButton->setText(entites->getNonPlayerCharacterById(ID)->getLastPlayerAnswer());
//          ui->textEdit->append("Вы: "+entites->getNonPlayerCharacterById(ID)->getPlayerAnswer());

     }


}
