#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Task.h"
#include "Event.h"  

class Agenda {
    private:
        vector<Task> task;
        vector<Event> event;
    public:
        Agenda();
        Agenda(vector<Task>, vector<Event>);
        Task getTask(int);
        Event getEvent(int);
        void setTask(Task, int);
        void setEvent(Event, int);
        int lenTask();
        int lenEvent();
        void addTask();
        void deleteTask(int);
        void printInformation();
};

#endif