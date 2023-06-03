/*
La clase Agenda, representa a una agenda en la vida real, la agenda principalmente
se agrega de Task y Event, esta representando agregación. Cabe recalcar que tanto
Task y Event son clases
*/
#ifndef AGENDA_H
#define AGENDA_H

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clases que se van a incluir
#include "Task.h"
#include "Event.h"  
#include "Date.h"

//Definición de la clase
class Agenda {
    private:
        vector<Task> task; //vector de tasks
        vector<Event> event; //vector de events
    public:
        //Constructores
        Agenda();
        Agenda(vector<Task>, vector<Event>);
        Agenda(vector<Task>);
        Agenda(vector<Event>);
        //Getters
        vector<Task> getTask();
        vector<Event> getEvent();
        //Setters
        void setTask(vector<Task>);
        void setEvent(vector<Event>);
        //Métodos adicionales
        int lenTask();
        int lenEvent();
        void addTask(Task);
        void addEvent(Event);
        void deleteTask(int);
        void deleteEvent(int);
        string printInformation();
        Task getTaskPosition(int);
        Event getEventPosition(int);
};

#endif
