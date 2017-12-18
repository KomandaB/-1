#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "settings.h"
#include "dialogwindow.h"
#include "stationwindow.h"
#include "mainmenu.h"
#include "gameentites.h"
#include "gamehandler.h"
#include "wingame.h"
#include "faitwindow.h"
#include "dialogwindow.h"
#include "backpack.h"
#include "prolog.h"
#include "dealerwindow.h"


namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    GameHandler *gameHandler;
    Ui::MainWindow *ui;
    GraphicStates currentState = GraphicStates::MAIN_MENU;
    DialogWindow *dialogWindow;
    StationWindow *stationWindow;
    MainMenu *mainMenu;
    DealerWindow *dealerWindow;
    WinGame *winGame;
    Prolog * prolog;
    BackPack *backPack;
    FaitWindow *faitWindow;
    QStackedWidget *windowHandler;
public slots:
    void stateChangedSlot(GraphicStates newState,int ID);

};

#endif // MAINWINDOW_H
