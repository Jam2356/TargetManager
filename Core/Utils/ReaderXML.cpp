#include "ReaderXML.h"
#include <QFile>
#include "../LogsManager.h"

// Статическое название класса
QString ReaderXML::className = "ReaderXML";

ReaderXML::ReaderXML() {

}

/**
 * @brief readAllLines - метод чтения всех строк
 * @param path
 */
AllObjects ReaderXML::readAllLines(QString path) {

    // Пустой экземпляр класса
    AllObjects readResult;

    // Файл для работы
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

    // Экземпляр xmlReader
    QXmlStreamReader readStream(&file);

    // Читаем файл до конца
    while (!readStream.atEnd()) {

        readStream.readNext();

        // Если обнаружили line, то бежим читать данные строки
        if(readStream.name() == "line") {

            // Прочитанные данные строки
            SoloObject soloObject = ReaderXML::ReaderSoloLine(&readStream);

            // Добавляем прочитанное в readResult
            readResult.appendSoloObject(soloObject);

        }

    }

    // Если в файле есть ошибки
    if(readStream.hasError()) {

        LogsManager::warningMessage(ReaderXML::className, "Errors in file!");

    }

    file.close();

    return readResult;

}

/**
 * @brief readLine - метод чтения строки
 * @param path
 */
SoloObject ReaderXML::ReaderSoloLine(QXmlStreamReader * readStream) {

    SoloObject soloObject;

    while (!readStream->atEnd()) {

        readStream->readNext();

        if (readStream->isStartElement() && EnumNumberType::containsType(readStream->name().toString())) {

            // Прочитали и сохранили в объект данные
            soloObject.appendData(readStream->readElementText().toUtf8());

            // Прочитали и сохранили в объект как выше прочитанные данные нам обрабоатывать
            soloObject.appendType(EnumNumberType::fromString(readStream->name().toString()));

        }

    }

    return soloObject;

}




