/*
La clase Persona, es una clase abstracta que va a representar al 
usuario.
*/

#ifndef PERSON_H
#define PERSON_H

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clases que se van a incluir
#include "Agenda.h"

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
        Person(string, string, string, string, string, vector<Task>, vector<Event>);
        Person(string, string, string, string, string, vector<Task>);
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

#endif