/*
author:Berndt Fischbacher
matnr:i12078
file:note.cpp
date:16.12.2018
class:5BHIF
catnr:01
*/

#include "note.h"
QDataStream &operator<<(QDataStream &out, const Note &note)
{
    out << note.title << note.text << note.points.size();
    foreach (Point point, note.points)
    {
        out << point;
    }
    return out;
}

QDataStream &operator>>(QDataStream &in, Note &note)
{
    QString title;
    QString text;
    int sizePoints;
    QVector<Point> points;
    in >> title >> text >> sizePoints;
    for (int i{0}; i < sizePoints; i++)
    {
        Point point;
        in >> point;
        points.push_back(point);
    }

    note = Note(title, text, points);
    return in;
}
