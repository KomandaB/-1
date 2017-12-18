#include "armor.h"

Armor::Armor(int id, QString name, int price, ItemType type, int Armor,int Speed):
   Item(id, name, price, type),
   ArmorPoints(Armor),
 ArmorSpeed(Speed)
{

}

int Armor::get_Speed()
{
 return ArmorSpeed;
}

int Armor::get_ArmorPoints()
{
    return ArmorPoints;
}
void Armor::set_ArmorPoints(int Ar){
    ArmorPoints = Ar;
}
