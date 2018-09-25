#include "cutminterface.h"
#include "QGCApplication.h"
CUTMInterface::CUTMInterface()
{
    QLabel *lbl;
    lbl = new QLabel; // ("I love Qt Program", this);

    QLabel *timeScaleLabel = new QLabel("Time axis:");
    timeScaleLabel->setGeometry(100,100,100,30);


    _udpCommSocket = new QUdpSocket(0);
    Q_CHECK_PTR(_udpCommSocket);
  //  _udpCommSocket->moveToThread(this);
  //  _udpCommSocket->bind(host, port, QAbstractSocket::ReuseAddressHint);
  //  QObject::connect(_udpCommSocket, &QUdpSocket::readyRead, this, &QGCFlightGearLink::readBytes);



}

///////////////////////////////////
// 실행파일
// UTM Server 와
void CUTMInterface::run()
{




}
