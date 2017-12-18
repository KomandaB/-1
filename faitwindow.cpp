#include "faitwindow.h"
#include "ui_faitwindow.h"

FaitWindow::FaitWindow(QWidget *parent, GameEntites *entites, int ID) :
    QMainWindow(parent),
    ui(new Ui::FaitWindow),
    entites(entites),
    currentMonsterId(ID)
{

    ui->setupUi(this);
    connect(ui->btn_ataka,&QPushButton::clicked,this, &FaitWindow::attack);
    connect(ui->bag,&QPushButton::clicked,this, &FaitWindow::go_to_bandage);

}
//сюда передавать Ид монстра
FaitWindow::~FaitWindow()
{
    delete ui;
}
bool FaitWindow::get_enabl()
{
    return btn_AT;
}
void pause()
{
    QTime timer;
    timer.start () ;
    for(;timer.elapsed() < 10000;)
    {
        qApp->processEvents(0);
    }
}



// функция которая активирует кнопки в зависимости от хода
void FaitWindow::block_AT()
{

    ui->btn_ataka->setEnabled(0);
    ui->bag->setEnabled(0);
    ui->def->setEnabled(1);
    ui->miss->setEnabled(1);
}
void FaitWindow::unblock_AT()
{
    ui->btn_ataka->setEnabled(1);
    ui->bag->setEnabled(1);
    ui->def->setEnabled(0);
    ui->miss->setEnabled(0);
}

void FaitWindow::changeAtatk(int ID)
{

ui->battle->setEnabled(1);
ui->btn_ataka->setEnabled(0);
ui->bag->setEnabled(0);
ui->def->setEnabled(0);
ui->miss->setEnabled(0);
 ui->go->setEnabled(0);

 ui->Textbatlle->setText(" ");
 ui->PlayertextEdit->setText(" ");
 ui->MonstertextEdit->setText(" ");
currentMonsterId = ID;


if ( ID == 1)
{
    ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  " Идя по тоннелю к следующей станции, Вы размышляли о разных вещах, вспоминали прошлую жизнь, прошлый мир.…  Под слабым светом фонаря на стенах вы разглядывали надписи, некоторые буквы были утеряны из-за времени, но что-то вам удавалось  разглядеть, по вашей щеке побежала скупая мужская слеза, вы прочувствовали всю боль от утраты потерянной эпохи…." + "\n" + "\n" +  "Погруженные в свои размышления, вы не заметили, как зашла в странный туман. Странный аромат витал в воздухе. Идя все дальше, вы услышали странный шепот, который становился все громче: «Подайте, помогите, кто, чем может ». Вы почувствовали в себе странное чувство, которое все нарастало, это было предчувствие беды. В дали вы увидели женский силуэт, который протягивал руки вперед, как-бы прося милостыню. Вы насторожились, достали свой клинок и стали приближаться к существу.  Но тут раздается резкий хруст стекла под ногами. Оно оборачивается, и вы видите нечто: исхудалое тело, из которого исходит странное свечение. Существо издает вопль и бросается на вас.""\n" + "\n");
}
if ( ID == 2)
{
    ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  "                               ");
}
if ( ID == 3)
{
    ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  "                               ");
}
if ( ID == 4)
{
    ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+"\n"+  "                               ");
}
if ( ID == 5)
{
  ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  "                               ");
}



number_of_AT = 5;
player_SPAT_dominate = 1;
Monster_SPAT_dominate = 1;



}
// функция обнавления характеристик персонажа
void FaitWindow::update()
{
    BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);

ui->PlayertextEdit->setText(" ");
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Здоровье         : " +QString::number( player->get_HP()));
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Атака            : " +QString::number( player->get_AT()));
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Защита           : " +QString::number( player->get_AR()));
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Скорость         : " +QString::number( player->get_SP()));
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Скорость Атаки         : " +QString::number( player->get_SPAT()));
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Шанс Кр.Удара    : " +QString::number( player->get_CRIT()));
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Шанс Уклонения   : " +QString::number( player->get_MISS()));
ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"Ваши Монеты      : " +QString::number( player->get_ammunition()));

