#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <QObject>

/**
 * @brief The UIController class - класс, предоставлет возможности взаимодейсвия с UI
 */
class UIController : public QObject
{
    Q_OBJECT
public:
    explicit UIController(QObject *parent = nullptr);

signals:

};

#endif // UICONTROLLER_H
