#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
using namespace std;

class Task {
    private:
        string title;
        int priority;
        bool complete;
    public:
        Task();
        Task(string, int, bool);
        string getTitle();
        int getPriority();
        bool getComplete();
        void setTitle(string);
        void setPriority(int);
        void setComplete(bool);
        void printInformationTask();
};  

#endif