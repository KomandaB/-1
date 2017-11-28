#include "agilitycharacters.h"

AgilityCharacters::AgilityCharacters(int Speed, int Speed_of_Ataacke):
 SPeedPoints(Speed),
SPeedAttackePoints(Speed_of_Ataacke)
{

}

void AgilityCharacters::set_agilityCharacters(int Speed, int Speed_of_Ataacke)
{
SPeedPoints = Speed;
SPeedAttackePoints = Speed_of_Ataacke;
}

void AgilityCharacters::set_SPeedPoints(int Speed)
    {
        SPeedPoints = Speed;
    }
    void AgilityCharacters::set_SPeedAttackePoints(int Speed_of_Ataacke)
    {
        SPeedAttackePoints = Speed_of_Ataacke;
    }
    int AgilityCharacters::get_SPeedPoints()
    {
        return	SPeedPoints;
    }
    int AgilityCharacters::get_SPeedAttackePoints()
    {
        return	SPeedAttackePoints;
    }
