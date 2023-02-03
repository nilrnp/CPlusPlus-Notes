#include <iostream>
using namespace std;

template <class T>
class rectangle
{
private:
  T length;
  T width;

public:
  rectangle(T length, T width);

  void setLength(T length);
  T getLength();
  void setWidth(T length);
  T getWidth();
  T getArea();
};

template <class T>
rectangle<T>::rectangle(T length, T width)
{
  setLength(length);
  setWidth(width);
}

template <class T>
void rectangle<T>::setLength(T length)
{
  this->length = length;
}

template <class T>
T rectangle<T>::getLength()
{
  return length;
}

template <class T>
void rectangle<T>::setWidth(T length)
{
  this->width = width;
}

template <class T>
T rectangle<T>::getWidth()
{
  return width;
}

template <class T>
T rectangle<T>::getArea()
{
  T area = getLength() * getWidth();
  return area;
}