/*
 ** Stack template test program
 ** CS2560
 */

#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

// A simple key:value class
class Pair
{
public:
   Pair(int key, string value) : key_(key), value_(value)
   {
   }

   int getKey() const { return this->key_; }
   string getValue() const { return this->value_; }

private:
   int key_;
   string value_;
};

int main(int argc, char *argv[])
{
   // working with a simple integer stack
   Stack<int> intStack;
   int counter = 10;

   for (int i = 0; i < counter; ++i)
   {
      intStack.push(i);
   }

   cout << "Stack<int> size: " << intStack.length() << endl;
   int value;
   while (intStack.pop(value))
   {
      cout << value << " ";
   }
   cout << endl
        << endl;

   // working with a stack of integer pointers
   Stack<int *> intPtrStack;
   for (int i = 0; i < counter; ++i)
   {
      int *val = new int;
      *val = i * 100;
      intPtrStack.push(val);
   }

   cout << "Stack<int*> size: " << intPtrStack.length() << endl;
   int *valuePtr;
   while (intPtrStack.pop(valuePtr))
   {
      cout << *valuePtr << " ";
      delete valuePtr;
   }
   cout << endl
        << endl;

   // working with a stack of object pointers
   Stack<Pair *> pairStack;
   pairStack.push(new Pair(1, "Bill"));
   pairStack.push(new Pair(2, "Steve"));
   pairStack.push(new Pair(3, "Abby"));

   cout << "Stack<Pair*> size: " << pairStack.length() << endl;
   Pair *p;
   while (pairStack.pop(p))
   {
      cout << p->getKey() << ":" << p->getValue() << endl;
      delete p;
   }

   return 0;
}
