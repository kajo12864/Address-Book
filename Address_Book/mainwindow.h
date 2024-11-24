#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ui_necessaryinfoform.h>
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


private slots:
void on_pushButton_clicked();
void new_Contact_Info(const QIcon &icon, const QString &text);
signals:
void open_NecI_GUI(); //Opens required info gui

private:
    Ui::MainWindow *ui;
    QWidget *necessaryInfoForm;
};


#endif // MAINWINDOW_H
