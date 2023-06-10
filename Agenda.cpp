/*
*
*
* Agenda project
* Benjamín Iván Arauz Córdova
* 10/06/2023
* La clase Agenda es un objeto que se utiliza para organizar eventos y tareas en un determinado periodo de tiempo. Esta
* clase es útil para administrar el tiempo de manera y eficiente. Se va a componer de objetos tipo Task y Event, esta
* clase se puede considerar como la clase principal. Se va a componer de listas de objetos tipo Task y Event representarán 
* las tareas y eventos que se agregarán a la agenda.
*/


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
        //Declaramos sobreeescritura con los constructores
        //Constructor con un vector tipo task
        Agenda(vector<Task>);

        Agenda(vector<Event>);
        //Getters
        vector<Task> getTask();
        vector<Event> getEvent();
        //Setters
        void setTask(vector<Task>);
        void setEvent(vector<Event>);
        //Métodos adicionales
        int lenTask(); //Devuelve el tamaño del vector de tipo Task
        int lenEvent(); //Devuelve el tamaño del vector de tipo Event
        void addTask(Task); //Agrega objetos de tipo Task al vector Task
        void addEvent(Event); //Agrega objetos de tipo Event al vector Event
        void deleteTask(int); //Elimina un objeto de tipo Task del vector Task
        void deleteEvent(int); //Elimina un objeto de tipo Event del vector Event
        string printInformation(); //Imprime la información
        Task getTaskPosition(int); //Devuelve un objeto tipo Task en una posición específica
        Event getEventPosition(int); //Devuelve un objeto tipo Event en una posición específica
};

//Constructores
Agenda::Agenda(){}
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