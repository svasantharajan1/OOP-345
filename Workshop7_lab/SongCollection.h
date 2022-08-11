// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef SDDS_SONGCOLLECTION_H
#define SDDS_SONGCOLLECTION_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
namespace sdds {
struct Song{
    std::string s_artist;
    std::string s_title;
    std::string s_album;
    double s_price;
    std::string s_relYears;
    std::string s_length;
};
class SongCollection {
    std::vector<Song> s_Song;
public:
    SongCollection(const char* is);
    void display(std::ostream& out) const;
};
std::ostream& operator<<(std::ostream& out, const Song& theSong);

}
#endif /* SongCollection_hpp */
