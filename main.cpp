//Librerias necesaarias para esta clase
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Clasess que se van a incluir
//Estas clases, a su vez, ya están incluyendo a todas las demás
#include "Person.h"
#include "Teacher.h"
#include "Student.h"

//Función para crear un objeto tipo Date
Date createDate(){
    int day, month, year; //Variables con las que va a interactuar el usuario
    //Pedimos información al usuario
    cout << "Day: ";
    cin >> day;
    while (day > 31 | day < 1){
        cout << "Incorrect number. \n The day must be between 1 and 31, please enter again";
        cin >> day;
    }
    cout << "Month: ";
    cin >> month;
    while (month > 12 | month < 1){
        cout << "Incorrect number. \n The month must be between 1 and 12, please enter again";
        cin >> day;
    }
    cout << "Year: ";
    cin >> year;
    //Creamos el objeto tipo Date
    Date date(day, month, year);
    return date;
}
//Función para crear un objeto tipo Task
Task createTask(){
    //Variables con la que va a interactuar el usuario
    int priority, pre_complete, day, month, year;
    string title;
    bool complete;
    //Pedimos toda la información al usuario
    cout << "Title: ";
    cin >> title;
    cout << "Priority (1. High, 2. Medium, 3. Low): ";
    cin >> priority;
    cout << "Complete (1.True, 2.False): ";
    cin >> pre_complete;
    if (pre_complete == 1){
        complete = true;
    } else {
        complete = false;
    }
    cout << "Deliver date" << endl;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    //Creamos el objeto tipo Task
    Task task2(title, priority, complete, day, month, year);
    return task2;
}
//Función para crear un objeto tipo Event
Event createEvent(){
    //Variables con la que va a interactuar el usuario
    string location, eventType = " ", title;
    int participants, eventTypeNum, day, month, year;
    //Pedimos toda la información al usuario
    cout << "Number of partipants who will attend: ";
    cin >> participants;
    cout << "Event type (1. Personal, 2. Meeting, 3. Sports): ";
    cin >> eventTypeNum;
    if (eventTypeNum == 1){
        eventType = "Personal";
    } else if (eventTypeNum == 2){
        eventType = "Meeting";
    } else if (eventTypeNum == 3){
        eventType = "Sports";
    }
    cout << "Location: ";
    cin >> location;   
    cout << "Event date" << endl;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year; 
    //Creamos el objeto tipo Event
    Event event1(title, participants, eventType, location, day, month, year);
    return event1;
}
//Función para imprimir la información de Task
void printInformationTask(Person *person){
    //Si Task tiene una longitud de 0, entonces se imprime que no contiene nada, de lo contrario
    //se imprime toda la información de Task
    if (person->getAgenda()->lenTask() != 0){
        for (int i = 0; i < person->getAgenda()->lenTask(); i++){
            cout << i + 1 << ". " << endl;
            cout << person->getAgenda()->getTaskPosition(i).printInformationTask();
        }
    } else {
        cout << "No tasks agended" << endl;
    }
}
//Función para imprimir la información de Event
void printInformationEvent(Person *person){
    //Si Task tiene una longitud de 0, entonces se imprime que no contiene nada, de lo contrario
    //se imprime toda la información de Task
    if (person->getAgenda()->lenEvent() != 0){
        for (int i = 0; i < person->getAgenda()->lenEvent(); i++){
            cout << i + 1<< ". " << endl;
            person->getAgenda()->getEventPosition(i).printInformationEvent();
        } 
    } else {
        cout << "No events agended" << endl;
    }
}
//Función para eliminar todos los objetos del Heap
void deletePerson(vector<Person*> persons){
    for (int i = 0; i < persons.size(); i++){
        delete persons[i];
    }
}
//Función para crear a una persona
void createPerson(vector<Person*> &persons){
    //Creamos las variables que vamos a utilizar para guardar loss datos del usuario
    string name, ID, titleTask = " ", titleEvent = " ", location = " ", email, career, subject, degree, username, phone;
    int age, option, priority = 0, numberStudent, option_person, yearLevel, yearsExperience;
    float grade;
    bool complete = false;
    vector <Task> tasks;
    vector <Event> events;
    //Pedimos datos al usuario
    cout << "Username: ";
    cin >> username;
    cout << "Name: ";
    cin >> name;
    cout << "ID: ";
    cin >> ID;
    cout << "Age: ";
    cin >> age;
    cout << "E-mail: ";
    cin >> email;
    cout << "Phone: ";
    cin >> phone;
    //Definimos el tipo de persona, para posteriormente poder crear el objeto
    cout << "Type of person" << endl;
    cout << "1. Student" << endl;
    cout << "2. Teacher" << endl;
    cin >> option_person;
    if (option_person == 1){
        cout << "Semester: ";
        cin >> yearLevel;
        cout << "Grade: ";
        cin >> grade;
        cout << "Career: ";
        cin >> career;
    } else if (option_person == 2){
        cout << "Subject: ";
        cin >> subject;
        cout << "Years of experience: ";
        cin >> yearsExperience;
        cout << "Degree: ";
        cin >> degree;
    }
    //Preguntamos al usuario cual quiere agregar
    cout << "Welcome: " << endl;
    cout << "1. Task" << endl;
    cout << "2. Event" << endl;
    cin >> option;
    //Demostramos sobreeescritura cuando usamos un constructor diferente para cada caso
    if (option == 1){
        tasks.push_back(createTask());
        if (option_person == 1){
            //Definimos el estudiante solo con objeto tipo Task
            persons.push_back(new Student(name, ID, email, username, phone, tasks, grade, yearLevel, career));
        } else if (option_person == 2){
            //Definimos al maestro solo con objeto tipo Task
            persons.push_back(new Teacher(name, ID, email, username, phone, tasks, subject, degree, yearsExperience));
        }
    } else if (option == 2){
        events.push_back(createEvent());
        if (option_person == 1){
            //Definimos el estudiante solo con objeto tipo Event
            persons.push_back(new Student(name, ID, email, username, phone, events, grade, yearLevel, career));
        } else if (option_person == 2){
            //Definimos al maestro solo con objeto tipo Task
            persons.push_back(new Teacher(name, ID, email, username, phone, events, subject, degree, yearsExperience));
        }
    }
}

