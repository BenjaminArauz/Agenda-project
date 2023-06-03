/*
La clase Persona, es una clase abstracta que va a representar al 
usuario.
*/

//Incluimos el archivo .h
#include "Person.h"

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Constructores
Person::Person(){
    name = " ";
    ID = " ";
    email = " ";
    username = " ";
    phone = "0";
}
Person::Person(string _name, string _ID, string _email, string _username, string _phone, vector<Task> tasks, vector<Event> events){
    name = _name;
    ID = _ID;
    email = _email;
    username = _username;
    phone = _phone;
    agenda = new Agenda(tasks, events);
}
Person::Person(string _name, string _ID, string _email, string _username, string _phone, vector<Task> tasks){
    name = _name;
    ID = _ID;
    email = _email;
    username = _username;
    phone = _phone;
    agenda = new Agenda(tasks);
}
Person::Person(string _name, string _ID, string _email, string _username, string _phone, vector<Event> events){
    name = _name;
    ID = _ID;
    email = _email;
    username = _username;
    phone = _phone;
    agenda = new Agenda(events);
}
//Destructor
Person::~Person(){
    delete agenda;
}
//Getters
string Person::getName(){
    return name;
}
string Person::getID(){
    return ID;
} 
string Person::getEmail(){
    return email;
}
string Person::getUsername(){
    return username;
}
string Person::getPhone(){
    return phone;
}
Agenda *Person::getAgenda(){
    return agenda;
}
//Setters
void Person::setName(string _name){
    name = _name;
}
void Person::setID(string _ID){
    ID = _ID;
}
void Person::setEmail(string _email){
    email = _email;
}
void Person::setUsername(string _username){
    username = _username;
}
void Person::setPhone(string _phone){
    phone = _phone;
}
void Person::setAgenda(Agenda *_agenda){
    agenda = _agenda;
}
