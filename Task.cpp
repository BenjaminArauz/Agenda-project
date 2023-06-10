/*
*
*
* Agenda project
* Benjamín Iván Arauz Córdova
* 10/06/2023
* La clase task nos permite representar y gestionar una tarea, de la misma manera que la clase event se estable-
* ce como una relación de agregación dentro de la clase agenda. La clase task encapsula información relevante, por
* ejemplo, el titulo del trabajo, si esta completo o no, el nivel de prioridad y la fecha de entrega. La relación 
* de agregación, permite que la clase agenda acceda y manipula fácilmente los eventos dentro de agenda.
*/

#ifndef TASK_CPP
#define TASK_CPP

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
using namespace std;

//Clases que se van a incluir
#include "Date.cpp"

//Definición de la clase Task
class Task {
    private:
        string title;
        string priority;
        bool complete;
        Date deliverDate;
    public:
        //Constructores
        Task();
        Task(string, string, bool, int, int, int);
        //Getters
        string getPriority();
        bool getComplete();
        Date getDeliverDate();
        //Setters
        void setPriority(string);
        void setComplete(bool);
        void setDeliverDate(Date);
        //Funcion adicional
        string printInformationTask(); //Método extra para imprimir toda la información de Task
};  

//Constructores
Task::Task(){
    priority = " ";
    complete = false;
}
Task::Task(string _title, string _priority, bool _complete, int day, int month, int year){
    title = _title;
    priority = _priority;
    complete = _complete;
    //Date es composición de Task, por lo que se crea dentro del constructor tipo Task
    Date date1(day, month, year);
    deliverDate = date1;
}
//Getters
string Task::getPriority(){
    return priority;
}
bool Task::getComplete(){
    return complete;
}
Date Task::getDeliverDate(){
    return deliverDate;
}
//Setters
void Task::setPriority(string _priority){
    priority = _priority;
}
void Task::setComplete(bool _complete){
    complete = _complete;
}
void Task::setDeliverDate(Date _deliverDate){
    deliverDate = _deliverDate;
}
//Método extra para imprimir toda la información de Task
string Task::printInformationTask(){
    string msg;
    msg = "Title: " + title + "\n";
    msg += "Priority: " + priority + "\n"; 
    msg += "Process: ";
    if (getComplete() == true){
        msg += "Finished \n";
    } else if (getComplete() == false){
        msg += "Pendient \n";
    }
    msg += "Deliver date: ";
    //Usamos la sobrecarga de operadores (+), para concatenar un string con la fecha
    msg = msg + deliverDate;
    msg += "\n";
    return msg;
}

#endif