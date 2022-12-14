// Name: Vasantharajan Sharmilann
// Seneca Student ID: 142642180
// Seneca email: svasantharajan1@myseneca.ca
// Date of completion:
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_TIMEDEVENTS_H
#define SDDS_TIMEDEVENTS_H
#include <iostream>
#include <chrono>
#include <string>
#define MAXIMUM_RECORD_OBJECTS 7

namespace sdds {
    class TimedEvents {
        int numOfRecordStored = 0;
        std::chrono::steady_clock::time_point start_time;
        std::chrono::steady_clock::time_point end_time;
        struct {
            std::string event_name;
            std::string units_time;
            std::chrono::steady_clock::duration dur_time;
        }arrayRecords[MAXIMUM_RECORD_OBJECTS];
    
    public:
        TimedEvents();
        void startClock();
        void stopClock();
        void recordEvent(const char* str);
        friend std::ostream& operator <<(std::ostream& os, TimedEvents& obj);
    };
    
}

#endif
