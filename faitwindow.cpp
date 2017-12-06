#include "faitwindow.h"
#include "ui_faitwindow.h"

FaitWindow::FaitWindow(QWidget *parent, GameEntites *entites, int ID) :
    QMainWindow(parent),
    ui(new Ui::FaitWindow),
    entites(entites)
{
    ui->setupUi(this);

   connect(ui->btn_ataka,&QPushButton::clicked,this, [=] () { Ataka(ID); });  //изменить на батл, т к кнопки менятся не будут, будет только переписыватьс text
}
//сюда передавать Ид монстра
FaitWindow::~FaitWindow()
{
    delete ui;
}

//void FaitWindow::changeMonstrer(id){
//    //прописать всю инфу
//    //может нам нудно еще отдельное окно для информации о монстре ??



//    connect(ui->btn_ataka,&QPushButton::clicked,this, [=] () { Ataka(id); });  //изменить на батл, т к кнопки менятся не будут, будет только переписыватьс text

//}



void FaitWindow::Ataka(int id)
{
   battle(id);
 //   qDebug()<<id;
   emit stateChanged(GraphicStates::GAME_MAP, entites->getBadCharacterById(id)->get_ToStationid());
}
void FaitWindow:: action_1()
{

    //cout << "Select an action" << endl;
    //  cout << "1 - Attake" << endl;
}



void FaitWindow::battle(int monstr_id)
{
    BadCharacter* Monster=entites->getBadCharacterById(monstr_id);
    Goodcharacter* player=entites->getGoodCharacterById(0);

    int action;
    while ((Monster->get_HP() >0) && (player->get_game() == true))
    {
//        cout << endl << endl;
        action_1();
//        cin >> action;
        action=1;

        switch (action)
        {
        case (1):
        {
            Monster->damage(player->get_AT(), Monster->get_AR());

          ui->textEdit->setText("monster take "+QString::number(player->get_AT()));
            if (Monster->get_HP() > 0)
            {
//                cout << "Prepare he attacks" << endl << endl;
//                _getch();

                player->damage(Monster->get_AT());
//                cout << "player take " << Monster.get_AT() << " damage" << endl;
//                cout << "player HP " << player.get_HP() << endl;

                if (player->get_HP() <= 0)
                {
                    emit stateChanged(GraphicStates::WINGAME,0);
                    player->game_over();
                    return;
//                    cout << "              GAME      OVER" << endl; //вызов wingame
                }
            }
            else
            {
             //   cout << "Nice you killed him" << endl;
                player->set_ammunition(Monster->get_ammunition());
              //  cout << "Your get   " << Monster.get_ammunition() << "    ammonitions" << endl << endl;
               // _getch();
                break;
            }
        }
        }

    }
}