int main(){
    //Definimos todas las variables con las que va a interactuar el usuario
    int option_menu = 10, option_begin = 10, option_task, option_event, option_delete_task, option_delete_event, option_clear_agenda, type_person, day, month, year;
    string username;
    Date date;
    Person *person;
    vector<Person*> persons;
    Event event;
    Task task;
    //Creamos un bucle para que el usuario defina cuando parar
    while (option_begin != 0){
        //Menu principal
        cout << "1. Modify my agenda" << endl;
        cout << "2. Create a new agenda" << endl;
        cout << "0. Exit" << endl;
        //Solicitamos al usuario la opción del menú principal
        cin >> option_begin;
        //Con el switch redireccionaamos dependiendo de lo que haya escogido el usuario
        switch (option_begin){
            case 1:
                cout << "Username: ";
                //Pedimos al usuario ingresar su main
                cin >> username;
                //Buscamos al usuario mediante su username
                for (int i = 0; i < persons.size(); i++){
                    if (persons[i]->getUsername() == username){
                        person = persons[i];
                        while (option_menu != 0){
                            //Menú para cuando ya se encontró el usuario
                            cout << "Welcome " << username << endl;
                            cout << "1. Task" << endl;
                            cout << "2. Event" << endl;
                            cout << "3. View Information" << endl;
                            cout << "0. Exit" << endl;
                            cin >> option_menu;
                            switch (option_menu){
                                case 1:
                                    //Menú para Task
                                    cout << "1. Add task" << endl;
                                    cout << "2. Delete dask" << endl;
                                    cout << "3. View task" << endl;
                                    //Pedimos al usuario ingresar la opción del menú task
                                    cin >> option_task;
                                    //Con el switch redireccionaamos dependiendo de lo que haya escogido el usuario
                                    switch (option_task){
                                        case 1:
                                            //Llamamos a la función de createTask
                                            task = createTask();
                                            //Llamamos a la función para agregar un objeto tipo Task
                                            person->getAgenda()->addTask(task); 
                                            break;
                                        case 2:
                                            //Imprimimos toda la información sobre Task
                                            printInformationTask(person);
                                            cout << "Number you want to eliminate: " ;
                                            //Pedimos al usuario la opción para poder eliminar
                                            cin >> option_delete_task;
                                            //Llamamos a la función de deleteTask para poder eliminarlo
                                            person->getAgenda()->deleteTask(option_delete_task);           
                                            break;  
                                        case 3:
                                            //Imprimimos toda la información para task
                                            printInformationTask(person);
                                            break;
                                        default:
                                            //Se muestre número incorreccto si el número no esta en el rango
                                            cout << "Incorrect number" << endl;
                                            break;
                                    }
                                    break;
                                case 2:
                                    //Menú para event
                                    cout << "1. Add event" << endl;
                                    cout << "2. Delete event" << endl;
                                    cout << "3. View event" << endl;
                                    //Pedimos al usuario ingresar la opción del menú de event
                                    cin >> option_event;
                                    switch (option_event){
                                        case 1:
                                            //Llamamos a la función de createEvent, previamente definida
                                            event = createEvent();
                                            //Llamamos a la función de agregar agenda
                                            person->getAgenda()->addEvent(event);                                            
                                            break;
                                        case 2:
                                            //Imprimimos toda la información sobre Event
                                            printInformationEvent(person);
                                            //Pedimos el número para eliminar
                                            cout << "Number you want to eliminate: " ;
                                            cin >> option_delete_event;
                                            //Llamamos a la función para eliminar el evento que el usuario seleccionó
                                            person->getAgenda()->deleteEvent(option_delete_event);
                                            break;
                                        case 3:
                                            //Imprimimoss toda la información sobre Event
                                            printInformationEvent(person);
                                            break;
                                        default:  
                                            //Se muestre número incorreccto si el número no esta en el rango
                                            cout << "Incorrect number" << endl;  
                                            break;
                                    }
                                    break;                  
                                case 3:
                                    //Imprimimos la información de la persona
                                    cout << person->printInformationPerson();
                                    break;
                                case 0:
                                    //Caso de que sea 0, se sale del bucle
                                    break;
                                default:
                                    //Con default se muestre número incorreccto si el número no esta en el rango
                                    cout << "Incorrect number";
                                    break;
                            }
                        
                        } 
                    }
                }
                break;
            case 2:
                //Si del menú principal escoge la opción 2
                //Llamamos a la función de createPerson, para crear un nuevo usuario
                createPerson(persons);
                break;
            case 0:
                //Caso de que sea 0, se sale del bucle
                break;
            default:
                //Con default se muestre número incorreccto si el número no esta en el rango
                cout << "Incorrect number" << endl;
                break;
        }
    }
    //Llamamos a la función deletePerson para eliminar todo esto en el Heap
    deletePerson(persons);
    return 0;
}