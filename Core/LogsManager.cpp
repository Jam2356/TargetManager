#include "LogsManager.h"


LogsManager::LogsManager()
{

}

/**
 * @brief logMessage - вывод отлдочной информации
 * @param message
 */
void LogsManager::warningMessage(QString message) {

    qDebug() << "WARNING: " + message;

}
