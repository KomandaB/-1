#ifndef PASSIVECHARACTERS_H
#define PASSIVECHARACTERS_H

#include <QObject>

class PassiveCharacters
{
private:

    int ChanceToMiss;
    int ChanceToCritDamage;
    int StealPoints;
public:
    PassiveCharacters(){}
    PassiveCharacters(int Miss, int CritDamage, int Steal);

    void set_PassiveCharacters(int Miss, int Crit, int Steal);

    void set_ChanceToMiss(int Miss);

    void set_ChanceToCritDamage(int CritDamage);

    void set_StealPoints(int Steal);

    int  get_ChanceToMiss();

    int get_ChanceToCritDamage();

    int get_StealPoints();

};

#endif // PASSIVECHARACTERS_H
