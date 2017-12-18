#include "equipment.h"




equipment::equipment(Weapons Weapon, Armor  armor, bandage Bandage):
    EqWeapons(Weapon),
    EqArmor(armor),
    EqBandage(Bandage)
{

}

void equipment::set_equipment(Weapons At, Armor Ar, bandage Bandage)
{
    EqWeapons=At;
    EqArmor=Ar;
    EqBandage= Bandage;
}

int equipment::get_EqArmor()
{
    return EqArmor.get_ArmorPoints();
}

int equipment::get_EqBandage()
{
    return EqBandage.get_Banadge_HP();
}
 void  equipment::set_EqArmor(int Ar)
 {
     EqArmor.set_ArmorPoints(Ar);
 }
int equipment::get_EqWeaponsAT()
{
    return EqWeapons.get_WeaponsAttack();
}
