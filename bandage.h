#ifndef BANDAGE_H
#define BANDAGE_H



#include <QObject>
#include <QString>
#include <QVector>
#include"item.h"
class bandage: public Item
{
private:
    int Bandage_HP;
public:
    bandage(){}
    bandage(int id, QString name, int price, ItemType type, int HP);
int get_Banadge_HP();


};
#endif // BANDAGE_H
