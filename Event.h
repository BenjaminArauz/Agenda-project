#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Event {
    private:
        string title;
        string location;
    public:
        Event();
        Event(string, string);
        string getTitle();
        string getLocation();
        void setTitle(string);
        void setLocation(string);
        void printInformationEvent();
};

#endif