#include "Book.cpp"
#include "Warehouse.cpp"
#include <fstream>
ifstream inputFile;

Warehouse newWarehouse;
Book newBook;

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
    newWarehouse.find(argv[3], newBook);
  }

  return 0;
}