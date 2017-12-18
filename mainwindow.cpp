#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    setFixedSize(1280,720);
    gameHandler=new GameHandler;

    dialogWindow = new DialogWindow(this,gameHandler->getEntites());
    faitWindow=new FaitWindow(this,gameHandler->getEntites());
    stationWindow = new StationWindow(this,gameHandler->getEntites());
    mainMenu = new MainMenu(this);
    winGame=new WinGame(this);
    dealerWindow= new DealerWindow(this,gameHandler->getEntites());
    prolog =new Prolog(this,gameHandler->getEntites());
    backPack =new BackPack(this, gameHandler->getEntites());
    windowHandler = new QStackedWidget(this);
    windowHandler->addWidget(mainMenu);
    windowHandler->addWidget(prolog);
    windowHandler->addWidget(stationWindow);
    windowHandler->addWidget(dealerWindow);
    windowHandler->addWidget(dialogWindow);
    windowHandler->addWidget(faitWindow);
    windowHandler->addWidget(backPack);
    windowHandler->addWidget(winGame);
    this->setCentralWidget(windowHandler);
    connect(dialogWindow, &DialogWindow::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(dealerWindow, &DealerWindow::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(faitWindow,&FaitWindow::stateChanged,this,&MainWindow::stateChangedSlot);
    connect(stationWindow, &StationWindow::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(mainMenu, &MainMenu::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(winGame,&WinGame::stateChanged,this,&MainWindow::stateChangedSlot);
    connect(prolog,&Prolog::stateChanged,this,&MainWindow::stateChangedSlot);
    connect(backPack,&BackPack::stateChanged,this,&MainWindow::stateChangedSlot);
    connect(mainMenu, &MainMenu::closeApp, this, &MainWindow::close);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stateChangedSlot(GraphicStates newState, int ID)
{
    currentState = newState;
    switch(currentState){
    case GraphicStates::MAIN_MENU: {
        windowHandler->setCurrentWidget(mainMenu);
        break;
    }
    case GraphicStates::GAME_MAP: {
        stationWindow->ChangeStation(ID);
        windowHandler->setCurrentWidget(stationWindow);
        break;
    }
    case GraphicStates::DIALOG: {
        dialogWindow->ChangeCharacterId(ID);
        windowHandler->setCurrentWidget(dialogWindow);
        break;
    }
    case GraphicStates::DIALERWINDOW:{
        dealerWindow->ChangeDealer(ID);
        windowHandler->setCurrentWidget(dealerWindow);
        break;
    }
    case GraphicStates::WINGAME: {
        winGame->changeWin(ID);
        windowHandler->setCurrentWidget(winGame);
        break;
    }
    case GraphicStates::FAITWINDOW: {


    // for(int i=0;i<=(gameHandler->getEntites()->BadCharactersMap.size());i++){
    // gameHandler->getEntites()->getBadCharacterById(0)->set_ToStationId(ID);
    // }
    faitWindow->changeAtatk(ID);
    //faitWindow->get_IdStation(ID);//его можно присваивать всем монстрам
    windowHandler->setCurrentWidget(faitWindow);
    break;

    }
    case GraphicStates::PROLOG: {

        windowHandler->setCurrentWidget(prolog);
        break;
    }
    case GraphicStates::BACKPACK: {
        backPack->ChangeBackpack();
        windowHandler->setCurrentWidget(backPack);
        break;
    }
    }

}
