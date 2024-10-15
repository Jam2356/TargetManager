#include "DataManager.h"

DataManager::DataManager(QObject *parent)
    : QObject{parent}
{

}

void DataManager::writeTO() {
    write->write(path);
}
