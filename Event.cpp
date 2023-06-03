/*
Definimos la clase Event, la cual va a ser crucial para el objeto
tipo Agenda, representa agregación en la Agenda
*/

//Incluimos el archivo .h
#include "Event.h"

//Librerias necesarias para esta clase

#include <iostream>
#include <string>
using namespace std;

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
    Date date1(day, month, year);
    eventDay = date1;
}
//Getters
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
    msg += "Participants: " + to_string(participants);
    msg += "Location: " + location + "\n";
    return msg;
}