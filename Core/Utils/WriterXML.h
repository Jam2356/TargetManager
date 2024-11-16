#ifndef WRITERXML_H
#define WRITERXML_H

#include <QFile>
#include <QXmlStreamWriter>

#include "../AllObjects.h"

// Наверное нужно писать <type>data</type> а в логике разбираться что есть что, вытащив из ui
// список названий столбцов
class WriterXML {

    private:
        static QString className;


    public:
        WriterXML();

        static void write(QString path);

        static void writeAllLines(QString path, AllObjects * allObjects);

        static void writeLine(QXmlStreamWriter * stream, SoloObject * object);


};

#endif // WRITERXML_H
