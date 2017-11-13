#ifndef GOODCHARACTER_H
#define GOODCHARACTER_H
#include "character.h"


class GoodCharacter : public Character
{
public://Надо ли нам хранить станцию на котоой находимся?

    CharacterResponse makeDecision(int answerId);
    GoodCharacter();
    GoodCharacter(int _GoodCharacterId, QString _GoodCharacterName);
    int getGoodCharacterId() const;

    QString getGoodCharacterName() const;//возвращает строку, имя текущего человека
private:
    int GoodCharacterId;//
    QString GoodCharacterName;

};

#endif // GOODCHARACTER_H
