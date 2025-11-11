#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

//Person::Person(string n, int i) {
//    name = n;
//    id = i;
//}
void Person::display(){
    cout << "Name: " << name << endl;
}

// ==================== Student Class Implementation ====================

Student::Student(int yl, string m){
    yearLevel = yl;
    major = m;
}
void Student::display(){
    cout << "Year: " << yearLevel << endl;
    cout << "Major: " << major << endl;
}

// ==================== Instructor Class Implementation ====================

Instructor::Instructor(string d, int ey){
    department = d;
    experienceYears = ey;
}
void Instructor::display(){
    cout << "Department: " << department << endl;
    cout << "Experience: " << experienceYears << " years" << endl;
}

// ==================== Course Class Implementation ====================

Course::Course(string CC, string CN, int MS){
    courseCode = CC;
    courseName = CN;
    maxStudents = MS;
    students = new Student[MS];
    currentStudents = 0;
}
Course::~Course(){
    delete[] students;
}
void Course::addStudent(const Student &s){
    if (currentStudents == maxStudents) {
        cout << "Error" << endl;
    } else {
        students[currentStudents] = s;
        currentStudents++;
    }
}
void Course::displayCourseInfo() {
    cout << "Course: " << courseCode << " - " << courseName << endl;
    cout << "Max Students: " << maxStudents << endl;
    cout << "Currently Enrolled: ";
    for (int i = 0; i < currentStudents; i++) {
        cout << student[i].name << " (ID: " << student[i].id << ")" << endl;
    }

}

// ==================== Main Function ====================
int main() {

    Student s = new Student(2, "Informatics");
    Instructor i = new Instructor("Computer Science", 5);
    Course c = new Course("CS101" , "Introduction to Programming", 3);

    c.displayCourseInfo();
    i.display();
    s.display();

    return 0;
}
