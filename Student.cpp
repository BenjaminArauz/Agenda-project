/*
*
*
* Agenda project
* Benjamín Iván Arauz Córdova
* 10/06/2023
* Dentro de este proyecto se ha implementado la clase student, la cual representa a un tipo de la clase person
* por lo que estamos representando herencia, tiene tres atributos extras que le diferencian de la clase person.
* La clase student hereda todos los atributos y métodos de la clase person.
*/

#ifndef STUDENT_CPP
#define STUDENT_CPP

//Clases que se van a incluir
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase que se va a incluir
#include "Person.cpp"

//Definición de las personas
class Student : public Person { //Representamos herencia de Persona
    private:
        float grade; 
        int semester;
        string career;
    public:
        //Constructores
        Student();
        //Agregamos los atributos de la clase padre
        //Declaramos sobreeescritura con los constructores
        //Constructor con un vector de objetos tipo Task
        Student(string, string, string, string, string, vector<Task>, float, int, string);
        //Constructor con un vector de objetos tipo Event
        Student(string, string, string, string, string, vector<Event>, float, int, string);
        //Destructor
        ~Student();
        //Getters
        float getGrade();
        int getSemester();
        string getCareer();
        //Setters
        void setGrade(float);
        void setSemester(int);
        void setCareer(string);
        //Función sobreescrita de la clase Padre con override
        string printInformationPerson() override;
};

//Constructores
Student::Student(){
    grade = 0.0;
    semester = 0;
    career = " ";
}
Student::Student(string _name, string _ID, string _email, string _username, string _phone, vector<Task> tasks, float _grade, int _semester, string _career) : Person(_name, _ID, _email, _username, _phone, tasks){
    grade = _grade;
    semester = _semester;
    career = _career;
}
Student::Student(string _name, string _ID, string _email, string _username, string _phone, vector<Event> events, float _grade, int _semester, string _career) : Person(_name, _ID, _email, _username, _phone, events){
    grade = _grade;
    semester = _semester;
    career = _career;
}
//Destructor
Student::~Student(){
    delete agenda;
}
//Getters
float Student::getGrade(){
    return grade;
}
int Student::getSemester(){
    return semester;
}
string Student::getCareer(){
    return career;
}
//Setters
void Student::setGrade(float _grade){
    grade = _grade;
}
void Student::setSemester(int _semester){
    semester = _semester;
}
void Student::setCareer(string _career){
    career = _career;
}
//Método para imprimir información del estudiante
string Student::printInformationPerson(){
    string msg;
    msg = "Username: " + username + "\n";
    msg += "Name: " + name + "\n";
    msg += "ID: " + ID + "\n";
    msg += "Email: " + email + "\n";
    msg += "Phone: " + phone + "\n";
    msg += "Grade: " + to_string(grade) + "\n";
    msg += "Semester: " + to_string(semester) + "\n";
    msg += "Career: " + career + "\n"; 
    //Llamamos a la función de la agenda, para imprimir toda la información que contiene en ella
    msg += agenda->printInformation(); 
    return msg;
}


#endif