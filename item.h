#ifndef ITEM_H
#define ITEM_H
#include<QString>
enum class ItemType{WEAPONS,ARMOR,BANDAGE};

class Item
{

public:
    Item();
    Item(int id,QString name,int price,ItemType type);

    virtual ItemType getType() const;

    virtual int getId() const;

    virtual QString getName() const;

    virtual int getPrice() const;

private:
    int id;
    QString name;
    int price;
    ItemType type;
};

#endif // ITEM_H
