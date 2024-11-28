#include "DataManager.h"

#include "Utils/WriterXML.h"
#include "Utils/ReaderXML.h"

DataManager::DataManager(QObject *parent)
    : QObject{parent}
{

}

/**
 * @brief DataManager::writeFullDatabase - метод записывает все данные в файл xml
 * @param allObjects
 */
void DataManager::writeFullDatabase(AllObjects * allObjects) {

    WriterXML::writeAllLines(path, allObjects);

}

/**
 * @brief DataManager::readFullDatabase - метод считывает все данные из файла xml
 * @return
 */
void DataManager::readFullDatabase() {

    fullObjects = ReaderXML::readAllLines(path);

}

const AllObjects DataManager::getFullObjects() {

    return this->fullObjects;

}
