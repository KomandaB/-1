#include "gameentites.h"
#include "QDebug"
GameEntites::GameEntites()
{

}

Goodcharacter *GameEntites::getGoodCharacterById(int GoodCharId)
{
    if (GoodCharactersMap.contains(GoodCharId)){
        return &GoodCharactersMap[GoodCharId];
    } else {
        return nullptr;
    }
}

Item *GameEntites::getItemById(int ItemId)
{
    if (ItemMap.contains(ItemId)){
        return ItemMap[ItemId];
    } else {
        return nullptr;
    }
}
BadCharacter *GameEntites::getBadCharacterById(int BadCharId)
{
    if (BadCharactersMap.contains(BadCharId)){
        return &BadCharactersMap[BadCharId];
    } else {
        return nullptr;
    }
}

NonPlayerCharacter *GameEntites::getNonPlayerCharacterById(int NpcId){
    qDebug()<<NpcId;
    if (NonPlayerCharactersMap.contains(NpcId)){
        return &NonPlayerCharactersMap[NpcId];
    } else {
        return nullptr;
    }

}

Station *GameEntites::getStationById(int stationId)
{
    if (StationsMap.contains(stationId)){
        return &StationsMap[stationId];
    } else {
        return nullptr;
    }
}

void GameEntites::initGame()
{
    initItem();
    initBadCharacters();
    initGoodCharacters();
    initNonPlayerCharacters();
    QVector<int> stationIds;
    stationIds.push_back(1);
    QVector<int> charIds;
    charIds.push_back(0);//добавляется значение
    StationsMap[0] = Station(0, "Невский проспект", stationIds, charIds,"Вам пришлось не сладко, выживая в этом жутко месте. Первые месяцы после катастрофы творился настоящий ад, многие люди покинули станцию, в надежде выбраться из метрополитена, добравшись до конечной. Некоторые люди сразу погибли, плач маленьких детей, еще долго не прекращал звенеть в ваших ушах. Постепенно ваш новый дом вымер, и вы остались одним из последних жителей этого укромного места. ВЫ решаете попытать удачу и выбраться из метро, добравшись до конечной, как это пытались сделать другие. Взяв, старый, добрый нож, надев остатки одежды, вы отправляетесь в путь на поиске нового дома. Но для начала, было бы неплохо, пообщаться с жителями. Неправда, ли?");
   //---------------------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    stationIds.push_back(2);
    stationIds.push_back(3);
    //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
    charIds.push_back(1);
    StationsMap[1] = Station(1, "Маяковская", stationIds, charIds,"Наконец то я добрался до этой станции ");
    //---------------------------------------------------------------------------
     stationIds.clear();//почему не очищаем вектор людей?
     stationIds.push_back(3);
    //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
     charIds.push_back(1);
     StationsMap[2] = Station(2, "Достаевская", stationIds, charIds,"Наконец то я добрался до этой станции ");
     //---------------------------------------------------------------------------
      stationIds.clear();//почему не очищаем вектор людей?
      stationIds.push_back(4);
      //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
      charIds.push_back(1);
      StationsMap[3] = Station(3,"Пушкинская", stationIds, charIds,"Наконец то я добрался до этой станции ");
    //---------------------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    charIds.push_back(1);
    StationsMap[4] = Station(4, "Обводный канал", stationIds, charIds," Вот мое путеществие и закончено И выбираюсь на свет ");
//-----------------------------------------------------------------------------

}

void GameEntites::initBadCharacters()
{

//    GoodCharactersMap[0] = GoodCharacter(0,"Ivan");


//    GoodCharactersMap[1] = GoodCharacter(1,"Makcim");


    BadCharactersMap[0] = BadCharacter(50, 15 ,10 , 30,  40  ,  2 ,  0);// Dangerouse rat
        BadCharactersMap[1] = BadCharacter(40, 12 ,5  ,10 ,    1 ,  3 ,  1);//
        BadCharactersMap[2] = BadCharacter(40, 12 ,5  ,25 ,    10 ,  3 ,  2);//
        BadCharactersMap[3] = BadCharacter(20,50,1,1,1,3,    3     );//
        BadCharactersMap[4] = BadCharacter(20,50,10,1,1,3,4);//
        BadCharactersMap[5] = BadCharacter(20,50,0,0,0,3,5);//
//weaponsMap[0]=(12,"ownldwk");

    //TODO: INITIALISE MORE
}

void GameEntites::initGoodCharacters()
{
    GoodCharactersMap[0]=Goodcharacter(100      ,9      ,10     ,20        ,10           , 5        ,5       ,100);
    GoodCharactersMap[0].addItem(0);
    GoodCharactersMap[0].addItem(1);

}


void GameEntites::initNonPlayerCharacters(){

    NonPlayerCharactersMap[0] = NonPlayerCharacter(0, "Дедан");
    NonPlayerCharactersMap[0].setNonPlayerCharacterPhrases("Здравствуй next *делает глубокий вздох* next *открывает глаза* Ты стал мне сыном, но я понимаю, что ты должен идти своей дорогой. Помни тому, что я тебя учил, бойся выйперов и анимешаников, они обезумели без бурятских мультиков и голых рисованных девушек. Иди же, кохай на встречу приключениям");
    NonPlayerCharactersMap[0].setPlayerAnswers("Кама сэмпай, я наконец решился покинуть это место next Учитель, я должен покинуть у станцию, я должен найти свое место \n в этом прогнившем мире, полном боли, страданий и унижения next Спасибо, мастер ");

    NonPlayerCharactersMap[1] = NonPlayerCharacter(1, "Электрик");
    NonPlayerCharactersMap[1].setNonPlayerCharacterPhrases("*работает над щитком* next *отрывается от работы, смотрит на вас, на фонарь. Берет его, внимательно разглядывает и начинает над ним колдовать* Держи, да пребудут с тобой фиксики next Ну, фиксики, они живут в технике и чинят ее, когда ломается *внезапно хватает вас за голову, притягивает к себе и шепчет* Но это, большой-большой секрет. Меня, кстати Дядя Федор зовут next Послушай, Кирилл, когда-то я был такой же, как ты, молодой, храбрый, меня то же вела дорого приключений, но мне прострелили колено next Бог в помощь, а как ты узнал, что я могу помочь? next Но, у нас нет охранников, да и не было никогда. Зачем они нам? Тут края тихие, спокойные");
    NonPlayerCharactersMap[1].setPlayerAnswers("Здравствуй мужик, не поможешь мне - фонарик чего-то барахлит next Кто-кто? next Приятно познакомится, Кирилл next Ладно, я пойду, спасибо за помощь, Федор next Мне Охранники посоветовали next Всего доброго");
}
void GameEntites::initItem(){
    ItemMap[0]= new Armor(0,"Assault",3, ItemType::ARMOR, 5);
    ItemMap[1] = new Weapons(1,"Melee Knife",3, ItemType::WEAPONS, 10);
}
