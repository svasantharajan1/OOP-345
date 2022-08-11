// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_CAR_H
#define SDDS_CAR_H

#include <sstream>
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "Vehicle.h"
namespace sdds{
class Car : public Vehicle{
    std::string c_tag;
    std::string c_maker;
    std::string c_cond;
    double c_topSpeed;
public:
    Car(std::istream&) ;
    std::string condition() const;
    std::string makers() const;
//    std::string getTempSpeed() const;
//    void setTag(char tag);
//    char getTag() const;
//    void setTempSpeed(std::string tmp);
    double topSpeed() const;
    void display(std::ostream& out) const;
    friend std::ostream& operator<<(std::ostream& os, const Car& obj);
};
}
#endif /* Car_hpp */
