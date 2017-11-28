#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <QObject>
#include <QString>
#include <QVector>
#include "weapons.h"
#include "armor.h"

class equipment
{
private:

    Weapons EqWeapons;
    Armor   EqArmor;
public:
    equipment(){}
    equipment(Weapons Weapon, Armor  armor);
    void set_equipment(Weapons At, Armor Ar);

    int get_EqArmor();

    int get_EqWeaponsAT();

};

#endif // EQUIPMENT_H
