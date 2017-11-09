#ifndef BADCHARACTER_H
#define BADCHARACTER_H
#include "character.h"

class BadCharacter : public Character
{
public:
    BadCharacter();
private:
    int attackPoints;
    int heatPoints;
};

#endif // BADCHARACTER_H
