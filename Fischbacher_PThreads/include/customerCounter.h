/*
author:Berndt Fischbacher
matnr:i12078
file:
desc:
date:
class:5BHIF
catnr:01
*/

#ifndef FISCHBACHER_PTHREADS_CUSTOMERCOUNTER_H
#define FISCHBACHER_PTHREADS_CUSTOMERCOUNTER_H


class Customer;
class Display;
class CustomerCounter
{
private:
    int counterNumber;
    Display *display;

public:
    CustomerCounter();
    CustomerCounter(int _counterNumber, Display *display);
    ~CustomerCounter();
    void handleCustomer(Customer *customer);
    void work();

    // Getter + Setter
    const int getCounterNumber();
};


#endif //FISCHBACHER_PTHREADS_CUSTOMERCOUNTER_H
