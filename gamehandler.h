#ifndef GAMEHANDLER_H
#define GAMEHANDLER_H

#include <QObject>
#include <QHash>
#include <gameentites.h>
class GameHandler
{
public:
    GameHandler();
    void startNewGame();
private:
    int idFirstStation;//номер первой станции
    int idFinalStation;//номер последней станции
    int currentStationId;// текущая станция, на которой находимся
    GameEntites entites;//объект

};

#endif // GAMEHANDLER_H
