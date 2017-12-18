#include "dealer.h"




Dealer::Dealer(int DealerId,QString DealerName):
    dealerId(DealerId),
  dealerName(DealerName)

{

}

QString Dealer::getDealerName() const
{
    return dealerName;
}

int Dealer::getDealerId() const
{
    return dealerId;
}
QVector<int> Dealer::getInventory() const
{
    return Inventory;
}
void Dealer::addItem(int itemId)
{
     Inventory.push_back(itemId);
}
