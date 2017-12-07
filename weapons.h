#ifndef WEAPONS_H
#define WEAPONS_H

#include <QObject>
#include <QString>
#include <QVector>
#include"item.h"
class Weapons: public Item
{
private:
    int WeaponsAttack;
public:
    Weapons(){}
    Weapons(int id, QString name, int price, ItemType type, int AT);

    int get_WeaponsAttack();

};

#endif // WEAPONS_H
