#include "goodcharacter.h"
GoodCharacter::GoodCharacter()
{
}
// класс будет дополняться при необходимости
GoodCharacter::GoodCharacter(int _GoodCharacterId, QString _GoodCharacterName) :
    GoodCharacterId(_GoodCharacterId),
    GoodCharacterName(_GoodCharacterName)

{

}

int GoodCharacter::getGoodCharacterId() const
{
    return GoodCharacterId;
}

QString GoodCharacter::getGoodCharacterName() const
{
    return GoodCharacterName;
}
