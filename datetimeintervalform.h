#ifndef DATETIMEINTERVALFORM_H
#define DATETIMEINTERVALFORM_H

#include "ui_DateTimeIntervalForm.h"
#include <QWidget>
#include "datetimeinterval.h"

namespace Ui{
class DateTimeIntervalForm;
}

class DateTimeIntervalForm : public QWidget
{
    Q_OBJECT
public:
    explicit DateTimeIntervalForm(QWidget *parent = nullptr);
    ~DateTimeIntervalForm();

    DateTimeInterval getInterval();

private:
    Ui::DateTimeIntervalForm* ui;
    DateTimeInterval* _timeDelta;

    void updateResult();

signals:
    void intervalChanged();
    void intervalRemoveClick(QWidget* removableWidget);
private slots:
    void onDateTimeFinishChenged();
    void on_RemoveTimeIntervalButton_clicked();
};

#endif // DATETIMEINTERVALFORM_H
