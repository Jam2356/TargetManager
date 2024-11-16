#include "ReaderXML.h"

#include "../LogsManager.h"

// Статическое название класса
QString ReaderXML::className = "ReaderXML";

ReaderXML::ReaderXML() {

}

/**
 * @brief ReaderXML::read - метод чтения
 * @param path
 */
SoloObject ReaderXML::read(QString path) {

    QFile file(path);

    // Проверка, есть ли файл
    if(!file.exists()) {

        LogsManager::warningMessage(ReaderXML::className, "File not found!");
        // Обработка исключения

    }

    // Проверка, удалось ли открыть файл
    if(!file.open(QIODevice::ReadOnly)) {

        LogsManager::warningMessage(ReaderXML::className, "Can't open file!");
        // Обработка исключения

    }


    QXmlStreamReader xml(&file);

    while (!xml.atEnd()) {

        xml.readNext();

        if (xml.isStartElement() && xml.name() == "short") {

            QString shortValue = xml.readElementText();

        }



    }
    if (xml.hasError()) {

    }

    file.close();
}


