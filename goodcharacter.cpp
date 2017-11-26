#include "goodcharacter.h"
GoodCharacter::GoodCharacter()
{
}
// класс будет дополняться при необходимости
GoodCharacter::GoodCharacter(int _GoodCharacterId, QString _GoodCharacterName, QStringList _GoodCharacterPhrases) :
    GoodCharacterId(_GoodCharacterId),
    GoodCharacterName(_GoodCharacterName),
    GoodCharacterPhrases(_GoodCharacterPhrases)
{

}

int GoodCharacter::getGoodCharacterId() const
{
    return GoodCharacterId;
    // 1 - Сюжетный персонаж
    // 2 - Второстепенный персонаж
    // 3 - Торговец
}

QString GoodCharacter::getGoodCharacterName() const
{
    return GoodCharacterName;
}

void GoodCharacter::setGoodCharacterPhrases(QString text)
//Функция наполнения фраз героя. На вход подаётся текст персонажа в одной строке, каждая фраза
//которого дополняется разделителем "next" (без кавычек).
{
    _GoodCharacterPhrases = text.split("next");

}


