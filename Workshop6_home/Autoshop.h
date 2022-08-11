// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_AUTOSHOP_H
#define SDDS_AUTOSHOP_H
#include <iostream>
#include <vector>
#include <list>
#include "Vehicle.h"

namespace sdds {
class Autoshop {
    std::vector<Vehicle*> m_vehicles;
public:
    Autoshop& operator+=(Vehicle* theVehicle);
    void display(std::ostream& out) const;
    ~Autoshop();
    template<typename T>
    void select(T test, std::list<const Vehicle*>& vehicles){
        for(auto it = m_vehicles.begin(); it != m_vehicles.end(); it++){
            if(test(*it)){
                vehicles.push_back(*it);
            }
        }
    }
    friend std::ostream& operator<<(std::ostream& os , const Autoshop& obj);
};
}

#endif /* Autoshop_hpp */
