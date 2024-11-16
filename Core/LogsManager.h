#ifndef LOGSMANAGER_H
#define LOGSMANAGER_H

#include <QDebug>

class LogsManager
{
    private:
        LogsManager();

    public:

        /**
         * @brief warningMessage - вывод предупреждений
         * @param className
         * @param message
         */
        static void warningMessage(QString className, QString message);

        /**
         * @brief infoMessage - вывод информации
         * @param className
         * @param message
         */
        static void infoMessage(QString className, QString message);

};

#endif // LOGSMANAGER_H
