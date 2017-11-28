#include "player_level.h"

player_level::player_level(int ExP, int  Level):
ExPoints(ExP),
Lvl(Level)
{

}

void player_level::set_ExPoints(int ExP)
{
    ExPoints = ExP;
}
void player_level::set_LVL(int LVL)
{
    Lvl = LVL;
}
int  player_level::get_ExPoints()
{
    return ExPoints;
}
int  player_level::get_Lvl()
{
    return Lvl;
}
