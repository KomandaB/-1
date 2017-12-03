#ifndef NONPLAYERCHARACTER_H
#define NONPLAYERCHARACTER_H
#include "character.h"
#include "QStringList"
#include "QVector"


class NonPlayerCharacter
{
public:
    CharacterResponse makeDecision(int answerId);
    NonPlayerCharacter();
    NonPlayerCharacter(int _NonPlayerCharacterId, QString _NonPlayerCharacterName);
    int getNonPlayerCharacterId();
    QString getNonPlayerCharacterName();
private:
    int NonPlayerCharacterId;
    QString NonPlayerCharacterName;
    int lastPhraseIndex;
    QStringList NonPlayerCharacterPhrases;
    QVector<int> merchantsInventory;
};

#endif // NONPLAYERCHARACTER_H
