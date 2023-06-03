/*
La clase Event, la cual va a ser crucial para el objeto tipo Agenda, 
representa agregación en la Agenda
*/

#ifndef TASK_H
#define TASK_H

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
using namespace std;

//Clases que se van a incluir
#include "Date.h"

//Definición de la clase Task
class Task {
    private:
        string title;
        int priority;
        bool complete;
        Date deliverDate;
    public:
        //Constructores
        Task();
        Task(string, int, bool, int, int, int);
        //Getters
        int getPriority();
        bool getComplete();
        Date getDeliverDate();
        //Setters
        void setPriority(int);
        void setComplete(bool);
        void setDeliverDate(Date);
        //Método extra para imprimir toda la información de Task
        string printInformationTask();
};  

#endif