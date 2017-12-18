#include "prolog.h"
#include "ui_prolog.h"

Prolog::Prolog(QWidget *parent, GameEntites *entites) :
    QWidget(parent),
    ui(new Ui::Prolog)
{
      entites->initGame();
    ui->setupUi(this);
    connect(ui->go_to_menu,&QPushButton::clicked,this,&Prolog::go_to_menu_clicked);
}

Prolog::~Prolog()
{
    delete ui;
}

void Prolog::go_to_menu_clicked()
{
    emit stateChanged(GraphicStates::GAME_MAP,0);
}
