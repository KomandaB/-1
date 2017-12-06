#ifndef FAITWINDOW_H
#define FAITWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtWidgets>

#include <QWidget>
#include "settings.h"
#include "gameentites.h"
#include "station.h"
#include"gamehandler.h"
#include"badcharacter.h"

namespace Ui {
class FaitWindow;
}

class FaitWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FaitWindow(QWidget *parent = 0, GameEntites *entites=0, int ID=0);
    ~FaitWindow();

private:
    Ui::FaitWindow *ui;
    void battle(int monstr_id);
    void action_1();
    GameEntites *entites;
private slots:

    void Ataka(int id);
signals:
   void stateChanged(GraphicStates newState,int id);


};

#endif // FAITWINDOW_H
