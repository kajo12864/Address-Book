#ifndef PROFILEDISPLAY_H
#define PROFILEDISPLAY_H

#include <QWidget>

namespace Ui {
class profiledisplay;
}

class profiledisplay : public QWidget
{
    Q_OBJECT

public:
    explicit profiledisplay(QWidget *parent = nullptr);
    ~profiledisplay();

private:
    Ui::profiledisplay *ui;
private slots:
    void on_editBtn_clicked();
    void on_closeBtn_clicked();
    void on_deleteBtn_clicked();

signals:
    void open_EditI_GUI(); //Opens edit info gui
};

#endif // PROFILEDISPLAY_H
