#ifndef EDITPROFILEINFOFORM_H
#define EDITPROFILEINFOFORM_H

#include <QWidget>

namespace Ui {
class EditProfileInfoForm;
}

//Autogenerated by Qt
class EditProfileInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit EditProfileInfoForm(QWidget *parent = nullptr); //Autogenerated by Qt
    ~EditProfileInfoForm(); //Autogenerated by Qt
private slots:
    void open_EditI_GUI(); //Receives that the edit GUI has been requested to open

    void on_cancelBtn_clicked();

private:
    Ui::EditProfileInfoForm *ui;

};

#endif // EDITPROFILEINFOFORM_H
