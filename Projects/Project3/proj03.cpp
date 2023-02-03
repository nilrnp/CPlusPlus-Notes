#include "Book.h"
#include "Warehouse.h"
#include <fstream>
ifstream inputFile;
Warehouse newWarehouse;

int main(int argc, char const *argv[])
{

  if (argc == 3)
  {
    inputFile.open(argv[1]);
    if (inputFile.fail())
    {
      cout << "File does not exist" << endl;
    }
    inputFile >> newWarehouse;
    newWarehouse.list();
  }
  else if (argc == 4)
  {
    inputFile.open(argv[1]);
    if (inputFile.fail())
    {
      cout << "File does not exist" << endl;
    }
    inputFile >> newWarehouse;
    newWarehouse.find(argv[3]);
  }

  return 0;
}

void Warehouse::list() const
{
  cout << newWarehouse;
}

Book *Warehouse::find(string isbn) const
{
  for (int i = 0; i < 35; ++i)
  {
    if (newWarehouse.head->getISBN() == isbn)
    {
      cout << *newWarehouse.head;
      return newWarehouse.head;
    }
    newWarehouse.head = newWarehouse.head->getNext();
  }

  return NULL;
}