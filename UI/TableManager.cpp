#include "MainUI.h"

/**
 * @brief setTableWidget - установить таблицу
 */
void MainUI::setTableWidget() {
    QStringList labels;
    table->setColumnCount(2);
    table->setRowCount(2);
    table->setHorizontalHeaderLabels(labels);

}

/**
 * @brief setTableWidget - установить таблицу с параметрами
 */
void MainUI::setTableWidget(quint32 rows, quint32 columns, QList<QString> columnsNames) {

    //Проверяем, достаточно ли у нас названий для колонок
    if(columnsNames.size() != static_cast<int>(columns)) {
        logger->warningMessage(shortInfo + ": Количество названий колонок не соответствует количесву колонок");
        return;
    }

    //Список наших имен для колонок(слева на право)
    QStringList labels;

    for(const QString & name : columnsNames) {
        labels << name;
    }

    table->setColumnCount(columns);
    table->setRowCount(rows);

    table->setHorizontalHeaderLabels(labels);

}

/**
 * @brief MainUI::setItemText - установить ТЕКСТ в существующую ЯЧЕЙКУ
 * @param row
 * @param column
 * @param text
 */
void MainUI::setItemText(quint32 row, quint32 column, QString text) {
    QTableWidgetItem * newItem = new QTableWidgetItem(text);
    table->setItem(row, column, newItem);

}

/**
 * @brief getClassName - возвращает имя класса
 * @return
 */
QString MainUI::getClassName() {
    return className;
}
