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
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <list>
#include <algorithm>
#include <cstring>
namespace sdds {

struct Song{
    std::string s_artist;
    std::string s_title;
    std::string s_album;
    double m_price;
    std::string s_relYears;
    size_t s_length;
};
class SongCollection {
    std::vector<Song> s_Song;
public:
    SongCollection(const char* is);
    void display(std::ostream& out) const;
    void sort(std::string str);
    void cleanAlbum();
    bool inCollection(std::string str) const;
    std::list<Song> getSongsForArtist(std::string str) const;
};
std::ostream& operator<<(std::ostream& out, const Song& theSong);

}
#endif /* SongCollection_hpp */
