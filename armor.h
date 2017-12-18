#ifndef ARMOR_H
#define ARMOR_H

#include <QObject>
#include <QString>
#include <QVector>
#include "item.h"

class Armor: public Item
{
private:
    int ArmorPoints;
    int ArmorSpeed;
    
public:
    Armor(){}
    Armor(int id, QString name, int price, ItemType type, int Armor, int Speed);
    int get_Speed();

    int get_ArmorPoints();
    void set_ArmorPoints(int Ar);
};

#endif // ARMOR_H
