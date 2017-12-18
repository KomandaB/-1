#ifndef PROLOG_H
#define PROLOG_H

#include <QWidget>
#include <QtWidgets>
#include <QWidget>
#include <QTextBrowser>
#include "settings.h"
#include "nonplayercharacter.h"
#include "settings.h"
#include "gameentites.h"
#include "station.h"
#include"gamehandler.h"
namespace Ui {
class Prolog;
}

class Prolog : public QWidget
{
    Q_OBJECT

public:
    explicit Prolog(QWidget *parent = 0 ,GameEntites *entites=0);
    ~Prolog();

private:
    Ui::Prolog *ui;
private slots:
   void go_to_menu_clicked();
signals:
   void stateChanged(GraphicStates newState,int id);
};

#endif // PROLOG_H
