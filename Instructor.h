#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class Instructor : public Person{
protected:
    string department;
    int experienceYears;
public:
    Instructor(string d, int ey);
    void display();
};




#endif
