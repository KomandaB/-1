#ifndef GAMEENTITES_H
#define GAMEENTITES_H
#include <QDebug>
#include "station.h"
#include "nonplayercharacter.h"
#include "badcharacter.h"
#include "goodcharacter.h"
#include "item.h"
#include "dealer.h"


class GameEntites
{
public:
    GameEntites();
    Goodcharacter* getGoodCharacterById(int GoodCharId);
    BadCharacter* getBadCharacterById(int BadCharId);
    NonPlayerCharacter* getNonPlayerCharacterById(int NpcId);
    Station* getStationById(int stationId);
    Item* getItemById(int ItemId);
    Dealer* getDealerById(int DealerId);
    void initGame();//почему станции являются публичными, а люди приватными

    QHash<int, Station> StationsMap;
    QHash<int, Goodcharacter> GoodCharactersMap;
    QHash<int, BadCharacter> BadCharactersMap;
    QHash<int, NonPlayerCharacter> NonPlayerCharactersMap;
    QHash<int, Item*> ItemMap;
    QHash<int, Dealer> DealerMap;
    void initItem();
    void initBadCharacters();
    void initGoodCharacters();
    void initDealer();
    void initNonPlayerCharacters();
private:

};

#endif // GAMEENTITES_H
