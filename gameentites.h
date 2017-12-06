#ifndef GAMEENTITES_H
#define GAMEENTITES_H
#include <QDebug>
#include "station.h"
#include "nonplayercharacter.h"
#include "badcharacter.h"
#include "goodcharacter.h"


class GameEntites
{
public:
    GameEntites();
    Goodcharacter* getGoodCharacterById(int GoodCharId);
    BadCharacter* getBadCharacterById(int BadCharId);
    NonPlayerCharacter* getNonPlayerCharacterById(int NpcId);
    Station* getStationById(int stationId);
    void initGame();//почему станции являются публичными, а люди приватными

    QHash<int, Station> StationsMap;
    QHash<int, Goodcharacter> GoodCharactersMap;
    QHash<int, BadCharacter> BadCharactersMap;
    QHash<int, NonPlayerCharacter> NonPlayerCharactersMap;
    void initBadCharacters();
    void initGoodCharacters();
    void initNonPlayerCharacters();
private:

};

#endif // GAMEENTITES_H
