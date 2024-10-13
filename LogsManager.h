#ifndef LOGSMANAGER_H
#define LOGSMANAGER_H

#include <QDebug>

//Для вывода в логи, содержит название класса и метода, в котором вызывается
#define shortInfo getClassName() + "->" + QString(__FUNCTION__)

class LogsManager
{
    public:
        LogsManager();

        /**
         * @brief logMessage - вывод отлдочной информации
         * @param message
         */
        void warningMessage(QString message);

};

#endif // LOGSMANAGER_H
