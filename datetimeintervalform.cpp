#include "datetimeintervalform.h"
#include "ui_DateTimeIntervalForm.h"
#include "datetimeinterval.h"

DateTimeIntervalForm::DateTimeIntervalForm(QWidget *parent)
    : QWidget(parent), ui(new Ui::DateTimeIntervalForm)
{
    ui->setupUi(this);


    ui->InputStartDate->setDate(QDate::currentDate());
    ui->InputEndDate->setDate(QDate::currentDate());

    ui->InputStartTime->setTime(QTime::currentTime());
    ui->InputEndTime->setTime(QTime::currentTime());

    _timeDelta = new DateTimeInterval();

    connect(ui->InputStartDate, &QDateEdit::dateChanged, this, &DateTimeIntervalForm::onDateTimeFinishChenged);
    connect(ui->InputStartTime, &QTimeEdit::timeChanged, this, &DateTimeIntervalForm::onDateTimeFinishChenged);
    connect(ui->InputEndDate, &QDateEdit::dateChanged, this, &DateTimeIntervalForm::onDateTimeFinishChenged);
    connect(ui->InputEndTime, &QTimeEdit::timeChanged, this, &DateTimeIntervalForm::onDateTimeFinishChenged);
}

DateTimeIntervalForm::~DateTimeIntervalForm(){
    delete ui, _timeDelta;
}

void DateTimeIntervalForm::updateResult(){
    ui->SecondsResult->setText(_timeDelta->toSecondsString());
    ui->MinResult->setText(_timeDelta->toMinutesString());
    ui->HoursResult->setText(_timeDelta->toHoursString());
    ui->DaysResult->setText(_timeDelta->toDaysString());
}

void DateTimeIntervalForm::onDateTimeFinishChenged()
{
    QDateTime start = QDateTime(ui->InputStartDate->date(), ui->InputStartTime->time());
    QDateTime end = QDateTime(ui->InputEndDate->date(), ui->InputEndTime->time());
    _timeDelta->recalculate(start, end);
    this->updateResult();
    emit intervalChanged();
}

DateTimeInterval DateTimeIntervalForm::getInterval(){
    return DateTimeInterval(*_timeDelta);
}



void DateTimeIntervalForm::on_RemoveTimeIntervalButton_clicked()
{
    emit intervalRemoveClick(this);
}

