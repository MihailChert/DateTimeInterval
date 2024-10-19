/********************************************************************************
** Form generated from reading UI file 'DateTimeIntervalForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMEINTERVALFORM_H
#define UI_DATETIMEINTERVALFORM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateTimeIntervalForm
{
public:
    QGroupBox *IntervalGroup;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *InputDTGroup;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *InputStartGroupBox;
    QVBoxLayout *verticalLayout_4;
    QDateEdit *InputStartDate;
    QTimeEdit *InputStartTime;
    QLabel *label;
    QGroupBox *InputEndGroupBox;
    QVBoxLayout *InputEndDTLayout;
    QDateEdit *InputEndDate;
    QTimeEdit *InputEndTime;
    QLabel *label_10;
    QFormLayout *OutputIntervals;
    QLabel *SecondsLabel;
    QLabel *SecondsResult;
    QLabel *MinLabel;
    QLabel *MinResult;
    QLabel *HoursLabel;
    QLabel *HoursResult;
    QLabel *DaysLabel;
    QLabel *DaysResult;
    QPushButton *RemoveTimeIntervalButton;

    void setupUi(QWidget *DateTimeIntervalForm)
    {
        if (DateTimeIntervalForm->objectName().isEmpty())
            DateTimeIntervalForm->setObjectName(QString::fromUtf8("DateTimeIntervalForm"));
        DateTimeIntervalForm->resize(780, 130);
        DateTimeIntervalForm->setMinimumSize(QSize(0, 130));
        DateTimeIntervalForm->setMaximumSize(QSize(780, 130));
        DateTimeIntervalForm->setStyleSheet(QString::fromUtf8("QGroupBox#InputEndGroupBox, QGroupBox#InputStartGroupBox, QFormLayout#OutputIntervals{border:1px solid rgb(192, 191, 188); border-radius:5px;}"));
        IntervalGroup = new QGroupBox(DateTimeIntervalForm);
        IntervalGroup->setObjectName(QString::fromUtf8("IntervalGroup"));
        IntervalGroup->setGeometry(QRect(0, 0, 755, 130));
        IntervalGroup->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(IntervalGroup);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        InputDTGroup = new QGroupBox(IntervalGroup);
        InputDTGroup->setObjectName(QString::fromUtf8("InputDTGroup"));
        InputDTGroup->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_2 = new QHBoxLayout(InputDTGroup);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        InputStartGroupBox = new QGroupBox(InputDTGroup);
        InputStartGroupBox->setObjectName(QString::fromUtf8("InputStartGroupBox"));
        InputStartGroupBox->setEnabled(true);
        InputStartGroupBox->setStyleSheet(QString::fromUtf8("border:1px solid rgb(192, 191, 188); border-radius:5px;"));
        verticalLayout_4 = new QVBoxLayout(InputStartGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        InputStartDate = new QDateEdit(InputStartGroupBox);
        InputStartDate->setObjectName(QString::fromUtf8("InputStartDate"));
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        InputStartDate->setFont(font);
        InputStartDate->setCursor(QCursor(Qt::PointingHandCursor));
        InputStartDate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        InputStartDate->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        InputStartDate->setTime(QTime(0, 0, 0));
        InputStartDate->setCalendarPopup(true);
        InputStartDate->setDate(QDate(2024, 10, 1));

        verticalLayout_4->addWidget(InputStartDate);

        InputStartTime = new QTimeEdit(InputStartGroupBox);
        InputStartTime->setObjectName(QString::fromUtf8("InputStartTime"));
        InputStartTime->setCursor(QCursor(Qt::PointingHandCursor));
        InputStartTime->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        InputStartTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        InputStartTime->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        InputStartTime->setCalendarPopup(true);
        InputStartTime->setTime(QTime(14, 0, 0));

        verticalLayout_4->addWidget(InputStartTime);


        horizontalLayout_2->addWidget(InputStartGroupBox);

        label = new QLabel(InputDTGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(20, 100));
        QFont font1;
        font1.setPointSize(34);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        InputEndGroupBox = new QGroupBox(InputDTGroup);
        InputEndGroupBox->setObjectName(QString::fromUtf8("InputEndGroupBox"));
        InputEndGroupBox->setStyleSheet(QString::fromUtf8("border:1px solid rgb(192, 191, 188); border-radius:5px;"));
        InputEndDTLayout = new QVBoxLayout(InputEndGroupBox);
        InputEndDTLayout->setObjectName(QString::fromUtf8("InputEndDTLayout"));
        InputEndDTLayout->setContentsMargins(0, 0, 0, 0);
        InputEndDate = new QDateEdit(InputEndGroupBox);
        InputEndDate->setObjectName(QString::fromUtf8("InputEndDate"));
        InputEndDate->setCursor(QCursor(Qt::PointingHandCursor));
        InputEndDate->setAlignment(Qt::AlignmentFlag::AlignCenter);
        InputEndDate->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        InputEndDate->setCalendarPopup(true);
        InputEndDate->setDate(QDate(2024, 10, 16));

        InputEndDTLayout->addWidget(InputEndDate);

        InputEndTime = new QTimeEdit(InputEndGroupBox);
        InputEndTime->setObjectName(QString::fromUtf8("InputEndTime"));
        InputEndTime->setCursor(QCursor(Qt::PointingHandCursor));
        InputEndTime->setAlignment(Qt::AlignmentFlag::AlignCenter);
        InputEndTime->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        InputEndTime->setCalendarPopup(true);
        InputEndTime->setTime(QTime(16, 0, 0));

        InputEndDTLayout->addWidget(InputEndTime);


        horizontalLayout_2->addWidget(InputEndGroupBox);


        horizontalLayout_3->addWidget(InputDTGroup);

        label_10 = new QLabel(IntervalGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(31, 16777215));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_10);

        OutputIntervals = new QFormLayout();
        OutputIntervals->setObjectName(QString::fromUtf8("OutputIntervals"));
        OutputIntervals->setHorizontalSpacing(20);
        OutputIntervals->setVerticalSpacing(10);
        OutputIntervals->setContentsMargins(10, 7, -1, -1);
        SecondsLabel = new QLabel(IntervalGroup);
        SecondsLabel->setObjectName(QString::fromUtf8("SecondsLabel"));

        OutputIntervals->setWidget(0, QFormLayout::LabelRole, SecondsLabel);

        SecondsResult = new QLabel(IntervalGroup);
        SecondsResult->setObjectName(QString::fromUtf8("SecondsResult"));

        OutputIntervals->setWidget(0, QFormLayout::FieldRole, SecondsResult);

        MinLabel = new QLabel(IntervalGroup);
        MinLabel->setObjectName(QString::fromUtf8("MinLabel"));

        OutputIntervals->setWidget(1, QFormLayout::LabelRole, MinLabel);

        MinResult = new QLabel(IntervalGroup);
        MinResult->setObjectName(QString::fromUtf8("MinResult"));

        OutputIntervals->setWidget(1, QFormLayout::FieldRole, MinResult);

        HoursLabel = new QLabel(IntervalGroup);
        HoursLabel->setObjectName(QString::fromUtf8("HoursLabel"));

        OutputIntervals->setWidget(2, QFormLayout::LabelRole, HoursLabel);

        HoursResult = new QLabel(IntervalGroup);
        HoursResult->setObjectName(QString::fromUtf8("HoursResult"));

        OutputIntervals->setWidget(2, QFormLayout::FieldRole, HoursResult);

        DaysLabel = new QLabel(IntervalGroup);
        DaysLabel->setObjectName(QString::fromUtf8("DaysLabel"));

        OutputIntervals->setWidget(3, QFormLayout::LabelRole, DaysLabel);

        DaysResult = new QLabel(IntervalGroup);
        DaysResult->setObjectName(QString::fromUtf8("DaysResult"));

        OutputIntervals->setWidget(3, QFormLayout::FieldRole, DaysResult);


        horizontalLayout_3->addLayout(OutputIntervals);

        RemoveTimeIntervalButton = new QPushButton(IntervalGroup);
        RemoveTimeIntervalButton->setObjectName(QString::fromUtf8("RemoveTimeIntervalButton"));
        RemoveTimeIntervalButton->setEnabled(true);
        RemoveTimeIntervalButton->setMaximumSize(QSize(25, 16777215));
        RemoveTimeIntervalButton->setCursor(QCursor(Qt::PointingHandCursor));
        RemoveTimeIntervalButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(RemoveTimeIntervalButton);


        retranslateUi(DateTimeIntervalForm);

        QMetaObject::connectSlotsByName(DateTimeIntervalForm);
    } // setupUi

    void retranslateUi(QWidget *DateTimeIntervalForm)
    {
        DateTimeIntervalForm->setWindowTitle(QApplication::translate("DateTimeIntervalForm", "Form", 0, QApplication::UnicodeUTF8));
        InputStartGroupBox->setTitle(QApplication::translate("DateTimeIntervalForm", "From", 0, QApplication::UnicodeUTF8));
        InputStartDate->setDisplayFormat(QApplication::translate("DateTimeIntervalForm", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        InputStartTime->setDisplayFormat(QApplication::translate("DateTimeIntervalForm", "HH:mm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DateTimeIntervalForm", "-", 0, QApplication::UnicodeUTF8));
        InputEndGroupBox->setTitle(QApplication::translate("DateTimeIntervalForm", "To", 0, QApplication::UnicodeUTF8));
        InputEndDate->setDisplayFormat(QApplication::translate("DateTimeIntervalForm", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        InputEndTime->setDisplayFormat(QApplication::translate("DateTimeIntervalForm", "HH:mm", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DateTimeIntervalForm", " => ", 0, QApplication::UnicodeUTF8));
        SecondsLabel->setText(QApplication::translate("DateTimeIntervalForm", "Seconds", 0, QApplication::UnicodeUTF8));
        SecondsResult->setText(QApplication::translate("DateTimeIntervalForm", "0", 0, QApplication::UnicodeUTF8));
        MinLabel->setText(QApplication::translate("DateTimeIntervalForm", "min:sec", 0, QApplication::UnicodeUTF8));
        MinResult->setText(QApplication::translate("DateTimeIntervalForm", "0:0", 0, QApplication::UnicodeUTF8));
        HoursLabel->setText(QApplication::translate("DateTimeIntervalForm", "hours:min:sec", 0, QApplication::UnicodeUTF8));
        HoursResult->setText(QApplication::translate("DateTimeIntervalForm", "0:0:0", 0, QApplication::UnicodeUTF8));
        DaysLabel->setText(QApplication::translate("DateTimeIntervalForm", "days:hours:min:sec", 0, QApplication::UnicodeUTF8));
        DaysResult->setText(QApplication::translate("DateTimeIntervalForm", "0:0:0:0", 0, QApplication::UnicodeUTF8));
        RemoveTimeIntervalButton->setText(QApplication::translate("DateTimeIntervalForm", "X", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DateTimeIntervalForm: public Ui_DateTimeIntervalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMEINTERVALFORM_H
