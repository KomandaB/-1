#ifndef DEALER_H
#define DEALER_H
#include <QString>
#include <QObject>
#include <QVector>
class Dealer
{
public:
    Dealer(){}
    Dealer(int DealerId, QString DealerName);
    QString getDealerName() const;

    int getDealerId() const;
    void addItem(int itemId);
    
    QVector<int> getInventory() const;

private:
    int dealerId;
    QString dealerName;
    QVector<int> Inventory;
};

#endif // DEALER_H
