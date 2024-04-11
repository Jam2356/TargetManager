#ifndef MAINUI_H
#define MAINUI_H

#include <QMainWindow>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainUI; }
QT_END_NAMESPACE

class MainUI : public QMainWindow
{
    Q_OBJECT

public:
    MainUI(QWidget *parent = nullptr);
    ~MainUI();

    void setTableWidget();
    void setItemText(int row, int column, QString text);

private:
    Ui::MainUI *ui;
    QTableWidget *table;
};
#endif // MAINUI_H
