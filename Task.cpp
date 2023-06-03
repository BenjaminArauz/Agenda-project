/*
La clase Event, la cual va a ser crucial para el objeto tipo Agenda, 
representa agregación en la Agenda
*/

//Incluimos el archivo.h
#include "Task.h"

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
using namespace std;

//Constructores
Task::Task(){
    priority = 0;
    complete = false;
}
Task::Task(string _title, int _priority, bool _complete, int day, int month, int year){
    title = _title;
    priority = _priority;
    complete = _complete;
    //Date es composición de Task, por lo que se crea dentro del constructor tipo Task
    Date date1(day, month, year);
    deliverDate = date1;
}
//Getters
int Task::getPriority(){
    return priority;
}
bool Task::getComplete(){
    return complete;
}
Date Task::getDeliverDate(){
    return deliverDate;
}
//Setters
void Task::setPriority(int _priority){
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
    msg += "Priority: ";
    if (getPriority() == 1){
        msg += "High \n";
    } else if (getPriority() == 2){
        msg += "Medium \n";
    } else if (getPriority() == 3){
        msg += "Low \n";
    }
    msg += "Process: ";
    if (getComplete() == true){
        msg += "Finished \n";
    } else if (getComplete() == false){
        msg += "Pendient \n";
    }
    return msg;
}