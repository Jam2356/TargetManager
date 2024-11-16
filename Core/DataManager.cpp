#include "DataManager.h"

#include "Utils/WriterXML.h"
#include "Utils/ReaderXML.h"

DataManager::DataManager(QObject *parent)
    : QObject{parent}
{

}

void DataManager::writeFullDatabase(AllObjects * allObjects) {
    WriterXML::writeAllLines(path, allObjects);
}

void DataManager::read() {
    ReaderXML::read(path);
}
