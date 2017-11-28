#include "strengthcharacters.h"

StrengthCharacters::StrengthCharacters(int HeatP, int Attake):
    HeatPoints(HeatP),
    AttackPoints(Attake)
{

}
void StrengthCharacters::set_StrengthCharacters(int HeatP, int Attake)
{
    HeatPoints =HeatP;
    AttackPoints= Attake;
}
void StrengthCharacters::set_HeatPoints(int HP)
{
    HeatPoints = HP;
}
void StrengthCharacters::set_AttackPoints(int AT)
{
    AttackPoints = AT;
}
int StrengthCharacters::get_HeatPoints()
{
    return	HeatPoints;
}
int StrengthCharacters::get_AttackPoints()
{
    return	AttackPoints;
}
