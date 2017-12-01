#ifndef NONPLAYERCHARACTER_H
#define NONPLAYERCHARACTER_H
#include "character.h"


class NonPlayerCharacter : public Character
{
public://Надо ли нам хранить станцию на котоой находимся?

    CharacterResponse makeDecision(int answerId);
    NonPlayerCharacter();
    NonPlayerCharacter(int _NonPlayerCharacterId, QString _NonPlayerCharacterName,  QStringList _NonPlayerCharacterPhrases);
    int getNonPlayerCharacterId() const;
    QString getNonPlayerCharacterName() const;//возвращает строку, имя текущего человека
private:
    int NonPlayerCharacterId;//
    QString NonPlayerCharacterName;

};

#endif // NONPLAYERCHARACTER_H
