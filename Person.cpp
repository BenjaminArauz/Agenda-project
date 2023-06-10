/*
*
*
* Agenda project
* Benjamín Iván Arauz Córdova
* 10/06/2023
* Dentro de este proyecto se ha implementado la clase abstracta Persona, la cual tiene un rol fundamental al repre-
* sentar los usuarios que interáctuan con el sistema. Sireve como una base concceptual para definir las caracterís-
* ticas y comportamientos comunes que comparten tanto Student como Teacher. Al ser una clase abstracta no se puede
* instanciar directamente lo cual nos sirve para poder aplicar polimorfismo en el main. 
*/

#ifndef PERSON_CPP
#define PERSON_CPP

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase que se van a incluir
#include "Agenda.cpp"

//Definicion de clase
class Person {
    protected:
        string name;
        string ID;
        string email;
        string username;
        string phone;
        Agenda *agenda;
    public:
        //Constructores
        Person();
        //Declaramos sobreeescritura con los constructores
        //Constructor con un vector de objetos tipo Task
        Person(string, string, string, string, string, vector<Task>);
        //Constructor con un vector de objetos tipo Event
        Person(string, string, string, string, string, vector<Event>);
        //Destructor
        ~Person();
        //Getters
        string getName();
        string getID();
        string getEmail();
        string getUsername();
        string getPhone();
        Agenda *getAgenda();
        //Setters
        void setName(string);
        void setID(string);
        void setEmail(string);
        void setUsername(string);
        void setPhone(string);
        void setAgenda(Agenda*);
        //Método virtual puro que declara a la clase Persona como abstracta
        virtual string printInformationPerson() = 0;
};

//Constructores
Person::Person(){
    name = " ";
    ID = " ";
    email = " ";
    username = " ";
    phone = "0";
}
Person::Person(string _name, string _ID, string _email, string _username, string _phone, vector<Task> tasks){
    name = _name;
    ID = _ID;
    email = _email;
    username = _username;
    phone = _phone;
    agenda = new Agenda(tasks);
}
Person::Person(string _name, string _ID, string _email, string _username, string _phone, vector<Event> events){
    name = _name;
    ID = _ID;
    email = _email;
    username = _username;
    phone = _phone;
    agenda = new Agenda(events);
}
//Destructor
Person::~Person(){
    delete agenda;
}
//Getters
string Person::getName(){
    return name;
}
string Person::getID(){
    return ID;
} 
string Person::getEmail(){
    return email;
}
string Person::getUsername(){
    return username;
}
string Person::getPhone(){
    return phone;
}
Agenda *Person::getAgenda(){
    return agenda;
}
//Setters
void Person::setName(string _name){
    name = _name;
}
void Person::setID(string _ID){
    ID = _ID;
}
void Person::setEmail(string _email){
    email = _email;
}
void Person::setUsername(string _username){
    username = _username;
}
void Person::setPhone(string _phone){
    phone = _phone;
}
void Person::setAgenda(Agenda *_agenda){
    agenda = _agenda;
}
//Obs: No se declara el cuerpo de la función printInformationPerson, debido a que es abstracto
#endif