ui->MonstertextEdit->setText(" ");
ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"Здоровье : " + QString::number( Monster->get_HP()));
ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"Атака : " +QString::number(  Monster->get_AT()));
ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"Защита: " +QString::number(  Monster->get_AR()));
ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"Скорость : " +QString::number(  Monster->get_SP()));
ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"Скорость Атаки         : " +QString::number( Monster->get_SPAT()));
ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"Количество монет " +QString::number(  Monster->get_ammunition()) + " coins");
}

// функция паузы делает нукую задержку



// Функция получения урона игроком для кнопки
void FaitWindow::damage( )
{
    BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);


 //block_AT();




    if (player->get_AR() < Monster->get_AT())
    {
    ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take  " + QString::number(  Monster->get_AT() - player->get_AR()) + " damage");
    player->set_HP( player->get_HP() - ( Monster->get_AT() - player->get_AR())) ;

    }

    else {
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take 0 damage");
    }

      //unblock_AT();
}
// функция нанесения урона игроком для кнопки
void FaitWindow::attack()
  { BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);
    bit = 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////

    if ((player_SPAT_dominate == 2) && (number_of_AT == 0))
    {
    unblock_AT();
    int crit;
    crit = qrand() % 9;
    if (crit < player->get_CRIT() )
    {
        if ( Monster->get_AR()  - 2*player->get_AT() < 0)
        {
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take crit " + QString::number( 2*player->get_AT() - Monster->get_AR()) + " damage");
         Monster->set_HP(Monster->get_HP() - ( 2*player->get_AT() - Monster->get_AR()) );
       player_SPAT_dominate = 1;


        }
        else
        {
             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take 0 damage");
       player_SPAT_dominate = 1;


        }
    }
    else
    {
        if ( Monster->get_AR()  - player->get_AT() < 0)
        {
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take  " + QString::number( player->get_AT() - Monster->get_AR()) + " damage");
          Monster->set_HP(Monster->get_HP() - ( player->get_AT() - Monster->get_AR()) );
         player_SPAT_dominate = 1;


        }
        else
        {
            ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take 0 damage");
          player_SPAT_dominate = 1;


        }

    }


    if ( (Monster->get_HP() == 0) ||  (Monster->get_HP() < 0))
    {
         monster_is_dead();

//        unblock_AT();
//         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Вы получили " + QString::number(player->get_ammunition()+ Monster->get_ammunition()) + "   монет");
//        player->set_ammunition(player->get_ammunition()+ Monster->get_ammunition());
//       go_to_station(currentMonsterId); //TODO: Fix me

    }
    else{
    update();
     bit = 1;
    }
   }

///////////////////////////////////////////////////////////////////////////////////////////////////////

    if (( number_of_AT == 0)  && ( player_SPAT_dominate == 1) &&(bit == 0))
    {
        unblock_AT();
        int crit;
        crit = qrand() % 9;
        if (crit < player->get_CRIT() )
        {
            if ( Monster->get_AR()  - 2*player->get_AT() < 0)
            {
             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take crit " + QString::number( 2*player->get_AT() - Monster->get_AR()) + " damage");
             Monster->set_HP(Monster->get_HP() - ( 2*player->get_AT() - Monster->get_AR()) );
            player_SPAT_dominate = 2;
            block_AT();
            }
            else
            {
                 ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take 0 damage");
            player_SPAT_dominate = 2;
            block_AT();
            }
        }
        else
        {
            if ( Monster->get_AR()  - player->get_AT() < 0)
            {
             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take  " + QString::number( player->get_AT() - Monster->get_AR()) + " damage");
              Monster->set_HP(Monster->get_HP() - ( player->get_AT() - Monster->get_AR()) );
            player_SPAT_dominate = 2;
            block_AT();
            }
            else
            {
                ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take 0 damage");
            player_SPAT_dominate = 2;
            block_AT();
            }

        }



        if ( (Monster->get_HP() == 0) ||  (Monster->get_HP() < 0))
        {
 monster_is_dead();
//            unblock_AT();
//             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Вы получили " + QString::number(player->get_ammunition()+ Monster->get_ammunition()) + "   монет");
//            player->set_ammunition(player->get_ammunition()+ Monster->get_ammunition());
//           go_to_station(currentMonsterId); //TODO: Fix me

        }
        else{
            bit = 1;
        update();
        }

    }

