// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef SDDS_CAR_H
#define SDDS_CAR_H

#include <fstream>
#include <iostream>
#include <string>
#include <locale>
#include <iomanip>
#include "Vehicle.h"
namespace sdds{
class Car : public Vehicle{
    std::string c_tag;
    std::string c_maker;
    std::string c_cond;
    double c_topSpeed;
public:
    Car(std::istream&);
    std::string condition() const;
    std::string makers() const;
    double topSpeed() const;
    void display(std::ostream& out) const;
    friend std::ostream& operator<<(std::ostream& os, const Car& obj);
};
}
#endif /* Car_hpp */
