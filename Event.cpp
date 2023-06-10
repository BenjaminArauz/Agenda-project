/*
*
*
* Agenda project
* Benjamín Iván Arauz Córdova
* 10/06/2023
* La clase event nos permite representar y gestionar los eventos que se pueden manejar, la clase event se establece
* como una relación de agregación dentro de la clase Agenda. La clase event encapsula información relevante, como
* el titulo del evento, la fecha, la cantidad de participantes, etc. La relación de agregación de la clase event
* y la clase agenda nos permite acceeder y manipular fácilmente los eventos dentro de agenda
*/

#ifndef EVENT_CPP
#define EVENT_CPP

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase que se van a incluir
#include "Date.cpp"

//Definición de la clase
class Event {
    private:
        string title;
        int participants;
        string eventType;
        string location;
        Date eventDay;
    public:
        //Constructores
        Event();
        Event(string, int, string, string, int, int, int);
        //Getters
        string getTitle();
        int getParticipants();
        string getEvenType();
        string getLocation();
        Date getEventDay();
        //Setters
        void setTitle(string);
        void setParticipants(int);
        void setEventType(string);
        void setLocation(string);
        void setEventDay(Date);
        //Método adicional
        string printInformationEvent(); //Función para imprimir la información de Event
};

//Constructores
Event::Event(){
    participants = 0;
    eventType = " ";
    location = "";
}
Event::Event(string _title, int _participants, string _eventType, string _location, int day, int month, int year){
    title = _title;
    participants = _participants;
    eventType = _eventType;
    location = _location;
    //Date es composición de Event, por lo que se crea dentro del constructor tipo Event
    eventDay = Date(day, month, year);
}
//Getters
string Event::getTitle(){
    return title;
}
int Event::getParticipants(){
    return participants;
}
string Event::getEvenType(){
    return eventType;
}
string Event::getLocation(){
    return location;
}
Date Event::getEventDay(){
    return eventDay;
}
//Setters
void Event::setTitle(string _title){
    title = _title;
}
void Event::setParticipants(int _participants){
    participants = _participants;
}
void Event::setEventType(string _eventType){
    eventType = _eventType;
}
void Event::setLocation(string _location){
    location = _location;
}
void Event::setEventDay(Date _eventDay){
    eventDay = _eventDay;
}
//Métodos adicionales
string Event::printInformationEvent(){
    string msg;
    msg = "Title: " + title + "\n";
    msg += "Event: " + eventType + "\n";
    msg += "Participants: " + to_string(participants) + "\n";
    msg += "Location: " + location + "\n";
    msg += "Event day: ";
    //Usamos la sobrecarga de operadores (+), para concatenar un string con la fecha
    msg = msg + eventDay;
    msg += "\n";
    return msg;
}


#endif