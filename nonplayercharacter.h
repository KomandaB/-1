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
    int getLastPhraseIndex();
    bool isListOfPhrasesEmpty();
    void setNonPlayerCharacterPhrases(QString text);
    QString getNonPlayerCharacterPhrase();
    int getRandomGoods();
    void setMerchantsGoods();
    QVector<int> merchantsInventory;
private:
    int NonPlayerCharacterId;
    QString NonPlayerCharacterName;
    int lastPhraseIndex;
    QStringList NonPlayerCharacterPhrases;

};

#endif // NONPLAYERCHARACTER_H
