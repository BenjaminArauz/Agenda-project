/*
La clase Estudiante, representa a un tipo de la clase Persona, por lo tanto, 
estamos representando herencia. Tiene tres atributos extras que le diferencian 
de los demás.
*/

#ifndef STUDENT_H
#define STUDENT_H

//Clases que se van a incluir
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clase que se va a incluir
#include "Person.h"

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
        Student(string, string, string, string, string, vector<Task>, vector<Event>, float, int, string);
        Student(string, string, string, string, string, vector<Task>, float, int, string);
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
        //Función sobreescrita de la clase Padre
        string printInformationPerson() override;
};

#endif 