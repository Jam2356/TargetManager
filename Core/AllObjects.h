#ifndef ALLOBJECTS_H
#define ALLOBJECTS_H

#include <QList>
#include <algorithm>

#include "Utils/SoloObject.h"
#include "LogsManager.h"


class AllObjects
{
    private:
        // Хранит в себе данные о предмете(объекте)
        QList<SoloObject> objects;

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

        /**
         * @brief getObject - метод возвращает ссылку на soloObject
         */
        SoloObject * getSoloObject(quint32 number);

        /**
         * @brief appendSoloObject - метод добавления soloObject в allObjects
         */
        void appendSoloObject(const SoloObject & soloObject);

        void testInit();


};

#endif // ALLOBJECTS_H
