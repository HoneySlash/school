/*
author:Berndt Fischbacher
matnr:i12078
file: numberGenerator.cpp
desc:
date: 03.10.2018
class:5BHIF
catnr:01
*/
//

#include "numberGenerator.h"

NumberGenerator::NumberGenerator()
{
    number = 0;
}

NumberGenerator::~NumberGenerator()
{
}

int NumberGenerator::getNumber()
{
    return ++number;
}