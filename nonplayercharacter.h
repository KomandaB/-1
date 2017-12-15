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
      bool isEndOfAnswers();
    void setNonPlayerCharacterPhrases(QString text);
    QString getNonPlayerCharacterPhrase();
    QString getPlayerAnswer();
    QString getLastPlayerAnswer();
    int getRandomGoods();
    void setMerchantsGoods();
    void  setPlayerAnswers(QString text);
  QVector<int> merchantsInventory;

private:
  bool endOfPhrases = false;
    bool endOfAnswers = false;
    QStringList PlayerAnswers;
    QStringList NonPlayerCharacterPhrases;
    int NonPlayerCharacterId;
    QString NonPlayerCharacterName;
    int lastPhraseIndex = 0;
    int lastAnswerIndex = 0;


};

#endif // NONPLAYERCHARACTER_H
