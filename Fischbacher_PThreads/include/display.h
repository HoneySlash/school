/*
author:Berndt Fischbacher
matnr:i12078
file:
desc:
date:
class:5BHIF
catnr:01
*/

#ifndef FISCHBACHER_PTHREADS_DISPLAY_H
#define FISCHBACHER_PTHREADS_DISPLAY_H

#include <pthread.h>

class CustomerCounter;
class Display
{
private:
    CustomerCounter *customerCounter;
    int ticketNumber;

    void waitForCustomerResponse();

public:
    Display();
    ~Display();
    void setFreeCustomerCounter(CustomerCounter *counter);

    bool empty;

    // Need to be public as they dont't work , if I make getters
    pthread_cond_t counterFreeCondition;
    pthread_cond_t respondedCondition;
    pthread_mutex_t lock;

    // Getter + Setter
    CustomerCounter *getCustomerCounter();
    const int getTicketNumber();
};

#endif //FISCHBACHER_PTHREADS_DISPLAY_H
