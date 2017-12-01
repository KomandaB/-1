#include "gamehandler.h"
GameHandler::GameHandler()
{
     steve=new Player;
     entites= new GameEntites;
     entites->initGame();//происходит создание всех станций и людей
   //  entites->initGoodCharacters();

}

void GameHandler::startNewGame()
{

    idFirstStation = 0;
    idFinalStation = 1;
    currentStationId = 1;// ни на что не влияет, СЮДА вообще не заходит, как я понял

    currentGoodCharacterId = 0;


    //Здесь должны быть описаны все станции, люди, объекты   ???
    do
    {

//        // разделение на станции и переходы
//        switch (steve->position) {
//        case 1: {
//            Station *currentStation = entites->getStationById(currentStationId);//объект текущей станции
//            if (currentStation == nullptr){
//             //exit from game (error)
//            }
//            //здесь должны получить все от станции и вывести в правильное место
//            for (int it : currentStation->getStationsToMove()){//выыод следущих станций (предложеные варинты)
//                //send to Graphic class value of entites.getStationById(it);
//                //создаем кнопку для каждой

//            }
//            //



//            break;
//        }
//        case 2:
//            break;

//        default:
//            break;
//        }
        Station *currentStation = entites->getStationById(currentStationId);//объект текущей станции
        if (currentStation == nullptr){
         //exit from game (error)
        }
        for (int it : currentStation->getStationsToMove()){//
            //send to Graphic class value of entites.getStationById(it);

        }
        //the same for characters

//        GoodCharacter *currentGoodCharacter = entites.getGoodCharacterById(currentGoodCharacterId);
//        if (currentGoodCharacter == nullptr){
//                 //exit from game (error)
//        }


        //после создания всех станций и людей мы переходим непосредственно к выполнению программы
        //1 надо понять где мы находимся и прейти в разные функции через switch(функции в этом же классе???)
 }while(currentStationId != idFinalStation);//пока теущая станция !=финальной


}

GameEntites *GameHandler::getEntites() const
{
    return entites;

}
