#include "goodcharacter.h"


Goodcharacter::Goodcharacter(int hp, int At, int ar, int Sp, int spat, int miss, int crit, int coins, int currentArmor, int currentWeapons) :


   armorPoints (ar),
   Ammunition (coins),
   CurrentArmor(currentArmor),
   CurrentWearpons(currentWeapons)

{
  set_Strength(hp,At);
   set_Agility(Sp, spat);
   set_PassiveTalents(miss, crit,0);
   set_Level(0, 0);
  // set_SetPlayer(firstWeapon, firstArmor);


}

void Goodcharacter::addItem(int itemId)
{
    Inventory.push_back(itemId);
}
QVector<int> Goodcharacter::getInventory() const
{
    return Inventory;
}

Goodcharacter::Goodcharacter()
{

}

void Goodcharacter::set_Strength(int Hp, int At)
{
    Strength.set_StrengthCharacters(Hp, At);
}
void Goodcharacter::set_Agility(int Speed, int AtSpeed)
{
    Agility.set_agilityCharacters(Speed, AtSpeed);

}
void Goodcharacter::set_PassiveTalents(int Miss, int Crit, int Steal)
{
    PassiveTalents.set_PassiveCharacters(Miss, Crit, Steal);
}
void Goodcharacter::set_Level(int Lvl, int Exp)
{
    Level.set_LVL(Lvl);
    Level.set_ExPoints(Exp);
}

void Goodcharacter::set_currentArmor(int Armor)
{
    CurrentArmor=Armor;
}

int Goodcharacter::get_currentArmor()
{
    return CurrentArmor;
}

void Goodcharacter::set_currentWearpons(int Wearpons)
{
    CurrentWearpons=Wearpons;
}

int Goodcharacter::get_currentWearpons()
{
    return CurrentWearpons;
}
void Goodcharacter::set_SetPlayer(Weapons At ,Armor Ar )
{
    SetPlayer.set_equipment(At, Ar);
}

void Goodcharacter::set_Goodcharacter(bool live, int coins)
{
    game = live;
    ammunition = coins;
}
void Goodcharacter:: game_over()
{
    game = false;
}
void Goodcharacter::set_ammunition(int coins)
{
    ammunition = coins;
}
void Goodcharacter::set_name(QString& Name)
{
     name = Name;
}
bool Goodcharacter::get_game()
{
    return game;
}
QString Goodcharacter::get_name()
{
    return name;
}
int Goodcharacter::get_ammunition()
{
    return ammunition;
}


// set and get commands for  StrengthCharacters
void Goodcharacter::set_AT(int AT)
{
    Strength.set_AttackPoints(AT);
}
void Goodcharacter::set_HP(int HP)
{
    Strength.set_HeatPoints(HP);
}
int Goodcharacter::get_HP()
{
    return Strength.get_HeatPoints();
}
int Goodcharacter::get_AT()
{
    return Strength.get_AttackPoints();//+get_EqAT();
}

// set and get commands for AgilityCharacters
void Goodcharacter::set_SP(int SP)
{
    Agility.set_SPeedPoints(SP);
}
void Goodcharacter::set_SPAT(int SPAT)
{
    Agility.set_SPeedAttackePoints(SPAT);
}
int Goodcharacter::get_SP()
{
    return Agility.get_SPeedPoints();
}
int Goodcharacter::get_SPAT()
{
    return Agility.get_SPeedAttackePoints();
}

// set and get commands for  PassiveTalents
void Goodcharacter::set_MISS(int MISS)
{
    PassiveTalents.set_ChanceToMiss(MISS);
}
void Goodcharacter::set_CRIT(int CRIT)
{
    PassiveTalents.set_ChanceToCritDamage(CRIT);
}
void Goodcharacter::set_STEAL(int STEAL)
{
    PassiveTalents.set_StealPoints(STEAL);
}

int Goodcharacter::get_MISS()
{
    return PassiveTalents.get_ChanceToMiss();
}
int Goodcharacter::get_CRIT()
{
    return PassiveTalents.get_ChanceToCritDamage();
}
int Goodcharacter::get_STEAL()
{
   return  PassiveTalents.get_StealPoints();
}

// set and get commands for  Level Points

void Goodcharacter::set_EXP(int EXP)
{
    Level.set_ExPoints(EXP);
}
void Goodcharacter::set_LVL(int LVL)
{
    Level.set_LVL(LVL);
}

int Goodcharacter::get_EXP()
{
    return Level.get_ExPoints();
}
int Goodcharacter::get_LVL()
{
    return  Level.get_Lvl();
}

// get characters equipment of player
int Goodcharacter::get_AR()
{
return	SetPlayer.get_EqArmor();
}
  void Goodcharacter::set_AR(int Ar)
  {
     SetPlayer.set_EqArmor(Ar);
  }
int Goodcharacter::get_EqAT()
{
    return	SetPlayer.get_EqWeaponsAT();
}


// battel damege for player
    void Goodcharacter::damage(int AT_Monster)
    {
        if ( get_AR() > AT_Monster)
        {
          //  cout << name << " take  0  damege" << endl;
        }
        else
        {
            Strength.set_HeatPoints((Strength.get_HeatPoints() - ( AT_Monster  - get_AR())));
        }
    }
