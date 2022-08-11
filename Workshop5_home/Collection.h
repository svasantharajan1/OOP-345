// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.


#ifndef SDDS_COLLECTION_H
#define SDDS_COLLECTION_H
#include <iostream>
#include <string>
#include <stdexcept>

namespace sdds {
template <typename T>
class Collection{
    std::string nameOfCollection;
    T* arrOfItem;
    size_t arr_size;
    void (*c_observer)(const Collection<T>&, const T&);
public:
    Collection(std::string name){ //constuctor save the name
        nameOfCollection = name;
        arrOfItem = nullptr;
        arr_size = 0;
        c_observer = nullptr;
    }
    ~Collection() { //desturctor
        delete [] arrOfItem;
    }
    const std::string& name() const{
        return nameOfCollection;
    }
    size_t size() const{
        return arr_size;
    }
    void setObserver(void (*observer)(const Collection<T>&, const T&)){
        c_observer = observer;
    }
    
    Collection<T>& operator+=(const T& item){ // add the line in the object array
        bool existed = false;
        for(size_t i = 0; i < arr_size && !existed; i++){
            if(arrOfItem[i].title() ==  item.title()){
                existed = true;
            }
        }
        if(!existed){
            T* tmp = new T[arr_size + 1];
            for(size_t i = 0; i < arr_size; i++){
                tmp[i] = arrOfItem[i];
            }
            delete [] arrOfItem;
            arrOfItem = tmp;
            
            arrOfItem[arr_size++] = item;
            if(c_observer != nullptr){
                c_observer(*this, item);
            }
        }
        return *this;
    }
    T& operator[](size_t idx) const{ // throw error code if idx had error
        if (idx < arr_size)
            return arrOfItem[idx];
        throw std::out_of_range("Bad index [" + std::to_string(idx) +
            "]. Collection has [" + std::to_string(arr_size) + "] items."); // we can call use std::exception& e , e.what()
    }
    T* operator[](std::string title) const{
        for (size_t i = 0; i < arr_size; i++) {
            if (title == arrOfItem[i].title())
                return arrOfItem + i;
        }
        return nullptr;
    }
};
template <typename T>
std::ostream& operator<<(std::ostream& os, const Collection<T>& obj){
    for(size_t i = 0; i <obj.size(); i++){
        os <<obj[i];
    }
    return os;
}
}

#endif /* Collection_h */
