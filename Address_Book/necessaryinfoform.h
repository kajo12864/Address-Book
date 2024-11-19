#ifndef NECESSARYINFOFORM_H
#define NECESSARYINFOFORM_H

#include <QWidget>

namespace Ui {
class NecessaryInfoForm;
}

class NecessaryInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit NecessaryInfoForm(QWidget *parent = nullptr);
    ~NecessaryInfoForm();


private slots:
    void on_buttonConfirm_clicked();
    void on_buttonCancel_clicked();
    void open_NecI_GUI();
signals:
    void new_Contact_Info(const QString &text); //Takes contact info

private:
    Ui::NecessaryInfoForm *ui;

};

#endif // NECESSARYINFOFORM_H
