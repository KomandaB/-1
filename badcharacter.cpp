#include "badcharacter.h"


  BadCharacter::BadCharacter( int hp,int at, int ar, int sp, int spat, int ammo) :
            m_attackPoints(at),
            m_heatPoints(hp),
            m_armorPoints(ar),
            m_speedPoints (sp),
          m_speedAttack (spat),
          m_ammunition(ammo)
{
}

 void   BadCharacter::set_HP(int HP)
{
    m_heatPoints = HP;
}

// void BadCharacter::set_AT(int AT)
// {
//     m_attackPoints = AT;
// }
// void BadCharacter::set_AR(int AR)
//     {
//         m_armorPoints = AR;
//     }
// void BadCharacter::set_SP(int SP)
//     {
//         m_speedPoints = SP;
//     }
// void BadCharacter::set_SPAT(int SPAT)
// {
//    m_speedAttack = SPAT;
// }
 int BadCharacter::get_HP()
     {
         return m_heatPoints;
     }
 int BadCharacter::get_AT()
 {
     return m_attackPoints;
 }
 int BadCharacter::get_AR()
 {
     return m_armorPoints;
 }
 int BadCharacter::get_SP()
     {
         return m_speedPoints;
     }
 int BadCharacter::get_SPAT()
 {
     return m_speedAttack;
 }
 int BadCharacter::get_ammunition()
     {
         return m_ammunition;
     }
 void BadCharacter::damage(int a, int ar)
     {
         if (ar > a)
         {
             m_heatPoints = m_heatPoints;
         }
         else
         {
             m_heatPoints = m_heatPoints - a + ar;
         }
     }
