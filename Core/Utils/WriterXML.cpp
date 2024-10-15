#include "WriterXML.h"

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

            stream.writeStartElement("object");
            {
                stream.writeTextElement("title", "Qt Project");
            }
            stream.writeEndElement();

        }
        stream.writeEndElement();

        stream.writeStartElement("lines1");
        {

            stream.writeStartElement("object");
            {
                stream.writeTextElement("title", "Qt Project");
            }
            stream.writeEndElement();

        }
        stream.writeEndElement();

    }
    stream.writeEndElement();


    stream.writeEndDocument();






//    QDomDocument document;

//    QDomElement root = document.createElement("lines");

//    QDomElement object = document.createElement("object");



//    object. "edededed");

//    root.appendChild(object);


//    document.appendChild(root);

//    QTextStream stream(&file);

//    stream << document.toString();

//    file.close();


//    // Создаем объект, с помощью которого осуществляется запись в файл
//    QXmlStreamWriter xmlWriter(&file);

//    xmlWriter.setAutoFormatting(true);  // Устанавливаем автоформатирование текста

//    xmlWriter.writeStartDocument();     // Запускаем запись в документ

//        xmlWriter.writeStartElement("Resources");   // Записываем первый элемент с его именем

//            xmlWriter.writeStartElement("Line1");  // Начало тега

//            xmlWriter.writeCharacters("someName"); // Содержимое тега

//            xmlWriter.writeEndElement(); // Закрываем тег

//        xmlWriter.writeEndElement(); // Закрываем первый элемент

//    xmlWriter.writeEndDocument();

//    file.close();   // Закрываем файл



}
