#ifndef AGILIRYCHARACTER_H
#define AGILIRYCHARACTER_H


class AgiliryCharacter
{
public:
    AgiliryCharacter();
};

#endif // AGILIRYCHARACTER_H#ifndef AGILITYCHARACTERS_H
#define AGILITYCHARACTERS_H

#include <QObject>

class AgilityCharacters
{
private:
    int     SPeedPoints;
    int SPeedAttackePoints;
public:
    AgilityCharacters(int Speed, int Speed_of_Ataacke);

    void set_SPeedPoints(int Speed);

    void set_SPeedAttackePoints(int Speed_of_Ataacke);

    int get_SPeedPoints();

    int get_SPeedAttackePoints();


};

#endif // AGILITYCHARACTERS_H
