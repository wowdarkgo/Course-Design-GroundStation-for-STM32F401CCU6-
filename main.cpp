#include "mainwindow.h"
#include <QApplication>
#include <q3dbars.h>
#include <QtDataVisualization>

using namespace QtDataVisualization;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setAutoFillBackground(true);
    w.setPalette(QPalette(QColor(240, 240, 240)));
    w.show();
    return a.exec();
}

