#ifndef WINGAME_H
#define WINGAME_H

#include <QMainWindow>
#include <QDebug>
#include <QtWidgets>

#include <QWidget>
#include "settings.h"
#include "gameentites.h"
#include "station.h"
#include"gamehandler.h"

namespace Ui {
class WinGame;
}

class WinGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinGame(QWidget *parent = 0, int flag=0);
    ~WinGame();
    void changeWin(int flag=0);

private:
    Ui::WinGame *ui;
private slots:

    void goTuMenuClicked();
signals:
   void stateChanged(GraphicStates newState,int id);



};

#endif // WINGAME_H
