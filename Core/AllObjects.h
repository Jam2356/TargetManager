#ifndef ALLOBJECTS_H
#define ALLOBJECTS_H

#include <QMap>
#include "Utils/SoloObject.h"


class AllObjects
{
    private:
        // Хранит в себе данные о предмете(объекте)
        QList<SoloObject> allObjects;

    public:
        AllObjects();

//        /**
//         * @brief getDataSubject - Получить карту данных объекта
//         */
//        QMap<QString, QByteArray> getDataSubject();

//        /**
//         * @brief getTypeList - Получить список типов объекта
//         */
//        ObjectDataTypes getTypeList();

        //NO-OP
        quint32 getNumberParameters();

        SoloObject * getObject(quint32 number);

        void testInit();


};

#endif // ALLOBJECTS_H
