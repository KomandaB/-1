#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenu)
{ui->setupUi(this);

//    QPixmap pixmap(":/metro.jpg");
//    ui->label_2->setPixmap(pixmap);
 //  setFixedSize(1280,820);
//    ui->label_2->
 //   connect(ui->)

    connect(ui->newGameBtn, &QPushButton::clicked, this, &MainMenu::startNewGameSlot);
    connect(ui->exitBtn, &QPushButton::clicked, this, [=](){emit closeApp();});
}
MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::startNewGameSlot()
{
    emit stateChanged(GraphicStates::GAME_MAP,0);
}
