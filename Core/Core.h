#ifndef CORE_H
#define CORE_H

#include <QObject>

/**
 * @brief The Core class - класс, - класс, предоставлет возможности взаимодейсвия с Core
 */
class Core : public QObject
{
    Q_OBJECT
public:
    explicit Core(QObject *parent = nullptr);

signals:

};

#endif // CORE_H
