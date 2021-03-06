#include "gamemap.h"
#include "ui_gamemap.h"

GameMap::GameMap(QWidget *parent, GameEntites *entites) :
    QWidget(parent),
    ui(new Ui::GameMap),
    entetis(entites)
{// int i=0 где мне ее надо передавать и надо ли вообще
    ui->setupUi(this);
    QRegion *region = new QRegion(QRect(10, 1, 20, 20), QRegion::Ellipse);
//    ui->point_1_btn->setMask(*region);
//    ui->point_2_btn->setMask(*region);
//    ui->point_3_btn->setMask(*region);
    connect(ui->point_1_btn, &QPushButton::clicked, this, &GameMap::btn_1_clicked);
    connect(ui->point_2_btn, &QPushButton::clicked, this, &GameMap::btn_2_clicked);
    connect(ui->point_3_btn, &QPushButton::clicked, this, &GameMap::btn_3_clicked);
    //connect(ui->point_3_btn, &QPushButton::clicked, this, i++);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &GameMap::goTuMenuClicked);
int i=0;
    QVector <int> ToMoveStation;//насколько тут правильно
    ToMoveStation=entetis->getStationById(i)->getStationsToMove();
    ui->label->setText("Проговорить с человеком ");
    ui->textEdit->setText(entetis->getStationById(i)->getStationInformation());
    ui->textEdit_2->setText("Ты находишься на станции "+ entetis->getStationById(i)->getStationName());//готовая штука
    //если она есть( добавть иф)

   if (entetis->getStationById(ToMoveStation[0])!=nullptr){
    ui->label_3->setText("Пойти на станцию "+entetis->getStationById(ToMoveStation[0])->getStationName());
   }
   else{//Седлать кнопку невидимой

   }
   if (entetis->getStationById(ToMoveStation[1])!=nullptr){
   ui->label_4->setText("Пойти на станцию "+entetis->getStationById(ToMoveStation[1])->getStationName());
   }
   else{//Седлать кнопку невидимой
    //  ui-> point_4_btn->hide();
   }



}

GameMap::~GameMap()
{
    delete ui;
}

void GameMap::btn_1_clicked()
{
    emit stateChanged(GraphicStates::DIALOG);
}

void GameMap::btn_2_clicked()
{
    emit stateChanged(GraphicStates::DIALOG);
}

void GameMap::btn_3_clicked()
{

    emit stateChanged(GraphicStates::GAME_MAP);
}

void GameMap::goTuMenuClicked()
{
    emit stateChanged(GraphicStates::MAIN_MENU);
}

