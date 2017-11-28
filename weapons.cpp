#include "weapons.h"

Weapons::Weapons(int AT, QString name) :
 WeaponsAttack(AT),
 NameWeapons(name)
{

}

int Weapons::get_WeaponsAttack()
{
    return WeaponsAttack;
}

QString Weapons::get_NameWeapons()
{
    return NameWeapons;
}
