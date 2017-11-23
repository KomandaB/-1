#include "gameentites.h"

GameEntites::GameEntites()
{

}

GoodCharacter *GameEntites::getGoodCharacterById(int charId)
{
    if (GoodCharactersMap.contains(charId)){
        return &GoodCharactersMap[charId];
    } else {
        return nullptr;
    }
}

BadCharacter *GameEntites::getBadCharacterById(int charId)
{
    if (BadCharactersMap.contains(charId)){
        return &BadCharactersMap[charId];
    } else {
        return nullptr;
    }
}

Station *GameEntites::getStationById(int stationId)
{
    if (StationsMap.contains(stationId)){
        return &StationsMap[stationId];
    } else {
        return nullptr;
    }
}

void GameEntites::initGame()
{
    initCharacters();
    QVector<int> stationIds;
    stationIds.push_back(1);//количество следующих станций

    QVector<int> charIds;
    charIds.push_back(0);//добавляется значение
    StationsMap[0] = Station(0, "Start", stationIds, charIds,"Это первая станция на которую я попал,далее мне придется выжить в тяжолой среде метро");
   //---------------------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    stationIds.push_back(1);
    stationIds.push_back(2);
    //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
    charIds.push_back(1);
    StationsMap[1] = Station(1, "Kievskay", stationIds, charIds,"Наконец то я добрался до этой станции ");
    //---------------------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    stationIds.push_back(0);
    charIds.push_back(1);
    StationsMap[2] = Station(2, "Finish", stationIds, charIds," Вот мое путеществие и закончено И выбираюсь на свет ");
//---------------------------

}

void GameEntites::initCharacters()
{

    GoodCharactersMap[0] = GoodCharacter(0,"Ivan");


    GoodCharactersMap[1] = GoodCharacter(1,"Makcim");


    //BadCharactersMap[0] = BadCharacter(0,"Misha");

    //TODO: INITIALISE MORE
}
