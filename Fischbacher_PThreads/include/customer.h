/*
author:Berndt Fischbacher
matnr:i12078
file:
desc:
date:
class:5BHIF
catnr:01
*/

#ifndef FISCHBACHER_PTHREADS_CUSTOMER_H
#define FISCHBACHER_PTHREADS_CUSTOMER_H


class Display;
class Customer
{
private:
    Display *display;
    int ticketNumber;

    void respondToDisplay();
    void waitForCorrectTicketNumber();

public:
    Customer(int _ticketNumber, Display *_display);
    ~Customer();
    void waitForFreeCounter();

    // Getter + Setter
    const int getTicketNumber();
};

#endif //FISCHBACHER_PTHREADS_CUSTOMER_H
