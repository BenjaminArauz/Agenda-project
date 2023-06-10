/*
*
*
* Agenda project
* Benjamín Iván Arauz Córdova
* 10/06/2023
* La clase Teacher representa un tipo de la clase Person, lo que implica que se está utilizando herencia en el proyecto.
* En este caso, la clase Teacher tiene tres atributos adicionales que la diferencian de la clase Persona y de la clase 
* Student. 
*/

#ifndef TEACHER_CPP
#define TEACHER_CPP

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase que se va a incluir
#include "Person.cpp"

//Definición de la clase
class Teacher : public Person { //Representamos herencia de Persona
    private:
        string subject;
        string degree;
        int yearsExperience;
    public:
        //Constructores
        Teacher();
        //Agregamos los atributos de la clase padre
        //Declaramos sobreeescritura con los constructores
        //Constructor con un vector tipo task
        Teacher(string, string, string, string, string, vector<Task>, string, string, int);
        //Constructor con un vector tipo event
        Teacher(string, string, string, string, string, vector<Event>, string, string, int);
        //Destructor
        ~Teacher();
        //Getters
        string getSubject();
        int getYearsExperience();
        string getDegree();
        //Setters
        void setSubject(string);
        void setYearsExperience(int);
        void setDegree(string);
        //Función sobreescrita de la clase Padre
        string printInformationPerson() override;
};

//Constructores
Teacher::Teacher(){
    subject = " ";
    degree = " ";
    yearsExperience = 0;
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

#endif