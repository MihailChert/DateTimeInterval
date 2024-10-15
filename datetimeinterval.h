#ifndef DATETIMEINTERVAL_H
#define DATETIMEINTERVAL_H

#include <QDateTime>
#include <QtTypes>
#include <QString>

class DateTimeInterval
{
public:
    DateTimeInterval();
    DateTimeInterval(DateTimeInterval& copiedInterval);
    DateTimeInterval(QDateTime& first, QDateTime& second);
    QString toSecondsString();
    QString toMinutesString();
    QString toHoursString();
    QString toDaysString();
    void recalculate(const QDateTime& first, const QDateTime& seconds);
    virtual DateTimeInterval operator +(const DateTimeInterval& second);
    void operator +=(const DateTimeInterval& summand);

private:
    qint64 _intervalSeconds;

};

#endif // DATETIMEINTERVAL_H
