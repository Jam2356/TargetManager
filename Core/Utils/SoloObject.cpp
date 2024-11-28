#include "SoloObject.h"

#include "../LogsManager.h"

SoloObject::SoloObject() {

    this->dataList.clear();
    this->typeList.clearDataTypes();
    this->dataList.append("deded");
    this->dataList.append("12");
    this->dataList.append("%");
    this->dataList.append("фффф");



    this->typeList.appendString();
    this->typeList.appendInt();
    this->typeList.appendBytes();
    this->typeList.appendString();

}

SoloObject::SoloObject(const SoloObject& object) {

    dataList = object.dataList;
    typeList = object.typeList;

}

void SoloObject::appendType(EnumNumberType type) {

    this->typeList.append(type);

}

void SoloObject::appendData(QByteArray data) {

    this->dataList.append(data);

}

/**
 * @brief getData - метод возвращает лист данных
 * @return
 */
QList<QByteArray> * SoloObject::getData() {

    return &this->dataList;

}

/**
 * @brief getObjectDataTypes - мтод возвращает лист типов
 */
ObjectDataTypes * SoloObject::getObjectDataTypes() {

    // Проверка
    this->checkSynchronizationLists();

    return &this->typeList;

}

/**
 * @brief getEnumNumberType - возвращает тип из листа
 * @param id - id типа в списке
 */
QByteArray SoloObject::getDataById(quint32 id) const {

    return this->dataList[id];

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

    if(this->getSizeTypeList() == this->getSizeDataList()) {
        return true;
    }
    return false;

}
