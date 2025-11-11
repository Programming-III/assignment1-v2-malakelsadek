#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;
//#write student class here


class Student : public Person{
protected:
    int yearLevel;
    string major;
public:
    Student(int yl, string m);
    void display();
};










#endif
