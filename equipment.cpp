#include "equipment.h"




equipment::equipment(Weapons Weapon, Armor  armor):
    EqWeapons(Weapon),
    EqArmor(armor)
{

}

void equipment::set_equipment(Weapons At, Armor Ar)
{
    EqWeapons=At;
    EqArmor=Ar;
}

int equipment::get_EqArmor()
{
    return EqArmor.get_ArmorPoints();
}

int equipment::get_EqWeaponsAT()
{
    return EqWeapons.get_WeaponsAttack();
}
