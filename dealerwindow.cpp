#include "dealerwindow.h"
#include "ui_dealerwindow.h"

DealerWindow::DealerWindow(QWidget *parent,GameEntites *entites,int ID) :
    QWidget(parent),
    ui(new Ui::DealerWindow),
       entetis(entites),
       currentDealer(ID)
{
    ui->setupUi(this);
    connect(ui->go_to_station, &QPushButton::clicked, this, [=] () { GoToStation(ID); });
}

DealerWindow::~DealerWindow()
{
    delete ui;
}

void DealerWindow::GoToStation(int ID)
{
    QLayoutItem *child;
    while ((child = ui->gridLayout->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    emit stateChanged(GraphicStates::GAME_MAP,currentDealer);
}

void DealerWindow::DressingUp(int id)
{

    Item* tempItem = entetis->getItemById(id);
    switch(tempItem->getType()){
    case ItemType::ARMOR:{

    entetis->getGoodCharacterById(0)->addItem(entetis->getGoodCharacterById(0)->get_currentArmor());
    entetis->getGoodCharacterById(0)->set_currentArmor(id);
    entetis->getGoodCharacterById(0)->set_AR( dynamic_cast<Armor*>(tempItem)->get_ArmorPoints());
    entetis->getGoodCharacterById(0)->set_ammunition(entetis->getGoodCharacterById(0)->get_ammunition()-entetis->getItemById(id)->getPrice());


    break;
    }
     case ItemType::WEAPONS:{
    entetis->getGoodCharacterById(0)->addItem(entetis->getGoodCharacterById(0)->get_currentWearpons());
    entetis->getGoodCharacterById(0)->set_currentWearpons(id);
    entetis->getGoodCharacterById(0)->set_AR( dynamic_cast<Weapons*>(tempItem)->get_WeaponsAttack());
    entetis->getGoodCharacterById(0)->set_ammunition(entetis->getGoodCharacterById(0)->get_ammunition()-entetis->getItemById(id)->getPrice());
    //еще добавть скорость с Максимом
break;
    }
    case ItemType::BANDAGE:{
         entetis->getGoodCharacterById(0)->addItem(0);//кладем в рюкзак аптечку
         entetis->getGoodCharacterById(0)->set_ammunition(entetis->getGoodCharacterById(0)->get_ammunition()-entetis->getItemById(id)->getPrice());//уменьшаем коичкство денег

    }
    }
    //FaitWindow::changeAtatk(FaitWindow::getCurrentMonsterId());
    ChangeDealer(currentDealer);
}

void DealerWindow::ChangeDealer(int id)
{
    for (int it: entetis->getDealerById(id)->getInventory() ){
        QPushButton* btn = new QPushButton();
        QLabel* lbl = new QLabel("Купить " +  entetis->getItemById(it)->getName() );
       // btn->setObjectName(QString::number(ToMoveStation[i]));
        connect(btn, &QPushButton::clicked, this, [=] () { DressingUp(it); });//возможно сделать по другому
        ui->gridLayout->addWidget(btn, 0 + it, 0);
        ui->gridLayout->addWidget(lbl, 0 + it, 1);
    }
}
