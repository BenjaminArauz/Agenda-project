#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Person.h"

class Teacher : public Person {
    private:
        string subject;
        string degree;
        int yearsExperience;
    public:
        Teacher();
        Teacher(string, string, string, int, vector<Task>, vector<Event>, string, int, string);
        string getSubject();
        int getYearsExperience();
        string getDegree();
        void setSubject(string);
        void setYearsExperience(int);
        void setDegree(string);
};

#endif