/*
La clase Teacher, representa a un tipo de la clase Persona, de la misma manera,
que la clase de tipo Student, estamos representando herencia. Tiene tres atributos
extras que le diferencian de los demás.
*/

//Incluimos el archivo.h
#ifndef AGENDA_CPP
#define AGENDA_CPP

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clases que se van a incluir
#include "Task.cpp"
#include "Event.cpp"  
#include "Date.cpp"

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

//Constructores
Agenda::Agenda(){}
Agenda::Agenda(vector<Task> _task, vector<Event> _event){
    task = _task;
    event = _event;
}
Agenda::Agenda(vector<Task> _task){
    task = _task;
    vector<Event> emptyEvents;
    event = emptyEvents;
}
Agenda::Agenda(vector<Event> _event){
    event = _event;
    vector<Task> emptyTask;
    task = emptyTask;
}
//Getters
vector<Task> Agenda::getTask(){
    return task;
}
vector<Event> Agenda::getEvent(){
    return event;
}
//Setters
void Agenda::setTask(vector <Task> _task){
    task = _task;
}
void Agenda::setEvent(vector <Event> _event){
    event = _event;
}
//Funciones adicionaless
int Agenda::lenTask(){
    return task.size();
}
int Agenda::lenEvent(){
    return event.size();
}
void Agenda::addTask(Task task1){
    task.push_back(task1);
}
void Agenda::addEvent(Event event1){
    event.push_back(event1);
}
void Agenda::deleteTask(int position){
    task.erase(task.begin() + (position - 1));
}
void Agenda::deleteEvent(int position){
    event.erase(event.begin() + (position - 1));   
}
string Agenda::printInformation(){
    string msg;
    msg = "Task: \n";
    if (lenTask() != 0){
        for (int i = 0; i < task.size(); i++){
            msg += to_string(i + 1) + ". \n";
            msg += task[i].printInformationTask();
        }
    } else {
        msg += "There is no task agended \n";
    }
    msg += "Event: \n";
    if (lenEvent() != 0){
        for (int i = 0; i < event.size(); i++){
            msg += to_string(i + 1) + ". \n";
            msg += event[i].printInformationEvent();
        }
    } else {
        msg += "There is no events agended \n";
    }
    return msg;
}
Task Agenda::getTaskPosition(int position){
    return task[position];
}
Event Agenda::getEventPosition(int position){
    return event[position];
}

#endif