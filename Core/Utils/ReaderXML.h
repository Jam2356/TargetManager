#ifndef READERXML_H
#define READERXML_H

#include <QFile>
#include <QXmlStreamReader>

#include "SoloObject.h"

class ReaderXML {

    private:
        ReaderXML();
        static QString className;

    public:

        /**
         * @brief read - метод чтения
         * @param path
         */
        static SoloObject read(QString path);

        /**
         * @brief getClassName - возвращает имя класса
         * @return
        */
        static QString getClassName();




};

#endif // READERXML_H
