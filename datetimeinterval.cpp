#include "datetimeinterval.h"

DateTimeInterval::DateTimeInterval(QDateTime& first, QDateTime& second) {
    if(first.isNull() || second.isNull()){
        this->_intervalSeconds = 0;
        return;
    }
    if(first > second){
        this->_intervalSeconds = 0;
        return;
    }
    this->_intervalSeconds = first.secsTo(second);
}

DateTimeInterval::DateTimeInterval(){
    _intervalSeconds = 0;
}

DateTimeInterval::DateTimeInterval(DateTimeInterval& copiedInterval){
    this->_intervalSeconds = copiedInterval._intervalSeconds;
}

QString DateTimeInterval::toSecondsString(){
    return QString::number(this->_intervalSeconds);
}
QString DateTimeInterval::toMinutesString(){
    qint64 minutes = this->_intervalSeconds / 60;
    qint8 seconds = this->_intervalSeconds % 60;
    return QString::number(minutes) + QString(" : ") + QString::number(seconds);
}

QString DateTimeInterval::toHoursString(){
    qint64 hours = this->_intervalSeconds / 3600;
    qint8 minutes = (this->_intervalSeconds - hours*3600) / 60;
    qint8 seconds = this->_intervalSeconds % 60;
    return QString::number(hours) + QString(" : ") + QString::number(minutes) + QString(" : ") + QString::number(seconds);
}

QString DateTimeInterval::toDaysString(){
    qint64 days = this->_intervalSeconds / (24*3600);
    qint8 hours = (this->_intervalSeconds - days*24*3600) / 3600;
    qint8 minutes = (this->_intervalSeconds - days*24*3600 - hours*3600) / 60;
    qint8 seconds = this->_intervalSeconds % 60;
    return QString::number(days) + QString(" : ") + QString::number(hours) + QString(" : ") + QString::number(minutes) + QString(" : ") + QString::number(seconds);
}

void DateTimeInterval::recalculate(const QDateTime& first, const QDateTime& second){
    if(first > second){
        this->_intervalSeconds = 0;
        return;
    }
    this->_intervalSeconds = first.secsTo(second);
}

DateTimeInterval DateTimeInterval::operator +(const DateTimeInterval& second){
    DateTimeInterval new_date = DateTimeInterval();
    new_date._intervalSeconds = this->_intervalSeconds + second._intervalSeconds;
    return new_date;
}

void DateTimeInterval::operator +=(const DateTimeInterval& summand){
    this->_intervalSeconds += summand._intervalSeconds;
}
