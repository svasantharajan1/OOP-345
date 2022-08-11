// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#include "Autoshop.h"
namespace sdds {
Autoshop& Autoshop::operator+=(Vehicle* theVehicle){
    m_vehicles.push_back(theVehicle); // add data using vector
    return *this; // return this object
}
Autoshop::~Autoshop(){
    for(auto it = m_vehicles.begin(); it < m_vehicles.end(); it++){
        delete (*it);
    }
}
void Autoshop::display(std::ostream& out) const {
    out << "--------------------------------" << std::endl;
    out << "| Cars in the autoshop!        |" << std::endl;
    out << "--------------------------------" << std::endl;
    for(auto elem : this->m_vehicles){ //vector iteration
        elem->display(out); // display each data in vector
        out << std::endl;
    }
    out << "--------------------------------" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Autoshop& obj) {
    obj.display(os);
    return os;
}
}
