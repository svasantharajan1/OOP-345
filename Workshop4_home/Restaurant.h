// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef SDDS_RESTAURANT_H
#define SDDS_RESTAURANT_H
#include <iostream>
#include "Reservation.h"
namespace sdds {
class Restaurant {
    Reservation* rev;
    size_t numOfReserv;
public:
    Restaurant();
    Restaurant(Reservation* reservations[], size_t cnt);
    Restaurant(const Restaurant& copy);
    Restaurant(Restaurant&& move);
    ~Restaurant();
    size_t size() const;
//    Restaurant& operator=(const Restaurant& cp);
//    Restaurant& operator=(Restaurant&& mv);
    friend std::ostream& operator<<(std::ostream& os, const Restaurant& res);
};
}
#endif /* Restaurant_hpp */
