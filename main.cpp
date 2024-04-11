#include "MainUI.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainUI w;
    w.setTableWidget();
    w.show();
    return a.exec();
}
