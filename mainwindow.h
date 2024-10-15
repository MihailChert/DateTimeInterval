#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void before_show();

private slots:
    void on_AddTimeIntervalButton_clicked();

private:
    Ui::MainWindow *ui;
    QWidget* _scroll_area_widget;
    QVBoxLayout* _scroll_area_layout;
};
#endif // MAINWINDOW_H
