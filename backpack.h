#ifndef BACKPACK_H
#define BACKPACK_H

#include <QMainWindow>
#include <QDebug>
#include <QtWidgets>
#include <QWidget>
#include "settings.h"
#include "gameentites.h"
#include "gamehandler.h"


namespace Ui {
class BackPack;
}

class BackPack : public QWidget
{
    Q_OBJECT

public:
    explicit BackPack(QWidget *parent = 0, GameEntites *entites=0, int ID=0);
    ~BackPack();
    void ChangeBackpack(int personID);

private:
    Ui::BackPack *ui;
    GameEntites *entetis;
signals:
    void stateChanged(GraphicStates newState,int ID);
private slots:
    void GoToFaitCliked(int ID);
};

#endif // BACKPACK_H
