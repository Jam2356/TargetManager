#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QObject>

#include "Utils/WriterXML.h"

class DataManager : public QObject {

        Q_OBJECT

    private:

        // Объект для записи в файл
        WriterXML * write;

        QString path = "F:/GIT/TargetManager/TargetManager/Core/DATABASE/kurs4sem1.xml";

    public:
        explicit DataManager(QObject *parent = nullptr);

        void writeTO();

    signals:

};

#endif // DATAMANAGER_H
