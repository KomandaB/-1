#ifndef CHARACTER_H
#define CHARACTER_H
#include <QString>
#include <QHash>

struct CharacterResponse{
    QString responseText;
    int attackPointsDelta;
};

class Character
{
public:
    Character() {}
protected:
    int characterId;
    QString characterName;
/*private:
    int characterId;
    QString characterName;
*/
};

#endif // CHARACTER_H
