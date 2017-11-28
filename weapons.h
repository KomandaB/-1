#ifndef WEAPONS_H
#define WEAPONS_H

#include <QObject>
#include <QString>
#include <QVector>
class Weapons
{
private:
    int WeaponsAttack;
    QString NameWeapons;
public:
    Weapons(){}
    Weapons(int AT, QString name);

    int get_WeaponsAttack();

    QString get_NameWeapons();
};

#endif // WEAPONS_H
