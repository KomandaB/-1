#include "backpack.h"
#include "ui_backpack.h"

BackPack::BackPack(QWidget *parent, GameEntites *entites,int ID) :
    QWidget(parent),
    ui(new Ui::BackPack),
    entetis (entites)
{
    ui->setupUi(this);
    connect(ui->go_to_menu, &QPushButton::clicked, this, [=] () { GoToFaitCliked(ID); });//возможно сделать по другому

}

BackPack::~BackPack()
{
    delete ui;

}

void BackPack::ChangeBackpack()
{
    for (int it: entetis->getGoodCharacterById(0)->Inventory ){
        QPushButton* btn = new QPushButton();
        QLabel* lbl = new QLabel("Одеть " +  entetis->getItemById(it)->getName() );
       // btn->setObjectName(QString::number(ToMoveStation[i]));
        connect(btn, &QPushButton::clicked, this, [=] () { DressingUp(it); });//возможно сделать по другому
        ui->gridLayout_2->addWidget(btn, 0 + it, 0);
        ui->gridLayout_2->addWidget(lbl, 0 + it, 1);
    }
}

void BackPack::GoToFaitCliked(int ID)
{
    QLayoutItem *child;
    while ((child = ui->gridLayout_2->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    emit stateChanged(GraphicStates::GAME_MAP,ID);
}

void BackPack::DressingUp(int id)
{

    Item* tempItem = entetis->getItemById(id);
    switch(tempItem->getType()){
    case ItemType::ARMOR:{

    entetis->getGoodCharacterById(0)->addItem(entetis->getGoodCharacterById(0)->get_currentArmor());
    entetis->getGoodCharacterById(0)->set_currentArmor(id);
    entetis->getGoodCharacterById(0)->set_AR( dynamic_cast<Armor*>(tempItem)->get_ArmorPoints());
    break;
    }
     case ItemType::WEAPONS:{
    entetis->getGoodCharacterById(0)->addItem(entetis->getGoodCharacterById(0)->get_currentWearpons());
    entetis->getGoodCharacterById(0)->set_currentWearpons(id);
    entetis->getGoodCharacterById(0)->set_AR( dynamic_cast<Weapons*>(tempItem)->get_WeaponsAttack());
    //еще добавть скорость с Максимом
break;
    }
    }
    //FaitWindow::changeAtatk(FaitWindow::getCurrentMonsterId());
    ChangeBackpack();
}
