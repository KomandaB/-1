#include "station.h"

Station::Station()
{

}

Station::Station(int _stationId, QString _stationName, const QVector<int> &_stationsToMove, const QVector<int> &_charactersId,QString _stationInformation) :
    stationId(_stationId),
    stationName(_stationName),
    stationsToMove(_stationsToMove),//копируем
    charactersId(_charactersId),
    stationInformation(_stationInformation)

{
}

int Station::getStationId() const
{
    return stationId;
}

QString Station::getStationName() const
{

    // сюда больше ничего не надо добавлять
    return stationName;
}

bool Station::getWasVisited() const
{
    return wasVisited;
}

void Station::setWasVisited(bool value)
{
    wasVisited = value;
}

QVector<int> Station::getStationsToMove() const
{
    return stationsToMove;


}

QVector<int> Station::getCharactersId() const
{
    return charactersId;
}
QString Station::getStationInformation() const
{

    // сюда больше ничего не надо добавлять
    return stationInformation;
}

//int Station::getPreviousStationId() const
//{

//    return previousStationId;
//}

//void Station::setPreviousStationId(int value)
//{
//    previousStationId = value;
//}
