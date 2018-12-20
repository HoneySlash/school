/*
author:Berndt Fischbacher
matnr:i12078
file:note.h
date:16.12.2018
class:5BHIF
catnr:01
*/

#ifndef NOTE_H
#define NOTE_H

#include <QString>
#include <QFile>
#include <QDataStream>
#include "point.h"
#include <QVector>

class Note
{
  public:
    Note(QString _title, QString _text, QVector<Point> _points)
        : title{_title}, text{_text}, points{_points} {};
    Note(){};
    QString title;
    QString text;
    QVector<Point> points;

    friend QDataStream &operator<<(QDataStream &out, const Note &note);
    friend QDataStream &operator>>(QDataStream &in, Note &note);
};

#endif // NOTE_H