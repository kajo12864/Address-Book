#ifndef EDITPROFILEINFOFORM_H
#define EDITPROFILEINFOFORM_H

#include <QWidget>

namespace Ui {
class EditProfileInfoForm;
}

class EditProfileInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit EditProfileInfoForm(QWidget *parent = nullptr);
    ~EditProfileInfoForm();
private slots:
    void open_EditI_GUI();

private:
    Ui::EditProfileInfoForm *ui;

};

#endif // EDITPROFILEINFOFORM_H
