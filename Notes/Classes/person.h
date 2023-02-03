#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class person
{

  // friend functions have access to all instances of a class
  // operator << is being overloaded
  friend ostream &operator<<(ostream &, const person &);
  friend istream &operator>>(istream &, person &);

private:
  string firstName;
  string lastName;

public:
  person(); // constructor

  // define functions
  void setFirstName(string fn);
  string getFirstName();
  void setLastName(string ln);
  string getLastName();
  void printFullName();
};

#endif