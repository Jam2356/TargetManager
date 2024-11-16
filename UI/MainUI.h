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

    private:
        Ui::MainUI *ui;
        QTableWidget *table;
        const QString className = "MainUI";

    public:
        MainUI(QWidget *parent = nullptr);
        ~MainUI();

        /**
         * @brief setTableWidget - установить таблицу
         */
        void setTableWidget();

        /**
         * @brief setTableWidget - установить таблицу с параметрами
         */
        void setTableWidget(quint32 row, quint32 column, QList<QString> names);

        /**
         * @brief MainUI::setItemText - установить ТЕКСТ в существующую ЯЧЕЙКУ
         * @param row
         * @param column
         * @param text
         */
        void setItemText(quint32 row, quint32 column, QString text);

};
#endif // MAINUI_H
