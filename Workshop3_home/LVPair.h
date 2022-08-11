// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef SDDS_LVPAIR_H
#define SDDS_LVPAIR_H

#include <iostream>
#include <string>

namespace sdds {
    template <typename L, typename V>
    class LVPair {
        L typeName;
        V typeValue;
    public:
        LVPair(): typeName{}, typeValue{} {} // Constuctor
        LVPair(const L& aa, const V& bb): typeName(aa),typeValue(bb){}; //constuctor with parameters
        const L& key() const{
            return typeName;
        }
        const V& value() const{
            return typeValue;
        }
        virtual void display(std::ostream& os) const{
            os << key() << " : " << value() << std::endl; //output
        }
    };

// helper function for helping display
template <typename L, typename V>
std::ostream& operator<<(std::ostream& os, const LVPair<L, V>& pair){
    pair.display(os);
    return os;
}

// Class SummableLVPair derived from LVPair
template <typename L, typename V>
class SummableLVPair : public LVPair<L, V>{
    static V initialValue;
    static size_t minimumField;
public:
    static const V& getInitialValue() {
        return initialValue;
    }
    SummableLVPair(){}
    SummableLVPair(const L& lbl, const V& val) : LVPair<L, V>(lbl, val) {
        if(minimumField < lbl.size()){
            minimumField = lbl.size();
        }
    }
    
    V sum(const L& lbl, const V& val) const {
        if(LVPair<L, V>::key() == lbl)
            return LVPair<L, V>::value() + val;
        else
            return val;
    }
    
    void display(std::ostream& os) const {
        os.setf(std::ios::left);
        os.width(minimumField);
        LVPair<L, V>::display(os);
        os.unsetf(std::ios::left);
    }
   
};
template <typename L, typename V>
size_t SummableLVPair<L, V>::minimumField = 0; //initialize for static value

template<>
std::string SummableLVPair<std::string, std::string>::initialValue = ""; // initialize string type with template specialize
   
template<>
int SummableLVPair<std::string, int>::initialValue = 0; // initialize int type with template specialize
   
template<>
std::string SummableLVPair<std::string, std::string>::sum(const std::string& lbl, const std::string& val) const{ //specializing the `sum()` member function.
    if(val == "")
        return LVPair<std::string, std::string>::value();
    else
        return val + ", " + LVPair<std::string, std::string>::value();
}
}

#endif /* LVPair_hpp */
