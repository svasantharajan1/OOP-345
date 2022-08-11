// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#include "Utilities.h"
namespace sdds {
Vehicle* createInstance(std::istream& in){
    std::stringstream buf;
    std::string line;
    std::getline(in, line);
    buf << line;
    char tag;
    buf >> tag;
    if(tag == 'c' || tag == 'C'){
        return new Car(buf);
    }
    else{
        return nullptr;
    }
    
}
}
