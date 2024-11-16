#include "UI/MainUI.h"
#include "Core/DataManager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainUI w;
    DataManager data;
    AllObjects aa;

    data.writeFullDatabase(&aa);

//    data.read();

    w.setTableWidget();

    QList<QString> a;
    a.append("a");
    a.append("b");
    a.append("c");
    w.setTableWidget(2,3,a);



    w.show();
    return application.exec();
}
