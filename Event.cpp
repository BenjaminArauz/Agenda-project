#include "Event.h"

#include <iostream>
#include <string>
using namespace std;

Event::Event(){
    location = "";
}
Event::Event(string _title, string _location){
    title = _title;
    location = _location;
    //attend = _attend;
}
string Event::getTitle(){
    return title;
}
string Event::getLocation(){
    return location;
}
void Event::setTitle(string _title){
    title = _title;
}
void Event::setLocation(string _location){
    location = _location;
}
void Event::printInformationEvent(){
    cout << "Title: " << getTitle() << endl;
    cout << "Location: " << getLocation() << endl;
}