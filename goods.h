#ifndef GOODS_H
#define GOODS_H
#include <QObject>

class goods
{
private:
    int goodsId;
    QString goodsName;
    int goodsCost;
    //свойства предметов?
public:
    goods(int id, QString name, int cost);


};

#endif // GOODS_H
