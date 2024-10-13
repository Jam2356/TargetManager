#include "UI/MainUI.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainUI w;
    w.setTableWidget();
    QList<QString> a;
    a.append("a");
    a.append("b");
    a.append("c");
    w.setTableWidget(2,3,a);
    w.show();
    return application.exec();
}
