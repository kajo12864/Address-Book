#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qlistwidget.h>
#include <ui_necessaryinfoform.h>
#include <ui_profiledisplay.h>
#include <QFrame>
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
    void openNecessaryInfoForm();
    std::string contacts[2] = {"John Smith", "Diana Doe"};


private slots:
void on_pushButton_clicked();
void new_Contact_Info(const QIcon &icon, const QString &text);
void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

signals:
void open_NecI_GUI(); //Opens required info gui

private:
    Ui::MainWindow *ui;
    QWidget *necessaryInfoForm;
    QWidget *profiledisplay;
};


#endif // MAINWINDOW_H
