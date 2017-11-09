#include "goodcharacter.h"
GoodCharacter::GoodCharacter()
{

}
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
