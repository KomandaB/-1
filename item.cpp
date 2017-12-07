#include "item.h"

Item::Item()
{

}

Item::Item(int id, QString name, int price, ItemType type):
    id(id), name(name), price(price), type(type)
{

}

ItemType Item::getType() const
{
    return type;
}

int Item::getId() const
{
    return id;
}

QString Item::getName() const
{
    return name;
}

int Item::getPrice() const
{
    return price;
}
