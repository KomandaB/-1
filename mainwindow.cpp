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
    windowHandler = new QStackedWidget(this);
    windowHandler->addWidget(mainMenu);
    windowHandler->addWidget(stationWindow);
    windowHandler->addWidget(dialogWindow);
    windowHandler->addWidget(faitWindow);
    windowHandler->addWidget(winGame);
    this->setCentralWidget(windowHandler);
    connect(dialogWindow, &DialogWindow::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(faitWindow,&FaitWindow::stateChanged,this,&MainWindow::stateChangedSlot);
    connect(stationWindow, &StationWindow::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(mainMenu, &MainMenu::stateChanged, this, &MainWindow::stateChangedSlot);
    connect(winGame,&WinGame::stateChanged,this,&MainWindow::stateChangedSlot);
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
    }

}
