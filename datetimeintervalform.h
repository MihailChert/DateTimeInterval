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

    DateTimeInterval* getInterval();

private:
    Ui::DateTimeIntervalForm* ui;
    DateTimeInterval* _timeDelta;

    void updateResult();

signals:
    void intervalChanged();
private slots:
    void on_RemoveTimeIntervalButton_clicked();
    void onDateTimeFinishChenged();
};

#endif // DATETIMEINTERVALFORM_H
