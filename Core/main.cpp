#include "UI/MainUI.h"
#include "Core/DataManager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainUI w;
    DataManager data;

//    AllObjects aa;

//    data.writeFullDatabase(&aa);

    data.readFullDatabase();

    AllObjects aa = data.getFullObjects();

    w.setTableWidget();

    QList<QString> a;
    a.append("a");
    a.append("b");
    a.append("c");
    w.setTableWidget(1,4,aa.getSoloObject(0)->getData());



    w.show();
    return application.exec();
}
