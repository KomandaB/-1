#ifndef ARMOR_H
#define ARMOR_H

#include <QObject>
#include <QString>
#include <QVector>

class Armor
{
private:
    int ArmorPoints;
    QString NameArmor;
public:
    Armor(){}
    Armor(int Armor, QString name);

    QString get_NameArmor();

    int get_ArmorPoints();

};

#endif // ARMOR_H
