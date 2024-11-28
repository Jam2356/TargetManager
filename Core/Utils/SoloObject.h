#ifndef SOLOOBJECT_H
#define SOLOOBJECT_H

#include "ObjectDataTypes.h"

class SoloObject {

    private:

        // Хранит в себе данные о предмете(объекте)
        QList<QByteArray> dataList;

        // Хранит в себе типы данных о предмете(объекте)
        ObjectDataTypes typeList;

        QString className = "SoloObject";

        /**
             * @brief checkSynchronizationLists - метод сравнения размеров листов
             */
        bool checkSynchronizationLists();

    public:
        SoloObject();

        SoloObject(const SoloObject& object);

        /**
         * @brief appendType - добавить тип данных в лист типов
         * @param type - тип
         */
        void appendType(EnumNumberType type);

        /**
         * @brief appendData - добавить данные в лист данных
         * @param data - данные
         */
        void appendData(QByteArray data);

        /**
         * @brief getData - метод возвращает лист данных
         * @return
         */
        QList<QByteArray> * getData();

        /**
         * @brief getObjectDataTypes - мтод возвращает лист типов
         */
        ObjectDataTypes * getObjectDataTypes();

        /**
         * @brief getEnumNumberType - возвращает тип из листа
         * @param id - id типа в списке
         */
        QByteArray getDataById(quint32 id) const;

        /**
         * @brief getSize - возвращает размер dataList
         */
        quint32 getSizeDataList();

        /**
         * @brief getSize - возвращает размер typeList
         */
        quint32 getSizeTypeList();



};

#endif // SOLOOBJECT_H
