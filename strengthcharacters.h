#ifndef STRENGTHCHARACTERS_H
#define STRENGTHCHARACTERS_H

#include <QObject>

class StrengthCharacters
{private:
    int HeatPoints;
    int AttackPoints;
public:
    StrengthCharacters(){}
    StrengthCharacters(int HeatP, int Attake);
void set_StrengthCharacters(int HeatP, int Attake);

    void set_HeatPoints(int HP);

    void set_AttackPoints(int AT);

    int get_HeatPoints();

    int get_AttackPoints();

};

#endif // STRENGTHCHARACTERS_H
