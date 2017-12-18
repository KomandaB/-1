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

    void changeAtatk(int ID);

    bool getIsRound() const;

private:
    Ui::FaitWindow *ui;
    void battle(int monstr_id);
    void update();
    void damage();
    void defense();
    void evasion();

    bool btn_AT;
    void enabled(bool enabl);

    int player_SPAT_dominate;
      int Monster_SPAT_dominate;

      int number_of_AT;
      bool bit;

    bool isRound = true;
    GameEntites *entites;
    int currentMonsterId;
    bool get_enabl();
    void set_enabl();
     void block_AT();
     void unblock_AT();
private slots:
    void attack();
    void go_to_station(int ID);
     void go_to_bag(int ID);
    void on_def_clicked();
    void set_round();
    void on_miss_clicked();


signals:



   void stateChanged(GraphicStates newState,int id);


};

#endif // FAITWINDOW_H
