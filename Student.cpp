/*
La clase Estudiante, representa a un tipo de la clase Persona, por lo tanto, 
estamos representando herencia. Tiene tres atributos extras que le diferencian 
de los demás.
*/

//Incluimos el archivo .h
#include "Student.h"

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Constructores
Student::Student(){
    grade = 0.0;
    semester = 0;
    career = " ";
}
Student::Student(string _name, string _ID, string _email, string _username, string _phone, vector<Task> tasks, vector<Event> events, float _grade, int _semester, string _career) : Person(_name, _ID, _email, _username, _phone, tasks, events){
    grade = _grade;
    semester = _semester;
    career = _career;
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
