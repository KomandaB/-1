#include "gamehandler.h"

GameHandler::GameHandler()
{

}

void GameHandler::startNewGame()
{
    entites.initGame();
    idFirstStation = 0;
    idFinalStation = 1;
    currentStationId = 0;
    do
    {
        Station *currentStation = entites.getStationById(currentStationId);
        if (currentStation == nullptr){
            //exit from game (error)
        }
        for (int it : currentStation->getStationsToMove()){
            //send to Graphic class value of entites.getStationById(it);

        }
        //the same for characters




    }while(currentStationId != idFinalStation);//пока теущая станция !=финальной


}
