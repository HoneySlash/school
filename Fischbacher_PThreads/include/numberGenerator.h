/*
author:Berndt Fischbacher
matnr:i12078
file: numberGenerator.h
desc:
date: 03.10.2018
class:5BHIF
catnr:01
*/
//

#ifndef FISCHBACHER_PTHREADS_NUMBERGENERATOR_H
#define FISCHBACHER_PTHREADS_NUMBERGENERATOR_H

class NumberGenerator
{
private:
    int number;

public:
    NumberGenerator();
    ~NumberGenerator();

    // Getter + Setter
    int getNumber();
};


#endif //FISCHBACHER_PTHREADS_NUMBERGENERATOR_H
