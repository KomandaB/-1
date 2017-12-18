#include "weapons.h"

Weapons::Weapons(int id,QString name,int price,ItemType type, int AT,int SpeedAt) :
    Item(id, name, price, type),
 WeaponsAttack(AT),
  WeaponsSpeedAttack(SpeedAt)
{

}

int Weapons::get_WeaponsSeedAttack()
{
    return WeaponsSpeedAttack;
}

int Weapons::get_WeaponsAttack()
{
    return WeaponsAttack;
}

