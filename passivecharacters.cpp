#include "passivecharacters.h"

PassiveCharacters::PassiveCharacters(int Miss, int CritDamage, int Steal):

   ChanceToMiss(Miss),
   ChanceToCritDamage(CritDamage),
   StealPoints(Steal)
{

}

void PassiveCharacters::set_PassiveCharacters(int Miss, int Crit, int Steal)
{
     ChanceToMiss = Miss;
     ChanceToCritDamage = Crit;
      StealPoints = Steal;
}

void PassiveCharacters::set_ChanceToMiss(int Miss)
{
    ChanceToMiss = Miss;
}
void PassiveCharacters::set_ChanceToCritDamage(int CritDamage)
{
    ChanceToCritDamage = CritDamage;
}
void PassiveCharacters::set_StealPoints(int Steal)
{
    StealPoints = Steal;
}

int  PassiveCharacters::get_ChanceToMiss()
{
    return ChanceToMiss;
}
int PassiveCharacters::get_ChanceToCritDamage()
{
    return ChanceToCritDamage;
}
int PassiveCharacters::get_StealPoints()
{
    return StealPoints;
}
