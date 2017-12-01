#ifndef GAMEENTITES_H
#define GAMEENTITES_H
#include "station.h"
#include "nonplayercharacter.h"
#include "badcharacter.h"

class GameEntites
{
public:
    GameEntites();
    GoodCharacter* getGoodCharacterById(int charId);
    BadCharacter *getBadCharacterById(int charId);
    Station* getStationById(int stationId);
    void initGame();//почему станции являются публичными, а люди приватными

    QHash<int, Station> StationsMap;
    QHash<int, GoodCharacter> GoodCharactersMap;
    QHash<int, BadCharacter> BadCharactersMap;
private:
    void initCharacters();
};

#endif // GAMEENTITES_H
