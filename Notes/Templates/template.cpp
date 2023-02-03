#include "rectangle.h"

template <class T> // initialize a template variable (similar to generics)
T getMax(T value1, T value2, T value3);

int main(int argc, char const *argv[])
{
  // Template methods
  cout << "The max between 25, 35, 90 is: " << getMax(25, 35, 90) << endl;
  cout << "The max between 25.2, 35.7, 90.9 is: " << getMax(25.2, 35.7, 90.9) << endl;
  cout << "The max between a, b, c is: " << getMax('a', 'b', 'c') << endl;

  // Template class
  rectangle<int> newRectangle(5, 5);
  cout << newRectangle.getArea() << endl;

  return 0;
}

template <class T>
T getMax(T value1, T value2, T value3)
{
  T max = value1;
  if (value2 > max)
  {
    max = value2;
  }

  if (value3 > max)
  {
    max = value3;
  }
  return max;
}