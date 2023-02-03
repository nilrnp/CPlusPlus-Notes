#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class student
{
private:
  string firstName;
  string lastName;

public:
  student(string firstName, string lastName);
  ~student();
  void setFirstName(string firstName);
  string getFirstName();
  void setLastName(string lastName);
  string getLastName();
};

student::student(string firstName, string lastName)
{
  setFirstName(firstName);
  setLastName(lastName);
}

student::~student()
{
}

void student::setFirstName(string firstName)
{
  this->firstName = firstName; // this-> refers to private variable in the class
}

string student::getFirstName()
{
  return firstName;
}

void student::setLastName(string lastName)
{
  this->lastName = lastName;
}

string student::getLastName()
{
  return lastName;
}

#endif