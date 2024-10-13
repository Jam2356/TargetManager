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


