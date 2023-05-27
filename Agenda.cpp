#include "Agenda.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Agenda::Agenda(){}
Agenda::Agenda(vector<Task> _task, vector<Event> _event){
    task = _task;
    event = _event;
}
Task Agenda::getTask(int position){
    return task[position];
}
Event Agenda::getEvent(int position){
    return event[position];
}
void Agenda::setTask(Task _task, int positionTask){
    task[positionTask] = _task;
}
void Agenda::setEvent(Event _event, int positionEvent){
    event[positionEvent] = _event;
}
int Agenda::lenTask(){
    return task.size();
}
int Agenda::lenEvent(){
    return event.size();
}
void Agenda::addTask(){
    string title;
    int priority;
    bool complete;
    cout << "Title: ";
    cin >> title;
    cout << "Priority (1. High, 2. Medium, 3. Low): ";
    cin >> priority;
    Task task2(title, priority, complete);
    task.push_back(task2);
}
void Agenda::deleteTask(int position){
    task.erase(task.begin() + (position - 1));
}
void Agenda::printInformation(){
    cout << "Task: " << endl;
    for (int i = 0; i < task.size(); i++){
        task[i].printInformationTask();
    }
    cout << "Event: " << endl;
    for (int i = 0; i < event.size(); i++){
        event[i].printInformationEvent();
    }
}