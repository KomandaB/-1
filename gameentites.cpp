#include "gameentites.h"
#include "QDebug"
GameEntites::GameEntites()
{

}

Dealer *GameEntites::getDealerById(int DealerId)
{
    if (DealerMap.contains(DealerId)){
        return &DealerMap[DealerId];
    } else {
        return nullptr;
    }
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
    initDealer();
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
    StationsMap[1] = Station(1, "Маяковская", stationIds, charIds,"Подойдя ближе к станции, вас встречают 2 бойца, который помогают вам взобраться. Они вас отряхивают и советуют найти электрика, так как ваш фонарик совсем слаб, а без него вас просто убьют во тьме.");
    //---------------------------------------------------------------------------
     stationIds.clear();//почему не очищаем вектор людей?
     stationIds.push_back(3);
    //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
     charIds.push_back(1);
     StationsMap[2] = Station(2, "Достаевская", stationIds, charIds,"Боец провожает вас до станции, помогает забраться на платформу и протягивает руку. Вы недоверчиво пожимаете его, затем, не говоря не слово уходи в сторону оружейной. Вы оглядываете станцию, к вашему большому удивлению она полна жизни. Вас поражает то, как люди приспособились к выживанию в этих суровых условиях и продолжают жить. На станции огромное кол-во торговцев, ремесленников. И да же есть своя библиотека, пусть она и насчитывает всего 2 полки. Что вы будете делать: Пойдете к торговцу, или сразу пойдете дальше. Но было бы неплохо поблагодарить незнакомца, не правда ли?");
     //---------------------------------------------------------------------------
      stationIds.clear();//почему не очищаем вектор людей?
      stationIds.push_back(4);
      //зачем мне это если я сразу могу написать ниже,, что прописывается в скобках
      charIds.push_back(1);
      StationsMap[3] = Station(3,"Пушкинская", stationIds, charIds,"Пушкинская оказалась довольно мертвой станцией. Из преимуществ тут был только торговый и странный человек в скафадре в углу. Что будем делать?");
    //---------------------------------------------------------------------------
    stationIds.clear();//почему не очищаем вектор людей?
    charIds.push_back(1);
    StationsMap[4] = Station(4, "Обводный канал", stationIds, charIds," Вот мое путешествие и закончено И выбираюсь на свет ");
//-----------------------------------------------------------------------------

}

void GameEntites::initBadCharacters()
{

//    GoodCharactersMap[0] = GoodCharacter(0,"Ivan");


//    GoodCharactersMap[1] = GoodCharacter(1,"Makcim");


//    BadCharactersMap[0] = BadCharacter(50, 15 ,10 , 30, 40 , 2 , 0);// Dangerouse rat
//    BadCharactersMap[1] = BadCharacter(40, 12 ,5 ,10 , 1 , 3 , 1);//
//    BadCharactersMap[2] = BadCharacter(40, 12 ,5 ,25 , 10 , 3 , 2);//
//    BadCharactersMap[3] = BadCharacter(20,50,1,1,1,3, 3 );//



//    BadCharactersMap[4] = BadCharacter(20,50,10,1,1,3,4);//
//    BadCharactersMap[5] = BadCharacter(20,50,0,0,0,3,5);//
        //BadCharactersMap[0] = BadCharacter(50, 15 ,10 , 30,  40  ,  2 ,  0);// Dangerouse rat
        BadCharactersMap[1] = BadCharacter(40, 12 ,5  ,10 ,    1 ,  3 ,  1);//
        BadCharactersMap[2] = BadCharacter(40, 12 ,5  ,25 ,    10 ,  3 ,  2);//
        BadCharactersMap[3] = BadCharacter(30,20  ,1,  1,  25,     8,    3     );//
        BadCharactersMap[4] = BadCharacter(60,10,10,1,1,3,4);//
        BadCharactersMap[5] = BadCharacter(20,60,1,30,1,3,5);//
//weaponsMap[0]=(12,"ownldwk");

    //TODO: INITIALISE MORE
}

void GameEntites::initGoodCharacters()
{
    GoodCharactersMap[0]=Goodcharacter(100      ,9      ,10     ,20        ,10           , 5        ,5       ,100,0,1,1);
    GoodCharactersMap[0].addItem(0);
    GoodCharactersMap[0].addItem(1);
      GoodCharactersMap[0].addItem(2);

}


