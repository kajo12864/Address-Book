#ifndef EDITPROFILEINFOFORM_H
#define EDITPROFILEINFOFORM_H

#include <QWidget>
#include ".\ui_editprofileinfoform.h"
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

    void on_cancelBtn_clicked();
public slots:

private:
    Ui::EditProfileInfoForm *ui;

};

#endif // EDITPROFILEINFOFORM_H
