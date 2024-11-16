#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>

#include "AllObjects.h"

class DataManager : public QObject {

        Q_OBJECT

    private:

        QString path = "F:/GIT/TargetManager/Core/DATABASE/kurs4sem1.xml";

    public:
        explicit DataManager(QObject *parent = nullptr);

        void writeFullDatabase(AllObjects * allObjects);

        void read();

    signals:

};

#endif // DATAMANAGER_H
