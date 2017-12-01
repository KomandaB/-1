#include "armor.h"

Armor::Armor(int Armor, QString name ):
   ArmorPoints(Armor),
   NameArmor(name)
{

}

int Armor::get_ArmorPoints()
{
    return ArmorPoints;
}

QString Armor::get_NameArmor()
{
    return NameArmor;
}
