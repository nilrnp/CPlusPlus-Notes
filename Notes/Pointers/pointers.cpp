#include "student.h"

struct Rectangle
{
  int length;
  int width;
  Rectangle *next;
};

Rectangle *createNode(int length, int width, Rectangle *next)
{
  Rectangle *temp = new Rectangle;
  temp->length = length;
  temp->width = width;
  temp->next = next;
  return temp;
}

int main(int argc, char const *argv[])
{
  // Pointers basics
  // int num = 256;
  // int *numPointer = &num; // points to memory adress of int num
  // *numPointer = 128;      // changes both numPointer and num

  // Dynamic variables (variables that are created and destroyed during execution)
  // int *numPtr = new int; // numPtr points to a nameless integer variable
  // *numPtr = 420;
  // *numPtr = *numPtr / 2;
  // cout << *numPtr;
  // delete numPtr;    // pointers should be deleted and set to null once they aren't needed to save memory
  // numPtr = nullptr; // initializes pointer to null

  // Array and pointers
  // typedef int *IntPtrType; // typedef creates a pointer type which is an int in this case
  // int a[10];
  // IntPtrType numPtr; // creates an int poitner called numPtr
  // numPtr = a;
  // for (int i = 0; i < 10; ++i)
  //   numPtr[i] = i;
  // for (int i = 0; i < 10; ++i)
  //   cout << a[i] << " ";
  // cout << endl;

  // Dynamic arrays, normal pointer arrays may take up extra space so dynamic arrays save memory space
  // int arraySize;
  // cout << "How many numbers? : ";
  // cin >> arraySize;
  // int *numList = new int[arraySize];
  // for (int i = 0; i < arraySize; ++i)
  // {
  //   numList[i] = i;
  //   cout << numList[i] << endl;
  // }
  // delete[] numList;
  // numList = nullptr;

  // Pointer arrows and classes
  // student *newKid = new student("Tom", "Brady"); // pointers objects can be created using new keyword
  // newKid->setLastName("Hardy");                  // pointer object can reference the class methods using arrows
  // cout << newKid->getFirstName() << endl;
  // delete newKid;
  // newKid = nullptr;

  // Linked-lists
  // Rectangle *head; // linked list begins with head
  // head = createNode(99, 99, nullptr);
  // Rectangle *temp = head;
  // for (int i = 0; i < 6; ++i) // append new nodes
  // {
  //   temp->next = createNode(i + 1, i + 2, nullptr);
  //   temp = temp->next;
  // }
  // temp = head;
  // while (temp != nullptr) // output
  // {
  //   cout << "Length : " << temp->length << endl;
  //   cout << "Width : " << temp->width << endl;
  //   cout << endl;
  //   temp = temp->next;
  // }
  // while (head != nullptr) // cleanup
  // {
  //   temp = head;
  //   head = head->next;
  //   delete temp;
  // }

  return 0;
}
