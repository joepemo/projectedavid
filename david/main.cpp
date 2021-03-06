#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"

#include "webcam.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<Webcam>("OpenGLUnderQML", 1, 0, "Webcam");          //Registrem un element QT pre usar-lo com a element QML
    //  Nom de la clase ^     ^ Nom de la biblioteca   ^ Nom del type


    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/david/main.qml"));


    viewer.showExpanded();

    return app.exec();
}
