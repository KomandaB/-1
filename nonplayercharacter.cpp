#include "nonplayercharacter.h"
#include "QTime"
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

int NonPlayerCharacter::getNonPlayerCharacterId() const
{
    return NonPlayerCharacterId;
    // 1 - Сюжетный персонаж
    // 2 - Второстепенный персонаж
    // 3 - Торговец
}

QString NonPlayerCharacter::getNonPlayerCharacterName() const
{
    return NonPlayerCharacterName;
}

int NonPlayerCharacter::getLastPhraseIndex(){

    return lastPhraseIndex;
}

bool NonPlayerCharacter::isListOfPhrasesEmpty(){

   return NonPlayerCharacterPhrases.isEmpty();
}

void NonPlayerCharacter::setNonPlayerCharacterPhrases(QString text)
//Функция наполнения фраз героя. На вход подаётся текст персонажа в одной строке, каждая фраза
//которого дополняется разделителем "next" (без кавычек).
{
    NonPlayerCharacterPhrases = text.split("next");

}


QString NonPlayerCharacter::getNonPlayerCharacterPhrase(){

    return NonPlayerCharacterPhrases.takeFirst();

}


int getRandomGoods(int numberOfGoods){
    int number;
    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));
    number = qrand() % numberOfGoods + 1; //генерирование случайного id от 0 до количества предметов
    return number;
}

void setMerchantsGoods(NonPlayerCharacter name){

    for(int i=0, i<10,i++){
        name.merchantsInventory[i]=getRandomGoods(10);
    }


}



