/*
Definimos la clase Date, que nos ayuda a definir el día de entrega de 
un objeto tipo Task y ayuda a definir el día del evento para un objeto
tipo Event.
*/

#ifndef DATE_H
#define DATE_H

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Definición de la clase 
class Date {
    private:
        int day;
        int month;
        int year;
    public:
        //Constructores
        Date();
        Date(int, int, int);
        //Getters
        int getDay();
        int getMonth();
        int getYear();
        //Setters
        void setDay(int);
        void setMonth(int);
        void setYear(int);
};

#endif