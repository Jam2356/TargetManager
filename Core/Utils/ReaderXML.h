#ifndef READERXML_H
#define READERXML_H

#include <QFile>
#include <QXmlStreamReader>

#include "../AllObjects.h"

class ReaderXML {

    private:
        ReaderXML();
        static QString className;

    public:

        /**
         * @brief readAllLines - метод чтения всех строк одной темы
         * @param path
         */
        static AllObjects readAllLines(QString path);

        /**
         * @brief readLine - метод чтения строки
         * @param path
         */
        static SoloObject ReaderSoloLine(QXmlStreamReader * stream);

        /**
         * @brief getClassName - возвращает имя класса
         * @return
        */
        static QString getClassName();




};

#endif // READERXML_H