void GameEntites::initNonPlayerCharacters(){

    NonPlayerCharactersMap[0] = NonPlayerCharacter(0, "Дедан");
    NonPlayerCharactersMap[0].setNonPlayerCharacterPhrases("Здравствуй next *делает глубокий вздох* next *открывает глаза* Ты стал мне сыном, но я понимаю, что ты должен идти своей дорогой. Помни тому, что я тебя учил, бойся выйперов и анимешаников, они обезумели без бурятских мультиков и голых рисованных девушек. Иди же, кохай на встречу приключениям");
    NonPlayerCharactersMap[0].setPlayerAnswers("Кама сэмпай, я наконец решился покинуть это место next Учитель, я должен покинуть у станцию, я должен найти свое место \n в этом прогнившем мире, полном боли, страданий и унижения next Спасибо, мастер ");

    NonPlayerCharactersMap[1] = NonPlayerCharacter(1, "Электрик");
    NonPlayerCharactersMap[1].setNonPlayerCharacterPhrases("*работает над щитком* next *отрывается от работы, смотрит на вас, на фонарь. Берет его, внимательно разглядывает и начинает над ним колдовать* Держи, да пребудут с тобой фиксики next Ну, фиксики, они живут в технике и чинят ее, когда ломается *внезапно хватает вас за голову, притягивает к себе и шепчет* Но это, большой-большой секрет. Меня, кстати Дядя Федор зовут next Послушай, Кирилл, когда-то я был такой же, как ты, молодой, храбрый, меня то же вела дорого приключений, но мне прострелили колено next Бог в помощь, а как ты узнал, что я могу помочь? next Но, у нас нет охранников, да и не было никогда. Зачем они нам? Тут края тихие, спокойные");
    NonPlayerCharactersMap[1].setPlayerAnswers("Здравствуй мужик, не поможешь мне - фонарик чего-то барахлит next Кто-кто? next Приятно познакомится, Кирилл next Ладно, я пойду, спасибо за помощь, Федор next Мне Охранники посоветовали next Всего доброго");

    NonPlayerCharactersMap[2] = NonPlayerCharacter(2, "Таня");
    NonPlayerCharactersMap[2].setNonPlayerCharacterPhrases("*Ваш спаситель с удивлением на вас смотрит*next*Он резво ее пожимает*next *Незнакомец снимает шлем, и перед вами предстает милая девушка с короткой стрижкой и большими глазами.*next *Смеется*next Ты можешь отблагодарить меня, если отправишься на станцию Пушкинская и убьешь монстра по пути, что бы мы могли расшириться.next Рассчитываем на тебя, Кирилл. Ты очень сильно нам поможешь");
    NonPlayerCharactersMap[2].setPlayerAnswers("Привет мужик, хотел поблагодарить за спасение! *Вы протягиваете руку незнакомцу*nextМеня зовут Кирилл, я путешественник - хочу выбраться из метро, но монстры застали меня врасплох, если бы не ты, то я был бы на том свете.next*вы застыли от удивление, открыли рот, пытаетесь что-то сказать , но у вас ничего получается* next Еще раз спасибо вам, за помощь next Что ж, услуга за услугу");

    NonPlayerCharactersMap[3] = NonPlayerCharacter(3, "Незнакомец");
    NonPlayerCharactersMap[3].setNonPlayerCharacterPhrases("*Его шлем блестит под светом вашего фонаря.*next*У него отваливается голова.*");
    NonPlayerCharactersMap[3].setPlayerAnswers("*Вы пытаетесь его разбудить, но безуспешно.* next *Вы понимаете, что он мертв.*");


}
void GameEntites::initItem(){
    ItemMap[0]= new bandage (0,"Аптечка",3, ItemType::BANDAGE, 5);
    ItemMap[1] = new Weapons(1,"Melee Knife",3, ItemType::WEAPONS, 10,10);
    ItemMap[2]= new Armor(2,"Assault",3, ItemType::ARMOR, 5,10);
    ItemMap[3] = new Weapons(3,"Melee Knife",3, ItemType::WEAPONS, 10,10);
    ItemMap[4]= new Armor(4,"Assault",3, ItemType::ARMOR, 5,10);
    ItemMap[5] = new Weapons(5,"Melee Knife",3, ItemType::WEAPONS, 10,10);
}
void GameEntites::initDealer(){
    DealerMap[0]= Dealer(0,"Вася");
    DealerMap[0].addItem(0);
    DealerMap[0].addItem(1);
    DealerMap[0].addItem(2);
    DealerMap[0].addItem(3);
    DealerMap[0].addItem(4);
    DealerMap[1]= Dealer(0,"Игорь");
    DealerMap[1].addItem(0);
    DealerMap[2]= Dealer(0,"Вася");
    DealerMap[2].addItem(0);
    DealerMap[3]= Dealer(0,"Вася");
    DealerMap[3].addItem(0);
    DealerMap[4]= Dealer(0,"Вася");
    DealerMap[4].addItem(0);
    DealerMap[5]= Dealer(0,"Вася");
    DealerMap[5].addItem(0);
    DealerMap[6]= Dealer(0,"Вася");
    DealerMap[6].addItem(0);

}
