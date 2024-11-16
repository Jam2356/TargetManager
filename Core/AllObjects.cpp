#include "AllObjects.h"

AllObjects::AllObjects() {

    this->testInit();

}

//QMap<QString, QByteArray> ObjectSubject::getDataSubject() {
//    return this->dataSubject;
//}

//ObjectDataTypes ObjectSubject::getTypeList() {
//    return this->typeList;
//}

SoloObject * AllObjects::getObject(quint32 number) {
    return &allObjects[number];
}

void AllObjects::testInit() {

    SoloObject a;
    this->allObjects.append(a);

}
