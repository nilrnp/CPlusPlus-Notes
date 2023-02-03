#include "book.h"
#include <fstream>
#include <iostream>
#include <string>

int read(string filename, Book books[])
{
  ifstream inputFile;
  inputFile.open(filename);

  if (inputFile.eof())
  {
    return -1;
  }
  int index = 0;

  while (true)
  {
    getline(inputFile, books[index].title);

    inputFile >> books[index].authorCount;
    inputFile.ignore();

    for (int authorIndex = 0; authorIndex < books[index].authorCount; authorIndex++)
    {
      getline(inputFile, books[index].authors[authorIndex]);
    }

    getline(inputFile, books[index].publisher);

    inputFile >> books[index].yearPublish >> books[index].hardcover >> books[index].price;
    inputFile.ignore();

    getline(inputFile, books[index].isbn);
    inputFile >> books[index].copies;
    inputFile.ignore();

    index++;

    if (inputFile.eof())
    {
      break;
    }
  }
  inputFile.close();
  return index;
}

int find(string id, Book books[], int length)
{
  int index = 0;
  while (index < length)
  {
    if (books[index].isbn == id)
    {
      return index;
    }
    index++;
  }
  return -1;
}
