#include "stationwindow.h"
#include "ui_gamemap.h"

StationWindow::StationWindow(QWidget *parent, GameEntites *entites, int ID) :
    QWidget(parent),
    ui(new Ui::GameMap),
    entetis(entites)
{
    ui->setupUi(this);
   // QRegion *region = new QRegion(QRect(10, 1, 20, 20), QRegion::Ellipse);
//    ui->point_1_btn->setMask(*region);
//    ui->point_2_btn->setMask(*region);
//    ui->point_3_btn->setMask(*region);
   //connect(ui->point_2_btn, &QPushButton::clicked, this, &StationWindow::btn_2_clicked);
  //  connect(ui->point_3_btn, &QPushButton::clicked, this, &StationWindow::btn_3_clicked);
    connect(ui->toMenuBtn, &QPushButton::clicked, this, &StationWindow::goTuMenuClicked);



}

StationWindow::~StationWindow()
{
    delete ui;
}

void StationWindow::ChangeStation(int newId)
{
    //удаление и добавление
    connect(ui->point_1_btn, &QPushButton::clicked, this, [=](){btn_1_clicked(newId);});

    QVector <int> ToMoveStation;//временный вектор станций на которые мы можем пойти
    ToMoveStation=entetis->getStationById(newId)->getStationsToMove();//.at(0);
    ui->label->setText("Поговорить с человеком");
    ui->textEdit->setText(entetis->getStationById(newId)->getStationInformation());
    ui->textEdit_2->setText("Ты находишься на станции "+ entetis->getStationById(newId)->getStationName());//готовая штука
    ui->StationBackground->setStyleSheet("border-image: url(:/start.png);");//нужно сделать динамическое изменеие фона
    for (auto it : entetis->getGoodCharacterById(0)->getInventory()){
        Item* tempItem = entetis->getItemById(it);
        switch(tempItem->getType()){
        case ItemType::ARMOR:{
            qDebug() << "armor points:" << dynamic_cast<Armor*>(tempItem)->get_ArmorPoints();
            break;
        }
        case ItemType::WEAPONS:{
            qDebug() << "Attack points:" << dynamic_cast<Weapons*>(tempItem)->get_WeaponsAttack();
            break;
        }
        }

    }
    ui->textEdit_2->setText( ui->textEdit_2->toPlainText()+ "\n"+" Здоровье персонажа: "  +QString::number(entetis->getGoodCharacterById(0)->get_HP()));

    if(newId==4){
        QPushButton* btn = new QPushButton();
        QLabel* lbl = new QLabel("Подняться наверх" );
        connect(btn,&QPushButton::clicked,this,&StationWindow::winClicked);

        ui->gridLayout_2->addWidget(btn, 0 , 0);
        ui->gridLayout_2->addWidget(lbl, 0 , 1);

    }
    else{



    for (int i(0); i< ToMoveStation.size(); i++){
        QPushButton* btn = new QPushButton();
        QLabel* lbl = new QLabel("Пойти на станцию " +  entetis->getStationById(newId+1+i)->getStationName() );
        btn->setObjectName(QString::number(ToMoveStation[i]));
        connect(btn, &QPushButton::clicked, this, [=] () { btn_3_clicked(ToMoveStation[i]); });//возможно сделать по другому
        ui->gridLayout_2->addWidget(btn, 0 + i, 0);
        ui->gridLayout_2->addWidget(lbl, 0 + i, 1);

    }

}



}
//присваивание хорошим людям станции будет происходить прям здесь(выше)
void StationWindow::btn_1_clicked(int ID)
{
    QLayoutItem *child;
    while ((child = ui->gridLayout_2->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }

    qDebug()<<ID<<"IID";
    emit stateChanged(GraphicStates::DIALOG,ID);
}

void StationWindow::btn_2_clicked()//не используется
{
    QLayoutItem *child;
    while ((child = ui->gridLayout_2->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    emit stateChanged(GraphicStates::DIALOG,0);
}

void StationWindow::btn_3_clicked(int id)
{

    //qDebug() << QObject::sender()->objectName();
    QLayoutItem *child;
    while ((child = ui->gridLayout_2->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    emit stateChanged(GraphicStates::FAITWINDOW,id);//довавить id


}

void StationWindow::winClicked()
{
   //QDebug()<<"HERE";
    QLayoutItem *child;
    while ((child = ui->gridLayout_2->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    emit stateChanged(GraphicStates::WINGAME,1);// 1 потому что выйграли
}

void StationWindow::goTuMenuClicked()
{
    QLayoutItem *child;
    while ((child = ui->gridLayout_2->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    emit stateChanged(GraphicStates::MAIN_MENU,0);
}

