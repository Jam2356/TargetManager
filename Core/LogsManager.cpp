#include "LogsManager.h"


LogsManager::LogsManager()
{

}

/**
 * @brief logMessage - вывод отлдочной информации
 * @details className добавляй в класс, message пиши с большой буквы на ENG
 */
void LogsManager::warningMessage(QString className, QString message) {

    qDebug() << "WARNING: class: " + className + ": " + message;

}

/**
* @brief infoMessage - вывод информации
* @param className
* @param message
*/
void LogsManager::infoMessage(QString className, QString message) {

    qDebug() << "INFO: class: " + className + ": " + message;

}
