// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_TEXT_H
#define SDDS_TEXT_H
#include <string>
namespace sdds {
    class Text {
        unsigned int numOfRecord; //count the words in file
        std::string* f_name; //string pointer for using dynamic allocated memory
        
    public:
        Text();
        Text(const char* name);
        Text(const Text& copy);
        Text& operator=(const Text& copy);
        ~Text();
        size_t size() const;
    };
}

#endif /* Text_h */
