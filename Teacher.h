/*
La clase Teacher, representa a un tipo de la clase Persona, de la misma manera,
que la clase de tipo Student, estamos representando herencia. Tiene tres atributos
extras que le diferencian de los demás.
*/

#ifndef TEACHER_H
#define TEACHER_H

//Librerias necesarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase que se va a incluir
#include "Person.h"

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
        Teacher(string, string, string, string, string, vector<Task>, vector<Event>, string, string, int);
        Teacher(string, string, string, string, string, vector<Task>, string, string, int);
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

#endif