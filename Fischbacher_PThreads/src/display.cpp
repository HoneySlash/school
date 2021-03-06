/*
author:Berndt Fischbacher
matnr:i12078
file:
desc:
date:
class:5BHIF
catnr:01
*/

#include "../include/display.h"
#include "../include/customerCounter.h"
#include <iostream>
#include <unistd.h>

Display::Display()
{
    ticketNumber = 0;
    empty = true;
    pthread_mutex_init(&lock, 0);
    pthread_cond_init(&counterFreeCondition, 0);
    pthread_cond_init(&respondedCondition, 0);
}

Display::~Display()
{
}

void Display::waitForCustomerResponse()
{
    while (empty == false)
    {
        pthread_cond_wait(&respondedCondition, &lock);
    }
}

void Display::setFreeCustomerCounter(CustomerCounter *_customerCounter)
{
    pthread_mutex_lock(&lock);

    waitForCustomerResponse();
    empty = false;
    customerCounter = _customerCounter;
    ticketNumber++;
    pthread_cond_broadcast(&counterFreeCondition);

    pthread_mutex_unlock(&lock);
}

CustomerCounter *Display::getCustomerCounter()
{
    return customerCounter;
}

const int Display::getTicketNumber()
{
    return ticketNumber;
}
