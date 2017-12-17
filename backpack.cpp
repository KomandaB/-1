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

void BackPack::ChangeBackpack(int personID)
{
    for (int i(0); i< entetis->getGoodCharacterById(0)->getInventory().size(); i++){
        QPushButton* btn = new QPushButton();
        QLabel* lbl = new QLabel("Пойти на станцию " +  entetis->getItemById(i)->getName() );
       // btn->setObjectName(QString::number(ToMoveStation[i]));
        connect(ui->go_to_menu, &QPushButton::clicked, this, [=] () { GoToFaitCliked(personID); });//возможно сделать по другому
        ui->gridLayout->addWidget(btn, 0 + i, 0);
        ui->gridLayout->addWidget(lbl, 0 + i, 1);
    }
}

void BackPack::GoToFaitCliked(int ID)
{
    QLayoutItem *child;
    while ((child = ui->gridLayout->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    emit stateChanged(GraphicStates::FAITWINDOW,ID);
}
