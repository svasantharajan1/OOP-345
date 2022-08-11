// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef Autoshop_h
#define Autoshop_h
#include <iostream>
#include <vector>
#include "Vehicle.h"

namespace sdds {
class Autoshop {
    std::vector<Vehicle*> m_vehicles;
public:
    Autoshop& operator+=(Vehicle* theVehicle);
    void display(std::ostream& out) const;
    friend std::ostream& operator<<(std::ostream& os , const Autoshop& obj);
};
}

#endif /* Autoshop_hpp */
