#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QWidget>
#include <QTextBrowser>
#include "settings.h"
#include "nonplayercharacter.h"
#include "settings.h"
#include "gameentites.h"
#include "station.h"
#include"gamehandler.h"

namespace Ui {
class DialogWindow;
}
class DialogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DialogWindow(QWidget *parent = 0, GameEntites *entites=0, int ID=0);
    ~DialogWindow();
    void ChangeCharacterId(int ID);
private:
    Ui::DialogWindow *ui;
    GameEntites *entites;
    int currentChacterID;

private slots:
   void goToMenuSlot();
   void goToMapSlot();
  // void nextPhrase(QString phrase, QString name);
   void nextPhrase(int ID);
signals:
   void stateChanged(GraphicStates newState,int id);
};

#endif // DIALOGWINDOW_H
