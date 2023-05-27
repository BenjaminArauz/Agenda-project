#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Agenda.h"

class Person {
    protected:
        string name;
        string ID;
        string email;
        int phone;
        Agenda *agenda;
    public:
        Person();
        Person(string, string, string, int, vector<Task>, vector<Event>);
        ~Person();
        string getName();
        string getID();
        string getEmail();
        int getPhone();
        Agenda *getAgenda();
        void setName(string);
        void setID(string);
        void setEmail(string);
        void setPhone(int);
        void *setAgenda(Agenda*);
};

#endif