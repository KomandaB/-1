#include "armor.h"

Armor::Armor(int id, QString name, int price, ItemType type, int Armor):
   Item(id, name, price, type),
   ArmorPoints(Armor)
{

}

int Armor::get_ArmorPoints()
{
    return ArmorPoints;
}
void Armor::set_ArmorPoints(int Ar){
    ArmorPoints = Ar;
}
