#include "AllObjects.h"

//    QString a;
//    a.append(QString::fromUtf8(soloObject.getDataById(3)));

AllObjects::AllObjects() {

    this->testInit();

}

//QMap<QString, QByteArray> ObjectSubject::getDataSubject() {
//    return this->dataSubject;
//}

//ObjectDataTypes ObjectSubject::getTypeList() {
//    return this->typeList;
//}

SoloObject * AllObjects::getSoloObject(quint32 number) {

    return &objects[number];

}

/**
 * @brief AllObjects::appendSoloObject - метод добавления soloObject в objects
 */
void AllObjects::appendSoloObject(const SoloObject &soloObject) {

    this->objects.append(soloObject);

}



void AllObjects::testInit() {

    SoloObject a;
    this->objects.append(a);

}
