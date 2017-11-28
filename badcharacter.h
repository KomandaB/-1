#ifndef BADCHARACTER_H
#define BADCHARACTER_H
#include "character.h"

#include <QObject>

class BadCharacter
{
private:
        int m_heatPoints;
        int m_speedPoints;
        int m_armorPoints;
        int m_attackPoints;
        int m_ammunition;
        int m_speedAttack;
public:
        BadCharacter() {}
    BadCharacter( int hp,int at, int ar, int sp,int spat, int ammo);

    void set_HP(int hp);
//    void set_AT(int at);
//    void set_AR(int ar);
//    void set_SP(int sp);
//    void set_SPAT(int spat);

     void damage(int a, int ar);

    int get_HP();
    int get_AT();
    int get_AR();
    int get_SP();
    int get_SPAT();
    int get_ammunition();


};

#endif // BADCHARACTER_H
