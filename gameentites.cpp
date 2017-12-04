#include "gameentites.h"

GameEntites::GameEntites()
{

}

Goodcharacter *GameEntites::getGoodCharacterById(int GoodCharId)
{
    if (GoodCharactersMap.contains(GoodCharId)){
        return &GoodCharactersMap[GoodCharId];
    } else {
        return nullptr;
    }
}

BadCharacter *GameEntites::getBadCharacterById(int BadCharId)
{
    if (BadCharactersMap.contains(BadCharId)){
        return &BadCharactersMap[BadCharId];
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
    initBadCharacters();
    initGoodCharacters();
    QVector<int> stationIds;
    stationIds.push_back(1);
    QVector<int> charIds;
    charIds.push_back(0);//добавляется значение
    StationsMap[0] = Station(0, "Start", stationIds, charIds,"Это первая станция на которую я попал,далее мне придется выжить в тяжолой среде метро");
   //---------------------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    stationIds.push_back(2);
    stationIds.push_back(3);
    //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
    charIds.push_back(1);
    StationsMap[1] = Station(1, "вторая", stationIds, charIds,"Наконец то я добрался до этой станции ");
    //---------------------------------------------------------------------------
     stationIds.clear();//почему не очищаем вектор людей?
     stationIds.push_back(3);
    //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
     charIds.push_back(1);
     StationsMap[2] = Station(2, "третья", stationIds, charIds,"Наконец то я добрался до этой станции ");
     //---------------------------------------------------------------------------
      stationIds.clear();//почему не очищаем вектор людей?
      stationIds.push_back(4);
      //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
      charIds.push_back(1);
      StationsMap[3] = Station(3,"четвертая", stationIds, charIds,"Наконец то я добрался до этой станции ");
    //---------------------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    charIds.push_back(1);
    StationsMap[4] = Station(4, "Finish", stationIds, charIds," Вот мое путеществие и закончено И выбираюсь на свет ");
//-----------------------------------------------------------------------------

}

void GameEntites::initBadCharacters()
{

//    GoodCharactersMap[0] = GoodCharacter(0,"Ivan");


//    GoodCharactersMap[1] = GoodCharacter(1,"Makcim");


    BadCharactersMap[0] = BadCharacter(20,30,0,0,0,2,1);// Dangerouse rat
    BadCharactersMap[1] = BadCharacter(20,40,0,0,0,3,2);//
    BadCharactersMap[2] = BadCharacter(20,50,0,0,0,3,3);//
      BadCharactersMap[3] = BadCharacter(20,50,0,0,0,3,3);//
        BadCharactersMap[4] = BadCharacter(20,50,0,0,0,3,3);//
          BadCharactersMap[5] = BadCharacter(20,50,0,0,0,3,3);//
//weaponsMap[0]=(12,"ownldwk");

    //TODO: INITIALISE MORE
}

void GameEntites::initGoodCharacters()
{
    GoodCharactersMap[0]=Goodcharacter(100,10,10,10,10,100);
    GoodCharactersMap[1]=Goodcharacter(100,1,1,1,1,1);
}
