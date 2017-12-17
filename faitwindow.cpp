#include "faitwindow.h"
#include "ui_faitwindow.h"

FaitWindow::FaitWindow(QWidget *parent, GameEntites *entites, int ID) :
    QMainWindow(parent),
    ui(new Ui::FaitWindow),
    entites(entites),
    currentMonsterId(ID)
{
    ui->setupUi(this);
//    BadCharacter* Monster=entites->getBadCharacterById(ID);
//    Goodcharacter* player=entites->getGoodCharacterById(0);
//ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"HP : " + QString::number( player->get_HP()));
//ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"AT : " +QString::number( player->get_AT()));
//ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"DEF: " +QString::number( player->get_AR()));
//ui->PlayertextEdit->setText(ui->PlayertextEdit->toPlainText()+ "\n"+"player have  " + QString::number( player->get_ammunition()) + " coins");

//ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"HP : " + QString::number( Monster->get_HP()));
//ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"AT : " +QString::number(  Monster->get_AT()));
//ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+ "\n"+"DEF: " +QString::number(  Monster->get_AR()));
//ui->MonstertextEdit->setText(ui->MonstertextEdit->toPlainText()+"\n"+"player have  " +QString::number(  Monster->get_ammunition()) + " coins");
    connect(ui->btn_ataka,&QPushButton::clicked,this, &FaitWindow::attack);

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
BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
Goodcharacter* player=entites->getGoodCharacterById(0);


currentMonsterId = ID;
update();

 player_SPAT_dominate = 1;
 Monster_SPAT_dominate = 1;

//if (( player->get_SPAT() / Monster->get_SPAT() == 2) || (player->get_SPAT() / Monster->get_SPAT() > 2))
//        {
//    player_SPAT_dominate = 2;
//    //переменная, которая запоминает, кто бьёт 2 раза ( игрок 0, монстр 1)
//    number_of_AT = 0;
//}
//else{
// if ((( Monster->get_SPAT() / player->get_SPAT()) == 2)  || ( (Monster->get_SPAT() / player->get_SPAT()) > 2  ))
// {
//      Monster_SPAT_dominate = 2;
//        number_of_AT = 1;
// }
//}


 if ((player->get_SP()) > (Monster->get_SP()))
 {
unblock_AT();
 }
 else
 {
 block_AT();
 }

}

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

void pause()
{
    QTime timer;
    timer.start () ;
    for(;timer.elapsed() < 5000;)
    {
        qApp->processEvents(0);
    }
}

// Функция получения урона игроком для кнопки
void FaitWindow::damage( )
{
    BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);


 block_AT();


    if (player->get_AR() < Monster->get_AT())
    {
    ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take  " + QString::number(  Monster->get_AT() - player->get_AR()) + " damage");
    player->set_HP( player->get_HP() - ( Monster->get_AT() - player->get_AR())) ;

    }

    else {
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take 0 damage");


    }

      unblock_AT();
}
// функция нанесения урона игроком для кнопки
void FaitWindow::attack()
  { BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);
    bit = 0;

    if ((player_SPAT_dominate == 2) & (number_of_AT == 0))
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

        unblock_AT();
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Вы получили " + QString::number(player->get_ammunition()+ Monster->get_ammunition()) + "   монет");
        player->set_ammunition(player->get_ammunition()+ Monster->get_ammunition());
       go_to_station(currentMonsterId); //TODO: Fix me

    }
    else{
    update();
     bit = 1;
    }
   }


    if (( number_of_AT == 0)  && ( player_SPAT_dominate == 1) &(bit == 0))
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

            unblock_AT();
             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Вы получили " + QString::number(player->get_ammunition()+ Monster->get_ammunition()) + "   монет");
            player->set_ammunition(player->get_ammunition()+ Monster->get_ammunition());
           go_to_station(currentMonsterId); //TODO: Fix me

        }
        else{
            bit = 1;
        update();
        }

    }
    if ((number_of_AT == 1) || (player_SPAT_dominate == Monster_SPAT_dominate))
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

            unblock_AT();
             ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Вы получили " + QString::number(player->get_ammunition()+ Monster->get_ammunition()) + "   монет");
            player->set_ammunition(player->get_ammunition()+ Monster->get_ammunition());
           go_to_station(currentMonsterId); //TODO: Fix me

        }
        else{
        update();
        }
    }
  }

void FaitWindow::go_to_station(int ID)
{
    emit stateChanged(GraphicStates::GAME_MAP, ID);
}

// короче, пока что сделаю прибавку к ХП, потом нужно переделать под защиту

void FaitWindow::defense()
{

    unblock_AT();

    //BadCharacter* Monster=entites->getBadCharacterById(currentMonsterId);
    Goodcharacter* player=entites->getGoodCharacterById(0);
   player->set_AR(player->get_AR() + 5);
    FaitWindow::damage();
    player->set_AR(player->get_AR() - 5);
    if (player->get_HP() == 0 || player->get_HP() < 0)
    {
         ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+"       GAME       OVER     ");
         pause();
        emit stateChanged(GraphicStates::MAIN_MENU,0);

    }
}

void FaitWindow::evasion()
{  Goodcharacter* player=entites->getGoodCharacterById(0);


    int lucky;
    lucky = qrand() % 9;
    if (lucky < player->get_MISS() )
    {
          ui->Textbatlle->setText(ui->Textbatlle->toPlainText()+ "\n"+" Player take 0 damage");
          unblock_AT();
    }
    else
    {
      FaitWindow::damage();
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

