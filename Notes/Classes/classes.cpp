#include "person.h"

int main(int argc, char const *argv[])
{
  person newPerson;

  cout << "Enter your full name seperated by a space." << endl;
  cin >> newPerson;

  cout << newPerson;
  cout << endl;
  return 0;
}
