#ifndef WRITERXML_H
#define WRITERXML_H

#include <QFile>
#include <QXmlStreamWriter>

class WriterXML {

    public:
        WriterXML();

        void write(QString path);

};

#endif // WRITERXML_H
