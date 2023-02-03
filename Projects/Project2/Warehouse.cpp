#include "Warehouse.h"

istream &operator>>(istream &is, Warehouse &warehouse)
{

  while (is >> warehouse.books[warehouse.bookCount])
  {
    ++warehouse.bookCount;
  }

  return is;
}

ostream &operator<<(ostream &os, const Warehouse &warehouse)
{
  for (int i = 0; i <= warehouse.bookCount; ++i)
  {
    os << warehouse.books[i];
  }
  return os;
}

Warehouse::Warehouse()
{
  bookCount = 0;
}

bool Warehouse::find(string isbn, Book &book) const
{
  for (int i = 0; i <= bookCount; ++i)
  {
    book = books[i];
    if (book.getISBN() == isbn)
    {
      cout << book << endl;
      return true;
    }
  }
  return false;
}

void Warehouse::list() const
{
  for (int i = 0; i <= bookCount; ++i)
  {
    cout << books[i];
  }
}