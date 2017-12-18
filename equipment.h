#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <QObject>
#include <QString>
#include <QVector>
#include "weapons.h"
#include "armor.h"
#include"bandage.h"

class equipment
{
private:

    Weapons EqWeapons;
    Armor   EqArmor;
    bandage EqBandage;

public:
    equipment(){}
    equipment(Weapons Weapon, Armor  armor, bandage Bandage);
    void set_equipment(Weapons At, Armor Ar, bandage Bandage);

    int get_EqArmor();

    int get_EqBandage();

    int get_EqWeaponsAT();

    void set_EqArmor(int Ar);

};

#endif // EQUIPMENT_H
