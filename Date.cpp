/*
Definimos la clase Date, que nos ayuda a definir el día de entrega de 
un objeto tipo Task y ayuda a definir el día del evento para un objeto
tipo Event.
*/

//Incluimos el archivo .h
#include "Date.h"

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Constructores
Date::Date(){
    day = 0;
    month = 0;
    year = 0;
}
Date::Date(int _day, int _month, int _year){
    day = _day;
    month = _month;
    year = _year;
}
//Getters
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}
//Setters
void Date::setDay(int _day){
    day = _day;
}
void Date::setMonth(int _month){
    month = _month;
}
void Date::setYear(int _year){
    year = _year;
}