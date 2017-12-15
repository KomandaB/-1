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
    bool isEndOfPhrases();
    void setNonPlayerCharacterPhrases(QString text);
    QString getNonPlayerCharacterPhrase();
    int getRandomGoods();
    void setMerchantsGoods();
  QVector<int> merchantsInventory;

private:
  bool endOfPhrases;
    QStringList NonPlayerCharacterPhrases;
    int NonPlayerCharacterId;
    QString NonPlayerCharacterName;
    int lastPhraseIndex = 0;


};

#endif // NONPLAYERCHARACTER_H