///////////////////////////////////////////////////////////////////////////////////////////////////////

    if (((number_of_AT == 1) || (player_SPAT_dominate == Monster_SPAT_dominate) ) &&(bit == 0))
   // if (number_of_AT == 2)
    {

        unblock_AT();
        int crit;
        crit = qrand() % 9;
        if (crit < player->get_CRIT() )
        {
            if ( Monster->get_AR()  - 2*player->get_AT() < 0)
            {
             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take crit " + QString::number( 2*player->get_AT() - Monster->get_AR()) + " damage");
             Monster->set_HP(Monster->get_HP() - ( 2*player->get_AT() - Monster->get_AR()) );

            block_AT();
            }
            else
            {
                 ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take 0 damage");

            block_AT();
            }
        }
        else
        {
            if ( Monster->get_AR()  - player->get_AT() < 0)
            {
             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take  " + QString::number( player->get_AT() - Monster->get_AR()) + " damage");
              Monster->set_HP(Monster->get_HP() - ( player->get_AT() - Monster->get_AR()) );

            block_AT();
            }
            else
            {
                ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Monster take 0 damage");

            block_AT();
            }

        }


        if ( (Monster->get_HP() == 0) ||  (Monster->get_HP() < 0))
        {
               monster_is_dead();
//            unblock_AT();
//             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Вы получили " + QString::number(player->get_ammunition()+ Monster->get_ammunition()) + "   монет");
//            player->set_ammunition(player->get_ammunition()+ Monster->get_ammunition());
//           go_to_station(currentMonsterId); //TODO: Fix me

        }
        else{
               bit = 1;
        update();
        }
    }
  }

///////////////////////////////////////////////////////////////////////////////////////////////////////

void FaitWindow::go_to_station(int ID)
{
    emit stateChanged(GraphicStates::GAME_MAP, ID);
}


void FaitWindow::go_to_bandage()
{
    if (entites->getGoodCharacterById(0)->getCurrentBandage()>0){
    entites->getGoodCharacterById(0)->set_HP(entites->getGoodCharacterById(0)->get_HP()+25);
    entites->getGoodCharacterById(0)->setCurrentBandage(entites->getGoodCharacterById(0)->getCurrentBandage()-1);
    if (entites->getGoodCharacterById(0)->get_HP()>100){
        entites->getGoodCharacterById(0)->set_HP(100);
    }
    }
    else{  ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  " Аптечки как всегда заканчиваются в неподходящий момент...  ");
        }
        update();
}
// короче, пока что сделаю прибавку к ХП, потом нужно переделать под защиту



