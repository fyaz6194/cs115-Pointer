
#include <string.h>
#include <iostream>
using namespace std;


struct Student
{
    string name;
    int id;
    int* markPtr;
};

void inputStudent(Student* ptr, int*);   // function prototype for inputting
                                  // function prototype for printing

//*********************** Main Function ************************//
int main ()
{
    Student* stu;		  // instantiating an STUDENT object
    stu = new Student;  // defining a pointer for the object
    int* tempPtr;
    tempPtr = new int;
    cout << "Enter Total Subject:";
    cin >> *tempPtr;

    inputStudent(stu, tempPtr);	  // inputting from the keyboard into the instance
                     	  // printing the object
    cout << "Stduent info:" << endl;
    cout << "Name: " << stu->name << endl;
    cout << "Id: " << stu->id << endl;
    for (int i = 0; i < *tempPtr; i++){
        cout << "mark" << i + 1 <<": " << stu->markPtr[i] << endl;
    }
    
    delete stu, tempPtr;
    tempPtr = NULL;
    stu = NULL;

    return 0;

} // end main

//-----------------Start of functions----------------------------//
void inputStudent(Student* ptr, int* ptr2){
    
    
    cout << "Enter name: ";
    cin >> ptr -> name;
    cout << "Enter id: ";
    cin >> ptr -> id;
    ptr -> markPtr = new int[*ptr2];
    for (int i = 0; i < *ptr2; i++){
        cout << "Enter mark " << i + 1 << ": ";
        cin >> ptr -> markPtr[i];
    }
    
}
