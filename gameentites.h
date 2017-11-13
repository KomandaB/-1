#ifndef GAMEENTITES_H
#define GAMEENTITES_H
#include "station.h"
#include "goodcharacter.h"
#include "badcharacter.h"

class GameEntites
{
public:
    GameEntites();
    GoodCharacter* getGoodCharacterById(int charId);
    BadCharacter *getBadCharacterById(int charId);
    Station* getStationById(int stationId);
    void initGame();//почему станции являются публичными, а люди приватными
private:
    QHash<int, Station> StationsMap;
    QHash<int, GoodCharacter> GoodCharactersMap;
    QHash<int, BadCharacter> BadCharactersMap;

    void initCharacters();
};

#endif // GAMEENTITES_H
