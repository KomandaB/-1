#ifndef GOODCHARACTER_H
#define GOODCHARACTER_H

#include <QObject>
#include <QString>
#include "weapons.h"
#include "armor.h"
#include "equipment.h"
#include "strengthcharacters.h"
#include "agilitycharacters.h"
#include "player_level.h"
#include "passivecharacters.h"

#include "badcharacter.h"


class Goodcharacter
{
private:
    bool game = true;
    QString name;
    int ammunition;

    StrengthCharacters Strength;
    AgilityCharacters Agility;
    PassiveCharacters PassiveTalents;
    player_level Level;
    equipment SetPlayer;

    int heatPoints;
    int speedPoints;
    int armorPoints;
    int attackPoints;
    int speedAttack;
    int Ammunition;
    int CurrentArmor;
    int CurrentWearpons;
    int CurrentBandage;

public:
     QVector<int>Inventory;
    Goodcharacter();
    Goodcharacter(int hp,int At,int ar, int Sp, int spat,int miss,int crit, int coins,int currentArmor,int currentWeapons,int currentBandage);
    void addItem(int itemId);
        void set_Strength(int Hp, int At);

        void set_Agility(int Speed, int AtSpeed);

        void set_PassiveTalents(int Miss, int Crit, int Steal);

        void set_Level(int Lvl, int Exp);

        void set_currentArmor(int Armor);

        int get_currentArmor();

        void set_currentWearpons(int Wearpons);

        int get_currentWearpons();

        void set_SetPlayer(Weapons At ,Armor Ar, bandage Bandage );

        void set_Goodcharacter(bool live, int coins);

        void game_over();

        void set_ammunition(int coins);

        void set_name(QString& Name);

        bool get_game();

        QString get_name();

        int get_ammunition();



        // set and get commands for  StrengthCharacters

        void set_AT(int AT);

        void set_HP(int HP);

        int get_HP();

        int get_AT();


        // set and get commands for AgilityCharacters

        void set_SP(int SP);

        void set_SPAT(int SPAT);

        int get_SP();

        int get_SPAT();


        // set and get commands for  PassiveTalents

        void set_MISS(int MISS);

        void set_CRIT(int CRIT);

        void set_STEAL(int STEAL);


        int get_MISS();

        int get_CRIT();

        int get_STEAL();


        // set and get commands for  Level Points

        void set_EXP(int EXP);

        void set_LVL(int LVL);


        int get_EXP();

        int get_LVL();


        // get characters equipment of player

        int get_AR();

        int get_EqAT();


        void set_AR(int Ar);

        // battel damege for player

            void damage(int AT_Monster);


            QVector<int> getInventory() const;
            int getCurrentBandage() const;
            void setCurrentBandage(int value);
};

#endif // GOODCHARACTER_H
