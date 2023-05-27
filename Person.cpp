#include "Person.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Person::Person(){
    name = " ";
    ID = " ";
    email = " ";
    phone = 0;
}
Person::Person(string _name, string _ID, string _email, int _phone, vector<Task> tasks, vector<Event> events){
    name = _name;
    ID = _ID;
    email = _email;
    phone = _phone;
    agenda = new Agenda(tasks, events);
}
Person::~Person(){
    delete agenda;
}
string Person::getName(){
    return name;
}
string Person::getID(){
    return ID;
} 
string Person::getEmail(){
    return email;
}
int Person::getPhone(){
    return phone;
}
Agenda *Person::getAgenda(){
    return agenda;
}
void Person::setName(string _name){
    name = _name;
}
void Person::setID(string _ID){
    ID = _ID;
}
void Person::setEmail(string _email){
    email = _email;
}
void Person::setPhone(int _phone){
    phone = _phone;
}
void *Person::setAgenda(Agenda *_agenda){
    agenda = _agenda;
}