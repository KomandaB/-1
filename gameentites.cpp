#include "gameentites.h"

GameEntites::GameEntites()
{

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
    stationIds.push_back(1);

    QVector<int> charIds;
    charIds.push_back(0);//добавляется значение
    StationsMap[0] = Station(0, "Start", stationIds, charIds);

   //-------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    stationIds.push_back(0);
    charIds.push_back(1);
    StationsMap[1] = Station(1, "Finish", stationIds, charIds);
    //-------------------------------------------------------------



}

void GameEntites::initCharacters()
{
    goodCharactersMap[0] = GoodCharacter(0,"Ivan");
    goodCharactersMap[1] = GoodCharacter(1,"Makcim");

    //TODO: INITIALISE MORE
}