void FaitWindow::defense()
{
    bit = 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////

       if ((Monster_SPAT_dominate == 2) && (number_of_AT == 1)  && (bit == 0))
       {

    //unblock_AT();

    //BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);

   player->set_AR(player->get_AR() + 5);
    damage();
    player->set_AR(player->get_AR() - 5);

    bit = 1;
    Monster_SPAT_dominate = 1;


    if (player->get_HP() == 0 || player->get_HP() < 0)
    {
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");

         pause();
        emit stateChanged(GraphicStates::MAIN_MENU,0);

    }
       }

///////////////////////////////////////////////////////////////////////////////////////////////////////

        if ((Monster_SPAT_dominate == 1) && (number_of_AT == 1)  && (bit == 0))
        {


            //BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
            Goodcharacter* player=entites->getGoodCharacterById(0);
           player->set_AR(player->get_AR() + 5);
            damage();
            unblock_AT();
            player->set_AR(player->get_AR() - 5);
             Monster_SPAT_dominate = 2;
            bit = 1;

            if (player->get_HP() == 0 || player->get_HP() < 0)
            {
                 ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
                 pause();
                emit stateChanged(GraphicStates::MAIN_MENU,0);

            }
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////

         if ( ((player_SPAT_dominate == Monster_SPAT_dominate)) &&(bit == 0)&&(number_of_AT  == 5))
       //if (((number_of_AT == 1) || (player_SPAT_dominate == Monster_SPAT_dominate) ) &&(bit == 0))
       // if (number_of_AT == 2)
         {


              //BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
              Goodcharacter* player=entites->getGoodCharacterById(0);
             player->set_AR(player->get_AR() + 5);
              damage();
              player->set_AR(player->get_AR() - 5);

              bit = 1;
              unblock_AT();

              if (player->get_HP() == 0 || player->get_HP() < 0)
              {
                   ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
                   pause();
                  emit stateChanged(GraphicStates::MAIN_MENU,0);

              }
         }
///////////////////////////////////////////////////////////////////////////////////////////////////////


         if ( ((player_SPAT_dominate == 2)) &&(bit == 0)&&(number_of_AT  == 0))

         {


              //BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
              Goodcharacter* player=entites->getGoodCharacterById(0);
             player->set_AR(player->get_AR() + 5);
              damage();
              player->set_AR(player->get_AR() - 5);

              bit = 1;
              unblock_AT();

              if (player->get_HP() == 0 || player->get_HP() < 0)
              {
                   ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
                   pause();
                  emit stateChanged(GraphicStates::MAIN_MENU,0);

              }
         }

///////////////////////////////////////////////////////////////////////////////////////////////////////

         if ( ((player_SPAT_dominate == 2)) &&(bit == 0)&&(number_of_AT  == 0))

                  {


                       //BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
                       Goodcharacter* player=entites->getGoodCharacterById(0);
                      player->set_AR(player->get_AR() + 5);
                       damage();
                       player->set_AR(player->get_AR() - 5);

                       bit = 1;
                       unblock_AT();

                       if (player->get_HP() == 0 || player->get_HP() < 0)
                       {
                            ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
                            pause();
                           emit stateChanged(GraphicStates::MAIN_MENU,0);

                       }
                  }



}

void FaitWindow::evasion()
{  Goodcharacter* player=entites->getGoodCharacterById(0);

    bit = 0;


///////////////////////////////////////////////////////////////////////////////////////////////////////
         if ((Monster_SPAT_dominate == 2) && (number_of_AT == 1)  && (bit == 0))
         {


    int lucky;
    lucky = qrand() % 9;
    if (lucky < player->get_MISS() )
    {
          ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take 0 damage");
          //unblock_AT();
          bit = 1;
          Monster_SPAT_dominate = 1;
    }
    else
    {
     damage();
      bit = 1;
      Monster_SPAT_dominate = 1;
    }
    if (player->get_HP() <= 0)
    {
        ui->btn_ataka->setEnabled(0);
        ui->bag->setEnabled(0);
        ui->def->setEnabled(0);
        ui->miss->setEnabled(0);
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
         pause();
        emit stateChanged(GraphicStates::MAIN_MENU,0);
    }
         }
///////////////////////////////////////////////////////////////////////////////////////////////////////


         if ((Monster_SPAT_dominate == 1) && (number_of_AT == 1)  && (bit == 0))
         {

    int lucky;
    lucky = qrand() % 9;
    if (lucky < player->get_MISS() )
    {
          ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take 0 damage");
          unblock_AT();
          bit = 1;
          Monster_SPAT_dominate = 2;
    }
    else
    {
      FaitWindow::damage();
       unblock_AT();
      bit = 1;
      Monster_SPAT_dominate = 2;
    }
    if (player->get_HP() <= 0)
    {
        ui->btn_ataka->setEnabled(0);
        ui->bag->setEnabled(0);
        ui->def->setEnabled(0);
        ui->miss->setEnabled(0);
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
         pause();
        emit stateChanged(GraphicStates::MAIN_MENU,0);
    }
         }

///////////////////////////////////////////////////////////////////////////////////////////////////////


        if  ( (player_SPAT_dominate == Monster_SPAT_dominate) &&(bit == 0))

         {


    int lucky;
    lucky = qrand() % 9;
    if (lucky < player->get_MISS() )
    {
          ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take 0 damage");
          unblock_AT();
          bit = 1;

    }
    else
    {
      FaitWindow::damage();
       unblock_AT();
      bit = 1;
    }
    if (player->get_HP() <= 0)
    {
        ui->btn_ataka->setEnabled(0);
        ui->bag->setEnabled(0);
        ui->def->setEnabled(0);
        ui->miss->setEnabled(0);
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
         pause();
        emit stateChanged(GraphicStates::MAIN_MENU,0);
    }
         }
///////////////////////////////////////////////////////////////////////////////////////////////////////

        if ( ((player_SPAT_dominate == 2)) &&(bit == 0)&&(number_of_AT  == 0))
        {

            int lucky;
            lucky = qrand() % 9;
            if (lucky < player->get_MISS() )
            {
                  ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take 0 damage");
                  unblock_AT();
                  bit = 1;

            }
            else
            {
              FaitWindow::damage();
               unblock_AT();
              bit = 1;
            }
            if (player->get_HP() <= 0)
            {
                ui->btn_ataka->setEnabled(0);
                ui->bag->setEnabled(0);
                ui->def->setEnabled(0);
                ui->miss->setEnabled(0);
                 ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
                 pause();
                emit stateChanged(GraphicStates::MAIN_MENU,0);
        }

        }
///////////////////////////////////////////////////////////////////////////////////////////////////////
}

bool FaitWindow::getIsRound() const
{
    return isRound;
}

void FaitWindow::set_round()
{
    isRound = !isRound;
}

void FaitWindow::on_def_clicked()
{

        defense();
        update();

}

void FaitWindow::on_miss_clicked()
{
evasion();
update();
}


void FaitWindow::on_battle_clicked()
{
    BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);
ui->battle->setEnabled(0);
 ui->Textbatlle->setText(" ");
    update();

    if (( player->get_SPAT()  == Monster->get_SPAT()*2) || ((player->get_SPAT() - 2*Monster->get_SPAT()) > 0))
            {
        player_SPAT_dominate = 2;
        //переменная, которая запоминает, кто бьёт 2 раза ( игрок 0, монстр 1)
        number_of_AT = 0;
    }

     if (( Monster->get_SPAT() == player->get_SPAT()*2)  || ( (Monster->get_SPAT() - 2*player->get_SPAT()) > 0  ))
     {
          Monster_SPAT_dominate = 2;
            number_of_AT = 1;
     }




     if ((player->get_SP()) > (Monster->get_SP()))
     {
    unblock_AT();
     }
     else
     {
     block_AT();
     }
}

