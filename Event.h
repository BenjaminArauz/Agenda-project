/*
Definimos la clase Event, la cual va a ser crucial para el objeto
tipo Agenda
*/

#ifndef EVENT_H
#define EVENT_H

//Librerias necesarias para esta clase

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase que se van a incluir
#include "Date.h"

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
        int getParticipants();
        string getEvenType();
        string getLocation();
        Date getEventDay();
        //Setters
        void setParticipants(int);
        void setEventType(string);
        void setLocation(string);
        void setEventDay(Date);
        //Método adicional
        string printInformationEvent();
};

#endif