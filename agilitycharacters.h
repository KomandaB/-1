#ifndef AGILITYCHARACTERS_H
#define AGILITYCHARACTERS_H

#include <QObject>

class AgilityCharacters
{
private:
    int     SPeedPoints;
    int SPeedAttackePoints;
public:
    AgilityCharacters(){}
    AgilityCharacters(int Speed, int Speed_of_Ataacke);
 void set_agilityCharacters(int Speed, int Speed_of_Ataacke);
    void set_SPeedPoints(int Speed);

    void set_SPeedAttackePoints(int Speed_of_Ataacke);

    int get_SPeedPoints();

    int get_SPeedAttackePoints();


};

#endif // AGILITYCHARACTERS_H
