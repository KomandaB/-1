#ifndef GAMEMAP_H
#define GAMEMAP_H
#include <QMainWindow>
#include <QDebug>
#include <QtWidgets>

#include <QWidget>
#include "settings.h"
#include "gameentites.h"
#include "station.h"
#include"gamehandler.h"
namespace Ui {
class GameMap;
}

class StationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StationWindow(QWidget *parent = 0,GameEntites *entites=0,int ID=0);
    ~StationWindow();
    void ChangeStation(int newId);

private:
    Ui::GameMap *ui;
    GameEntites *entetis;
private slots:
    void btn_1_clicked(int ID);
    void btn_2_clicked(int ID);
    void btn_3_clicked(int id);
    void winClicked();
    void goTuMenuClicked();
    void goTuBagClicked(int Id);

signals:
    void stateChanged(GraphicStates newState,int ID);//создать отдельные сигналы

};

#endif // GAMEMAP_H
