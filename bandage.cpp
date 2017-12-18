#include "bandage.h"

bandage::bandage(int id,QString name,int price,ItemType type, int HP):

    Item(id, name, price, type),
    Bandage_HP(HP)
{

}

int bandage::get_Banadge_HP()
{
    return Bandage_HP;
}


