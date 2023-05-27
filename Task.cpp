#include "Task.h"

#include <iostream>
#include <string>
using namespace std;

Task::Task(){
    priority = 0;
    complete = false;
}
Task::Task(string _title, int _priority, bool _complete){
    title = _title;
    priority = _priority;
    complete = _complete;
}
string Task::getTitle(){
    return title;
}
int Task::getPriority(){
    return priority;
}
bool Task::getComplete(){
    return complete;
}
void Task::setTitle(string _title){
    title = _title;
}
void Task::setPriority(int _priority){
    priority = _priority;
}
void Task::setComplete(bool _complete){
    complete = _complete;
}
void Task::printInformationTask(){
    cout << "Title: " << getTitle() << endl;
    cout << "Priority: ";
    switch (getPriority()){
        case 1:
            cout << "1. High" << endl;
            break;
        case 2:
            cout << "2. Medium" << endl;
            break;
        case 3:
            cout << "3. Low" << endl;
            break;
        default: 
            break;
    }
    cout << "Process: ";
    switch (getComplete()){
        case true:
            cout << "Finished" << endl;
            break;
        case false:
            cout << "Pendient" << endl;
            break;
        default:
            break;
    }
}