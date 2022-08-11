// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_SPELLCHECKER_H
#define SDDS_SPELLCHECKER_H

#include <iostream>
namespace sdds{
class SpellChecker {
    std::string m_badWords[5];
    std::string  m_goodWords[5];
public:
    SpellChecker(const char* filename);
    void operator()(std::string& text) const;
};
}
#endif /* SpellChecker_hpp */
