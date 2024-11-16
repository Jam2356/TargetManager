#include "ObjectDataTypes.h"

/**
 * @brief ObjectDataTypes - конструктор по умолчанию
 * @param typeNumbers
 */
ObjectDataTypes::ObjectDataTypes() {

}

/**
 * @brief ObjectDataTypes::ObjectDataTypes - конструктор по умолчанию
 * @param typeNumbers
 */
ObjectDataTypes::ObjectDataTypes(QList<EnumNumberType> typeNumbers) {
    this->typeList = typeNumbers;
}

/**
 * @brief append - добавляет любой из доступных типов
 * @param type - добавляемый тип
 */
void ObjectDataTypes::append(EnumNumberType type) {

    switch(type) {

    case EnumNumberType::Int:       appendInt();    break;
    case EnumNumberType::String:    appendString(); break;
    case EnumNumberType::Bytes:     appendBytes();   break;
    case EnumNumberType::Time:      appendTime();   break;

    default:
        break;

    }
}

void ObjectDataTypes::appendInt() {

    this->typeList.append(EnumNumberType::Int);

}

void ObjectDataTypes::appendString() {

    this->typeList.append(EnumNumberType::String);

}

void ObjectDataTypes::appendBytes() {

    this->typeList.append(EnumNumberType::Bytes);

}

void ObjectDataTypes::appendTime() {

    this->typeList.append(EnumNumberType::Time);

}

///**
// * @brief getTypeNumbers - возвращает список типов typeNumbers
// */
//QList<EnumNumberType> * ObjectDataTypes::getTypeList() {

//    return &this->typeList;

//}

/**
 * @brief getSize - возвращает размер typeList
 * @return
 */
quint32 ObjectDataTypes::getSize() {

    return typeList.size();

}

/**
 * @brief getEnumNumberType - возвращает тип из листа
 * @param id - id типа в списке
 */
EnumNumberType * ObjectDataTypes::getEnumNumberType(quint32 id) {

    return &this->typeList[id];

}


