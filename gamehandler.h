#ifndef GAMEHANDLER_H
#define GAMEHANDLER_H

#include <QObject>
#include <QHash>
#include "player.h"
#include "gameentites.h"
class GameHandler
{
public:
    GameHandler();
    void startNewGame();
    Player* steve;
    GameEntites *getEntites() const;


    int idFirstStation;//номер первой станции
    int idFinalStation;//номер последней станции
    int currentStationId;// текущая станция, на которой находимся
    int currentGoodCharacterId;
    GameEntites *entites;//объект
private:
};

#endif // GAMEHANDLER_H
