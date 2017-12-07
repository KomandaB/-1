#include "weapons.h"

Weapons::Weapons(int id,QString name,int price,ItemType type, int AT) :
    Item(id, name, price, type),
 WeaponsAttack(AT)
{

}

int Weapons::get_WeaponsAttack()
{
    return WeaponsAttack;
}

