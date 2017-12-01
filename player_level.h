#ifndef PLAYER_LEVEL_H
#define PLAYER_LEVEL_H

#include <QObject>

class player_level
{
private:
    int ExPoints;
    int Lvl;
public:
    player_level(){}
    player_level(int ExP, int  Level);

        void set_ExPoints(int ExP);

        void set_LVL(int LVL);

        int  get_ExPoints();

        int  get_Lvl();

};

#endif // PLAYER_LEVEL_H
