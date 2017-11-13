#ifndef STATION_H
#define STATION_H
#include <QString>
#include <QVector>
class Station
{
public:// то к чему мы можем обращаться из других классов( подключив данный класс через incude)
    Station();//???
    Station(int _stationId, QString _stationName, const QVector<int>& _stationsToMove, const QVector<int>& _charactersId);
    int getStationId() const;//как это работает??

    QString getStationName() const;//возвращает строку, имя теущей станции

    bool getWasVisited() const;
    void setWasVisited(bool value);//value???

    QVector<int> getStationsToMove() const;

    QVector<int> getCharactersId() const;

    int getPreviousStationId() const;// возвращает ID предыдущей станции
    void setPreviousStationId(int value);// value???    почему это не работает как ID этой станции??

private:// только для этого класса
    int stationId;//
    QString stationName;// определяется через функцию
    bool wasVisited  = false;// всегда изменяется на true после проверки
    QVector<int> stationsToMove;//определяется через функцию на основании ID
    QVector<int> charactersId;//определяется через функцию через рандом
    int previousStationId;//приходит как входной папаметр
    //строка с описанием


};

#endif // STATION_H
