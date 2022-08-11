// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_LIST_H
#define SDDS_LIST_H
#include <iostream>

namespace sdds {
    template <typename T, int N> // Declare template with a non-type template parameter>
    class List {
        T a[N];
        size_t addListElement = 0; // variable for adding list elements
    public:
        size_t size() const{
            return addListElement;
        }
        const T& operator[](size_t i) const{
            return a[i]; 
        }
        void operator+=(const T& tt){
            if(addListElement < N){ // check the List number, it is under the maximum number or not
                a[addListElement] = tt;
                addListElement++; // add element and add size
            }
        }
};
}
#endif /* List_hpp */
