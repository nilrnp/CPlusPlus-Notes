// file that will implement class
#include "person.h"

void person::setFirstName(string fn)
{
  firstName = fn;
}

void person::setLastName(string ln)
{
  lastName = ln;
}

string person::getFirstName()
{
  return firstName;
}

string person::getLastName()
{
  return lastName;
}

void person::printFullName()
{
  cout << getFirstName() << " " << getLastName() << endl;
}

ostream &operator<<(ostream &output, const person &newPerson)
{
  output << "Hello " << newPerson.firstName << " " << newPerson.lastName;
}

istream &operator>>(istream &input, person &newPerson)
{
  input >> newPerson.firstName;
  input.ignore();
  input >> newPerson.lastName;
}