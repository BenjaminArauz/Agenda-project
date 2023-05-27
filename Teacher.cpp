#include "Teacher.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Teacher::Teacher(){
    subject = " ";
    degree = " ";
    yearsExperience = 0;
}
Teacher::Teacher(string _name, string _ID, string _email, int _phone, vector<Task> tasks, vector<Event> events, string _subject, int _yearsExperience, string _degree) : Person(_name, _ID, _email, _phone, tasks, events){
    subject = _subject;
    degree = _degree;
    yearsExperience = _yearsExperience;
}
string Teacher::getSubject(){
    return subject;
}
int Teacher::getYearsExperience(){
    return yearsExperience;
}
string Teacher::getDegree(){
    return degree;
}
void Teacher::setSubject(string _subject){
    subject = _subject;
}
void Teacher::setYearsExperience(int _yearsExperience){
    yearsExperience = _yearsExperience;
}
void Teacher::setDegree(string _degree){
    degree = _degree;
}