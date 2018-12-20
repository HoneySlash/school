/*
author:Berndt Fischbacher
matnr:i12078
file:point.cpp
date:16.12.2018
class:5BHIF
catnr:01
*/

#include "point.h"

Point::Point(QPoint _point, QColor _color) : point{_point}, color{_color}
{
}

Point::Point() {}

QDataStream &operator<<(QDataStream &out, const Point &point)
{
    out << point.point << point.color;
    return out;
}

QDataStream &operator>>(QDataStream &in, Point &point)
{
    QPoint qPoint;
    QColor qColor;
    in >> qPoint >> qColor;
    point = Point(qPoint, qColor);
    return in;
}