#include "nonplayercharacter.h"
NonPlayerCharacter::NonPlayerCharacter()
{
}
// класс будет дополняться при необходимости
NonPlayerCharacter::NonPlayerCharacter(int _NonPlayerCharacterId, QString _NonPlayerCharacterName, QStringList _NonPlayerCharacterPhrases, int _lastPhraseIndex) :
    NonPlayerCharacterId(_NonPlayerCharacterId),
    NonPlayerCharacterName(_NonPlayerCharacterName),
    NonPlayerCharacterPhrases(_NonPlayerCharacterPhrases),
    lastPhraseIndex(_lastPhraseIndex)
{

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

//void NonPlayerCharacter::talkToCharacter(QString name){
//    name.NonPlayerCharacterPhrases[];
//    int i = 0;
//    while(i < name.NonPlayerCharacterPhrases.length()){
//        //Передаем одну фразу в диалоговое окно, ждем рекции игрока

//        i++;
//    }

//}

QString NonPlayerCharacter::getNonPlayerCharacterPhrase(){

    return NonPlayerCharacterPhrases.takeFirst();

}


