#ifndef DEALERWINDOW_H
#define DEALERWINDOW_H
#include <QMainWindow>
#include <QtWidgets>
#include <QWidget>
#include <QTextBrowser>
#include "settings.h"
#include "dealer.h"
#include "settings.h"
#include "gameentites.h"

#include"gamehandler.h"


namespace Ui {
class DealerWindow;
}

class DealerWindow : public QWidget
{
    Q_OBJECT

public:

    explicit DealerWindow(QWidget *parent = 0, GameEntites *entites=0, int ID=0);
    ~DealerWindow();
void ChangeDealer(int id);
signals:
   void stateChanged(GraphicStates newState,int id);
private:
    Ui::DealerWindow *ui;
       GameEntites *entetis;
       int currentDealer;
private slots:
    void GoToStation(int ID);
    void DressingUp(int id);
};

#endif // DEALERWINDOW_H
