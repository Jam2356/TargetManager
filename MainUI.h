#ifndef MAINUI_H
#define MAINUI_H

#include <QMainWindow>
#include <QTableWidget>
#include "LogsManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainUI; }
QT_END_NAMESPACE

class MainUI : public QMainWindow
{
        Q_OBJECT

    private:
        QString className = "MainUI";
        Ui::MainUI *ui;
        QTableWidget *table;
        LogsManager * logger;

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

        /**
         * @brief getClassName - возвращает имя класса
         * @return
         */
        QString getClassName();

};
#endif // MAINUI_H
