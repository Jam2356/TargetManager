#include "WriterXML.h"

#include "../LogsManager.h"

// Статическое название класса
QString WriterXML::className = "WriterXML";

WriterXML::WriterXML()
{

}

void WriterXML::write(QString path) {

    // Создаем объект файла
    QFile file(path);

    // Открываем файл для записи
    file.open(QIODevice::WriteOnly);


    QXmlStreamWriter stream(&file);

    stream.setAutoFormatting(true);
    stream.setAutoFormattingIndent(3);

    stream.writeStartDocument();


    stream.writeStartElement("database");
    {

        stream.writeStartElement("lines");
        {

            stream.writeStartElement("вава");
            {
                stream.writeTextElement("short", "2");
                stream.writeTextElement("lab", "3");
                stream.writeTextElement("prackt", "4");
                stream.writeTextElement("tests", "5");
                stream.writeTextElement("kt", "6");
                stream.writeTextElement("credits", "7");
                stream.writeTextElement("special", "8");

            }
            stream.writeEndElement();

        }
        stream.writeEndElement();

    }
    stream.writeEndElement();


    stream.writeEndDocument();

    file.close();

}

void WriterXML::writeAllLines(QString path, AllObjects * allObjects) {

    // Создаем объект файла
    QFile file(path);

    // Открываем файл для записи
    file.open(QIODevice::WriteOnly);

    QXmlStreamWriter stream(&file);

    stream.setAutoFormatting(true);
    stream.setAutoFormattingIndent(3);

    stream.writeStartDocument();


    stream.writeStartElement("database");
    {
        writeLine(&stream, allObjects->getSoloObject(0));
    }
    stream.writeEndElement();


    stream.writeEndDocument();

    file.close();
}

void WriterXML::writeLine(QXmlStreamWriter * stream, SoloObject * object) {

    // Отделяем линии(строки) таблицы в файле xml
    stream->writeStartElement("line");
    {

        // Циклически заполняем данные об одиночном объекте SoloObject
        for(quint32 i = 0 ; i < object->getSizeDataList() ; i++) {

            // Записываем данные <type>data</type>
            stream->writeTextElement(object->getObjectDataTypes()->getEnumNumberType(i)->toString(),
                                     QString::fromUtf8(object->getDataById(i)));

        }

    }
    stream->writeEndElement();
}
