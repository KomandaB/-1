#include "nonplayercharacter.h"
#include "QTime"
#include "QDebug"
NonPlayerCharacter::NonPlayerCharacter()
{
}
// класс будет дополняться при необходимости
NonPlayerCharacter::NonPlayerCharacter(int _NonPlayerCharacterId, QString _NonPlayerCharacterName) :
    NonPlayerCharacterId(_NonPlayerCharacterId),
    NonPlayerCharacterName(_NonPlayerCharacterName)
{
     QVector<int> merchantsInventory(10);
}

int NonPlayerCharacter::getNonPlayerCharacterId()
{
    return NonPlayerCharacterId;
    // 1 - Сюжетный персонаж
    // 2 - Второстепенный персонаж
    // 3 - Торговец
}

QString NonPlayerCharacter::getNonPlayerCharacterName()
{
    return NonPlayerCharacterName;
}

int NonPlayerCharacter::getLastPhraseIndex(){

    return lastPhraseIndex;
}

bool NonPlayerCharacter::isEndOfPhrases(){

   return endOfPhrases;
}

void NonPlayerCharacter::setNonPlayerCharacterPhrases(QString text)
//Функция наполнения фраз героя. На вход подаётся текст персонажа в одной строке, каждая фраза
//которого дополняется разделителем "next" (без кавычек).
{
    NonPlayerCharacterPhrases = text.split("next");

}


QString NonPlayerCharacter::getNonPlayerCharacterPhrase(){
    if(!endOfPhrases){
        if(lastPhraseIndex<NonPlayerCharacterPhrases.length()){
            lastPhraseIndex++;
            return NonPlayerCharacterPhrases[lastPhraseIndex-1];
        }else if(lastPhraseIndex+1>=NonPlayerCharacterPhrases.length()){
            endOfPhrases=true;
            return "Пока!";
        }
    }
    return 0;
}


int getRandomGoods(int numberOfGoods){
    int number;
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
    number = qrand() % numberOfGoods + 1; //генерирование случайного id от 0 до количества предметов
    return number;
}

void setMerchantsGoods(NonPlayerCharacter name){

    for(int i=0; i<10;i++){
        name.merchantsInventory[i]=getRandomGoods(10);
    }


}


