#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "stringlist.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    StringList theList;
    QStringList l={"1","2","3"};
    theList.lista(l);// put  your list her
    engine.rootContext()->setContextProperty("StringList", &theList);

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
