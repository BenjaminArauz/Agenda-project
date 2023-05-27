#include "Student.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Student::Student(){
    grade = 0.0;
    yearLevel = 0;
    career = " ";
}
Student::Student(string _name, string _ID, string _email, int _phone, vector<Task> tasks, vector<Event> events, float _grade, int _yearLevel, string _career) : Person(_name, _ID, _email, _phone, tasks, events){
    grade = _grade;
    yearLevel = _yearLevel;
    career = _career;
}
float Student::getGrade(){
    return grade;
}
int Student::getYearLevel(){
    return yearLevel;
}
string Student::getCareer(){
    return career;
}
void Student::setGrade(float _grade){
    grade = _grade;
}
void Student::setYearLevel(int _yearLevel){
    yearLevel = _yearLevel;
}
void Student::setCareer(string _career){
    career = _career;
}