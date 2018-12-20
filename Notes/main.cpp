/*
author:Berndt Fischbacher
matnr:i12078
file:main.cpp
date:16.12.2018
class:5BHIF
catnr:01
*/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.load();

    return a.exec();
}
