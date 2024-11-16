#include "SoloObject.h"

#include "../LogsManager.h"

SoloObject::SoloObject() {
    this->dataList.append("deded");
    this->dataList.append("12");
    this->dataList.append("%");
    this->dataList.append("фффф");



    this->typeList.appendString();
    this->typeList.appendInt();
    this->typeList.appendBytes();
    this->typeList.appendString();

}

void SoloObject::appendType(EnumNumberType type) {

    this->typeList.append(type);

}

void SoloObject::appendData(QByteArray data) {

    this->dataList.append(data);

}

/**
 * @brief getObjectDataTypes - мтод возвращает лист типов
 */
ObjectDataTypes SoloObject::getObjectDataTypes() {

    // Проверка
    this->checkSynchronizationLists();

    return this->typeList;

}

/**
 * @brief getEnumNumberType - возвращает тип из листа
 * @param id - id типа в списке
 */
QByteArray * SoloObject::getDataById(quint32 id) {

    return &this->dataList[id];

}

/**
 * @brief getSize - возвращает размер dataList
 */
quint32 SoloObject::getSizeDataList() {

    return this->dataList.size();

}

/**
 * @brief getSize - возвращает размер typeList
 */
quint32 SoloObject::getSizeTypeList() {

    return this->typeList.getSize();

}

/**
 * @brief checkSynchronizationLists - метод сравнения размеров листов
 * @details true - листы синхронезированые, false - где-то ошибка, разный размер листов
 */
bool SoloObject::checkSynchronizationLists() {

    Q_ASSERT(this->getSizeTypeList() == this->getSizeDataList());

}
