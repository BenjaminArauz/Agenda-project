#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Person.h"

class Student : public Person {
    private:
        float grade; //califications
        int yearLevel;
        string career;
    public:
        Student();
        Student(string, string, string, int, vector<Task>, vector<Event>, float, int, string);
        float getGrade();
        int getYearLevel();
        string getCareer();
        void setGrade(float);
        void setYearLevel(int);
        void setCareer(string);
};

#endif 