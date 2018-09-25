#ifndef CUTMINTERFACE_H
#define CUTMINTERFACE_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QMenu>
#include <QSpinBox>
#include <QColor>
#include <QPalette>
#include <QStandardPaths>
#include <QShortcut>
#include <QUdpSocket>

class CUTMInterface
{
    QUdpSocket* _udpCommSocket;             ///< UDP communication sockect between FG and QGC

    QLabel *lblUTMTitle;
public:
    CUTMInterface();

    void run();
};

#endif // CUTMINTERFACE_H
