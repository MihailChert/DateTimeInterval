#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "datetimeintervalform.h"
#include <QVBoxLayout>
#include <QWidget>
#include <QSpacerItem>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _scroll_area_layout = new QVBoxLayout();
    _scroll_area_widget = new QWidget();
    _scroll_area_widget->setLayout(_scroll_area_layout);
    ui->scrollArea->setWidget(_scroll_area_widget);
}

void MainWindow::before_show(){
    DateTimeIntervalForm* content = new DateTimeIntervalForm();
    _scroll_area_layout->addWidget(content);
    content->show();
    _scroll_area_layout->addSpacerItem(new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding));
}

MainWindow::~MainWindow()
{

    delete _scroll_area_layout;
    delete _scroll_area_widget;
    delete ui;
}

void MainWindow::on_AddTimeIntervalButton_clicked()
{
    DateTimeIntervalForm* content = new DateTimeIntervalForm();
    _scroll_area_layout->insertWidget(_scroll_area_layout->count()-1, content);
}

