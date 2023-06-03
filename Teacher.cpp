/*
La clase Teacher, representa a un tipo de la clase Persona, de la misma manera,
que la clase de tipo Student, estamos representando herencia. Tiene tres atributos
extras que le diferencian de los demás.
*/

//Incluimos el archivo .h
#include "Teacher.h"

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Constructores
Teacher::Teacher(){
    subject = " ";
    degree = " ";
    yearsExperience = 0;
}
//Como es herencia, llamamos al constructor de la clase padre (Person)
Teacher::Teacher(string _name, string _ID, string _email, string _username, string _phone, vector<Task> tasks, vector<Event> events, string _subject, string _degree, int _yearsExperience) : Person(_name, _ID, _email, _username, _phone, tasks, events){
    subject = _subject;
    degree = _degree;
    yearsExperience = _yearsExperience;
}
Teacher::Teacher(string _name, string _ID, string _email, string _username, string _phone, vector<Task> tasks, string _subject, string _degree, int _yearsExperience) : Person(_name, _ID, _email, _username, _phone, tasks){
    subject = _subject;
    degree = _degree;
    yearsExperience = _yearsExperience;
}
Teacher::Teacher(string _name, string _ID, string _email, string _username, string _phone, vector<Event> events, string _subject, string _degree, int _yearsExperience) : Person(_name, _ID, _email, _username, _phone, events){
    subject = _subject;
    degree = _degree;
    yearsExperience = _yearsExperience;
}
//Destructor
Teacher::~Teacher(){
    delete agenda;
}
//Getters
string Teacher::getSubject(){
    return subject;
}
int Teacher::getYearsExperience(){
    return yearsExperience;
}
string Teacher::getDegree(){
    return degree;
}
//Setters
void Teacher::setSubject(string _subject){
    subject = _subject;
}
void Teacher::setYearsExperience(int _yearsExperience){
    yearsExperience = _yearsExperience;
}
void Teacher::setDegree(string _degree){
    degree = _degree;
}
//Función de la clase padre sobreescrita en la clase hija
string Teacher::printInformationPerson(){
    string msg;
    msg = "Username: " + username + "\n";
    msg += "Name: " + name + "\n";
    msg += "ID: " + ID + "\n";
    msg += "Email: " + email + "\n";
    msg += "Phone: " + phone + "\n";
    msg += "Subject: " + subject + "\n";
    msg += "Degree: " + degree + "\n";
    msg += "Years of experience: " + to_string(yearsExperience) + "\n"; 
    msg += agenda->printInformation();
    return msg;
}