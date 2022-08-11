// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#include <iostream>
#include "Movie.h"
namespace sdds {
Movie::Movie(){
    titles = "";
    yearOfRlease = 0;
    desc = "";
}
Movie::Movie(const std::string& strMovie){ // separate part in movie file line one by one
    auto title_field = strMovie.find(',');
    auto year_field = strMovie.find(',', title_field + 1);
    auto desc_field = strMovie.find('.', year_field + 1);
    
    titles = strMovie.substr(0, title_field);
    titles.erase(0,titles.find_first_not_of(" "));
    titles.erase(titles.find_last_not_of(" ") + 1);
    
    yearOfRlease = stoi(strMovie.substr(title_field + 1, year_field - title_field -1));
    desc = strMovie.substr(year_field+1, desc_field - year_field + 1);
    desc.erase(0,desc.find_first_not_of(" "));
}
const std::string& Movie::title() const {
    return titles;
}
std::ostream& operator<<(std::ostream& os, const Movie& obj){
    os << std::setw(40) << obj.titles << " | " << std::setw(4) << obj.yearOfRlease << " | " << obj.desc << std::endl;
    return os;
}
}
