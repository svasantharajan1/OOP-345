// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#include "Racecar.h"
namespace sdds {
Racecar::Racecar(std::istream& in):Car::Car(in){
    char deli;
    in >> deli >> m_booster;
////    Car::setTag('r');
//    std::string carData = Car::getTempSpeed();
//    std::string tmpSpeed = "";
//
//    size_t speedField = carData.find(',') + 1;
//    tmpSpeed = carData.substr(0, speedField -1);
//    tmpSpeed.erase(0,tmpSpeed.find_first_not_of(" "));
//    tmpSpeed.erase(tmpSpeed.find_last_not_of(" ") + 1);
//    Car::setTempSpeed(tmpSpeed);
//
//    size_t boostField = carData.length();
//    try{
//        m_booster = std::stod(carData.substr(speedField, boostField - speedField));
//    }catch(...){
//        throw "Invalid record!";
//    }
    
    
    
}

void Racecar::display(std::ostream &out) const {
    Car::display(out);
    if(m_booster){
        out << "*";
    }
}

double Racecar::topSpeed() const{
    return Car::topSpeed() * (1+m_booster);
}

std::ostream& operator<<(std::ostream& os, const Racecar& obj){
    obj.display(os);
    return os;
}
}
