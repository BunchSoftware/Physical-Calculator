#include <QApplication>
#include <QFile>
#include <forms/mainWindow.h>
#include "QQmlApplicationEngine"
#include "QGuiApplication"
#include "forms/physicalCalculateForm.h"
#include "forms/Parser.h"

int main(int argc, char **argv)
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  qmlRegisterType<parser>("Forms", 1, 0, "Parser");

  QQmlApplicationEngine engine;
  const QUrl url(QStringLiteral("qrc:/mainWindow.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
    if (!obj && url == objUrl)
      QCoreApplication::exit(-1);
  }, Qt::QueuedConnection);
  engine.load(url);

    app.setWindowIcon(QIcon("qrc:/../../Documentation/images/logotype.png"));
    return app.exec();
}
