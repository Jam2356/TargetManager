#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>

#include "AllObjects.h"

class DataManager : public QObject {

        Q_OBJECT

    private:

        AllObjects fullObjects;

        QString path = "F:/GIT/TargetManager/Core/DATABASE/kurs4sem1.xml";

    public:
        explicit DataManager(QObject *parent = nullptr);

        /**
         * @brief writeFullDatabase - метод записывает все данные в файл xml
         * @param allObjects
         */
        void writeFullDatabase(AllObjects * allObjects);

        /**
         * @brief readFullDatabase - метод считывает все данные из файла xml
         * @return
         */
        void readFullDatabase();

        const AllObjects getFullObjects();

    signals:

};

#endif // DATAMANAGER_H
