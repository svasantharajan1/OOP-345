// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_RESERVATION_H
#define SDDS_RESERVATION_H

#include <iostream>
#include <string>
using namespace std;

namespace sdds {
    class Reservation{
        string res_id;
        string res_name;
        string res_email;
        size_t res_num;
        int p_day;
        int p_hour;
    public:
        Reservation();
        Reservation(const std::string& m_res);
        friend ostream& operator<<(ostream& os,const Reservation& obj);
    };
}

#endif /* Reservation_hpp */
