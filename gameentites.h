#ifndef GAMEENTITES_H
#define GAMEENTITES_H
#include "station.h"
#include "goodcharacter.h"
#include "badcharacter.h"

class GameEntites
{
public:
    GameEntites();
    Goodcharacter* getGoodCharacterById(int GoodCharId);
    BadCharacter* getBadCharacterById(int BadCharId);
    Station* getStationById(int stationId);
    void initGame();//почему станции являются публичными, а люди приватными

    QHash<int, Station> StationsMap;
    QHash<int, Goodcharacter> GoodCharactersMap;
    QHash<int, BadCharacter> BadCharactersMap;
private:
    void initBadCharacters();
    void initGoodCharacters();
};

#endif // GAMEENTITES_H
