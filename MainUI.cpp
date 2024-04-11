#include "MainUI.h"
#include "ui_MainUI.h"

MainUI::MainUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainUI)
{
    ui->setupUi(this);
    table = ui->tableWidget;

}

MainUI::~MainUI()
{
    delete ui;

}

void MainUI::setTableWidget() {
    QStringList labels;
    labels << "qwe" << "1212";
    table->setColumnCount(2);
    table->setRowCount(2);
    table->setHorizontalHeaderLabels(labels);

}

void MainUI::setItemText(int row, int column, QString text) {
    QTableWidgetItem * newItem = new QTableWidgetItem(text);
    table->setItem(row, column, newItem);

}
