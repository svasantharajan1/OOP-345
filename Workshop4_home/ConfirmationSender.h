// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef SDDS_CONFIRMATIONSENDER_H
#define SDDS_CONFIRMATIONSENDER_H

#include <iostream>
#include "Restaurant.h"
#include "Reservation.h"
namespace sdds {
class ConfirmationSender{
    const Reservation** revPointer;
    size_t numOfConfirm;
public:
    ConfirmationSender();
    ConfirmationSender(const ConfirmationSender& copy);
    ConfirmationSender(ConfirmationSender&& move);
    ~ConfirmationSender();
    ConfirmationSender& operator+=(const Reservation& res);
    ConfirmationSender& operator-=(const Reservation& res);
    friend std::ostream& operator<<(std::ostream& os, const ConfirmationSender& con);
};
}

#endif /* ConfirmationSender_hpp */