void FaitWindow::monster_is_dead()
{
    BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
       Goodcharacter* player=entites->getGoodCharacterById(0);

       ui->Textbatlle->setText(" ");
       ui->PlayertextEdit->setText(" ");
       ui->MonstertextEdit->setText(" ");


       ui->battle->setEnabled(0);
       ui->btn_ataka->setEnabled(0);
       ui->bag->setEnabled(0);
       ui->def->setEnabled(0);
       ui->miss->setEnabled(0);
       ui->go->setEnabled(1);

    //unblock_AT();
     ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Вы получили " + QString::number(player->get_ammunition()+ Monster->get_ammunition()) + "   монет");
    player->set_ammunition(player->get_ammunition()+ Monster->get_ammunition());

    if ( currentMonsterId == 1)
    {
        ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  "Через несколько метров вы  находите дверь и заходите на станцию.Вы получили 15 монет Сделав последний рывок, вы рассекаете Тень на 2 части, и она исчезает. Вы идете дальше и видите скелеты разных людей в рваной одежде. Видимо другие жертвы Тени. Перед баррикадой, ведущей к станции, вы видите женский скелет, сжимающий другой, маленький, в старом, изодранном от старости платье. Чувство жалости переполняет вас. Вы начинаете понимать: "+"\n" "Девушка покинула станцию, что бы спасти свою дочь, но дверь ей никто не открыл и она так и умерла здесь, с дочерью на руках, а ее дух не нашел покоя."+"\n" +"Вы разбегаетесь, и со всей силы выбиваете проржавевшую дверь баррикады. "+"\n"+"\n"+"Путь открыт.");
    }
    if ( currentMonsterId == 2)
    {
        ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  "                               ");
    }
    if ( currentMonsterId == 3)
    {
        ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  "                               ");
    }
    if ( currentMonsterId == 4)
    {
        ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+"\n"+  "                               ");
    }
    if ( currentMonsterId == 5)
    {
      ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+  "                               ");
    }

}

void FaitWindow::on_go_clicked()
{
     go_to_station(currentMonsterId); //TODO: Fix me
}
