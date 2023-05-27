#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Person.h"
#include "Teacher.h"
#include "Student.h"

Person createPerson(){
    string name, ID, titleTask = " ", titleEvent = " ", location = " ", email;
    int age, option, priority = 0, numberStudent, phone;
    bool complete = false;
    vector <Task> tasks;
    vector <Event> events;
    cout << "Name: ";
    cin >> name;
    cout << "ID: ";
    cin >> ID;
    cout << "Age: ";
    cin >> age;
    cout << "E-mail: ";
    cin >> email;
    cout << "Phone";
    cin >> phone;
    cout << "Welcome: " << endl;
    cout << "1. Task" << endl;
    cout << "2. Event" << endl;
    cout << "0. Exit" << endl;
    cin >> option;
    switch (option){
        case 1:
            cout << "Title for the task: ";
            cin >> titleTask;
            cout << "Priority: (1. High, 2. Medium, 3. Low): ";
            cin >> priority;
            break;
        case 2:
            cout << "Title for the event";
            cin >> titleEvent;
            cout << "Location: ";
            cin >> location;
            cout << "Number of students who will attend: ";
            cin >> numberStudent;
            break;
        case 0:
            break;
        default:
            cout << "Incorrect number";
            break;
    }
    Task task(titleTask, priority, complete);
    tasks.push_back(task);
    Event event(titleEvent, location);
    events.push_back(event);
    Person person(name, ID, email, phone, tasks, events);
    return person;
}
int main(){
    int option_menu = 10, option_task, option_event, option_delete_task;
    Person person = createPerson();
    while (option_menu != 0){
        cout << "1. Task" << endl;
        cout << "2. Event" << endl;
        cout << "0. Exit" << endl;
        cin >> option_menu;
        switch (option_menu){
            case 1:
                cout << "1. Add task" << endl;
                cout << "2. Delete dask" << endl;
                cout << "3. View task" << endl;
                cin >> option_task;
                switch (option_task){
                    case 1:
                        person.getAgenda()->addTask(); 
                        break;
                    case 2:
                        cout << "Tam: " << person.getAgenda()->lenTask() << endl;
                        for (int i = 0; i < person.getAgenda()->lenTask(); i++){
                            cout << i + 1<< ". " << endl;
                            person.getAgenda()->getTask(i).printInformationTask();
                        }
                        cout << "Number you want to eliminate: " ;
                        cin >> option_delete_task;
                        person.getAgenda()->deleteTask(option_delete_task);           
                        break;  
                    case 3:
                        for (int i = 0; i < person.getAgenda()->lenTask(); i++){
                            person.getAgenda()->getTask(i).printInformationTask();
                        }
                        break;
                    default:
                        cout << "Incorrect number" << endl;
                        break;
                }
                break;
            case 2:
                cout << "1. Add event" << endl;
                cout << "2. Delete event" << endl;
                cout << "3. View event" << endl;
                cin >> option_event;
                break;
            default:
                break;
        }
    
    } 
    //student.getAgenda()->printInformation();
    delete person.getAgenda();
    return 0;
}