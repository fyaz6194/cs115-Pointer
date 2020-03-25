
#include <string.h>
#include <iostream>
using namespace std;


struct Student
{
    string name;
    int id;
    int mark[3];
};

void inputStudent(Student* ptr);   // function prototype for inputting
                                  // function prototype for printing

//*********************** Main Function ************************//
int main ()
{
    Student stu;		  // instantiating an STUDENT object
    Student*  stuPtr = &stu;  // defining a pointer for the object

    inputStudent(&stu);	  // inputting from the keyboard into the instance
                     	  // printing the object
    cout << "Stduent info:" << endl;
    cout << "Name: " << stu.name << endl;
    cout << "Id: " << stu.id << endl;
    for (int i = 0; i < 3; i++){
        cout << "mark" << i + 1 <<": " << stu.mark[i] << endl;
    }
    
    return 0;

} // end main

//-----------------Start of functions----------------------------//
void inputStudent(Student* ptr){
    cout << "Enter name: ";
    getline(cin,ptr -> name) ;
    cout << "Enter id: ";
    cin >> ptr -> id;
    for (int i = 0; i < 3; i++){
        cout << "Enter mark " << i + 1 << ": ";
        cin >> ptr -> mark[i];
    }
    
}
