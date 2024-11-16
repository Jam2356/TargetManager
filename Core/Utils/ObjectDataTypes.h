#ifndef OBJECTDATATYPES_H
#define OBJECTDATATYPES_H

#include <QList>
#include "EnumNumberType.h"

class ObjectDataTypes {

    private:
        QList<EnumNumberType> typeList;

    public:

        /**
         * @brief ObjectDataTypes - конструктор по умолчанию
         */
        ObjectDataTypes();

        /**
         * @brief ObjectDataTypes - конструктор
         */
        ObjectDataTypes(QList<EnumNumberType> typeList);

        /**
         * @brief append - добавляет любой из доступных типов
         * @param type - добавляемый тип
         */
        void append(EnumNumberType type);

        /**
         * @brief appendIntType - добавить int в лист типов typeNumbers
         */
        void appendInt();

        /**
         * @brief appendStringType - добавить string в лист типов typeNumbers
         */
        void appendString();

        /**
         * @brief appendDataType - добавить data в лист типов typeNumbers
         */
        void appendBytes();

        /**
         * @brief appendTimeType - добавить time в лист типов typeNumbers
         */
        void appendTime();

//        /**
//         * @brief getTypeList - возвращает список типов typeNumbers
//         */
//        QList<EnumNumberType> * getTypeList();

        /**
         * @brief getSize - возвращает размер typeList
         * @return
         */
        quint32 getSize();

        /**
         * @brief getEnumNumberType - возвращает тип из листа
         * @param id - id типа в списке
         */
        EnumNumberType * getEnumNumberType(quint32 id);



};

#endif // OBJECTDATATYPES_H
