#include "Warehouse.h"
Book *newBook = new Book;

istream &operator>>(istream &is, Warehouse &warehouse)
{

  warehouse.head = newBook;

  while (is >> *newBook)
  {
    ++warehouse.bookCount;
    newBook->setNext(new Book);
    newBook = newBook->getNext();
  }

  return is;
}

ostream &operator<<(ostream &os, const Warehouse &warehouse)
{
  newBook = warehouse.head;
  for (int i = 0; i <= warehouse.bookCount; ++i)
  {
    os << *newBook;
    newBook = newBook->getNext();
  }

  return os;
}

Warehouse::Warehouse()
{
  bookCount = 0;
}
