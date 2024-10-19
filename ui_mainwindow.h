/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddTimeIntervalButton;
    QSpacerItem *horizontalSpacer;
    QFormLayout *SymmaryDaysLayout;
    QLabel *SummaryDaysLable;
    QLabel *SummaryDaysResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 594);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton#RemoveTimeIntervalButton::disabled{color:rgb(192, 191, 188)}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 790, 501));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        //scrollArea->setSizePolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 774, 499));
        scrollArea->setWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 509, 781, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddTimeIntervalButton = new QPushButton(horizontalLayoutWidget);
        AddTimeIntervalButton->setObjectName(QString::fromUtf8("AddTimeIntervalButton"));
        AddTimeIntervalButton->setMinimumSize(QSize(100, 0));
        AddTimeIntervalButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(AddTimeIntervalButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SymmaryDaysLayout = new QFormLayout();
        SymmaryDaysLayout->setObjectName(QString::fromUtf8("SymmaryDaysLayout"));
        SummaryDaysLable = new QLabel(horizontalLayoutWidget);
        SummaryDaysLable->setObjectName(QString::fromUtf8("SummaryDaysLable"));
        SummaryDaysLable->setMinimumSize(QSize(160, 45));

        SymmaryDaysLayout->setWidget(0, QFormLayout::LabelRole, SummaryDaysLable);

        SummaryDaysResult = new QLabel(horizontalLayoutWidget);
        SummaryDaysResult->setObjectName(QString::fromUtf8("SummaryDaysResult"));
        SummaryDaysResult->setMinimumSize(QSize(90, 45));
        SummaryDaysResult->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        SymmaryDaysLayout->setWidget(0, QFormLayout::FieldRole, SummaryDaysResult);


        horizontalLayout->addLayout(SymmaryDaysLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        AddTimeIntervalButton->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        SummaryDaysLable->setText(QApplication::translate("MainWindow", "Sum - days : hours : min : s", 0, QApplication::UnicodeUTF8));
        SummaryDaysResult->setText(QApplication::translate("MainWindow", "0:0:0:0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
