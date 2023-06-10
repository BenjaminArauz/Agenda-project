/*
*
*
* Agenda project
* Benjamín Iván Arauz Córdova
* 10/06/2023
* La clase Date reepresenta la fecha, nos permite definir y manipular fechas, resulta fundamental para establecer
* tanto las fechas de las tareas y las fechas de los evento. Brinda una mayor organización y seguimiento de las
* actividades pendientes. La clase Date tiene 3 atributos, de la misma manera, en esta clase, se le aplica sobre-
* carga de métodos, a +. 
*/

#ifndef DATE_CPP
#define DATE_CPP

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
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
        //Métodos adicionales
        string printDate(); //Imprime datos
        //Sobrecarga de operador +
        friend string operator+(string, Date);
};

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
//Funciones adicionales
string Date::printDate(){
    string msg;
    msg = to_string(day) + "-" + to_string(month) + "-" + to_string(year);
    return msg;
}
//Sobrecarga de opeereador + 
string operator+(string msg, Date date1){
    return msg + date1.printDate();
}

#endif