// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
namespace sdds{
class Movie {
    std::string titles;
    size_t yearOfRlease;
    std::string desc;
public:
    Movie();
    const std::string& title() const;
    Movie(const std::string& strMovie);
    template <typename T>
    void fixSpelling(T spellChecker){
        spellChecker(titles);
        spellChecker(desc);
    }
    friend std::ostream& operator<<(std::ostream& os, const Movie& obj);
};
}

#endif /* Movie_hpp */
