#include "book.h"
#include <iostream>
using namespace std;

const int Max_Entries = 35;
Book library[Max_Entries];

void list(int numOfRecords, Book books[])
{
  for (int index = 0; index < numOfRecords; index++)
  {
    cout << "Title: " << books[index].title << endl;

    for (int authorIndex = 0; authorIndex < books[index].authorCount; authorIndex++)
    {
      cout << "Author: " << books[index].authors[authorIndex] << endl;
    }

    cout << "Publisher: " << books[index].publisher << endl;
    cout << "Year: " << books[index].yearPublish << endl;

    if (books[index].hardcover == 0)
    {
      cout << "Cover: Paperback" << endl;
    }
    else
    {
      cout << "Cover: Not Paperback" << endl;
    }

    cout << "Price: " << books[index].price << endl;
    cout << "ISBN: " << books[index].isbn << endl;
    cout << "Copies: " << books[index].copies << endl;

    cout << endl;
  }
}

void findBook(int index, Book books[], string isbn)
{
  cout << "ISBN: " << isbn << " -- Found" << endl;
  cout << "Title: " << books[index].title << endl;

  for (int authorIndex = 0; authorIndex < books[index].authorCount; authorIndex++)
  {
    cout << "Author: " << books[index].authors[authorIndex] << endl;
  }
  cout << "Publisher: " << books[index].publisher << endl;
  cout << "Year: " << books[index].yearPublish << endl;

  if (books[index].hardcover == 0)
  {
    cout << "Cover: Paperback" << endl;
  }
  else
  {
    cout << "Cover: Not Paperback" << endl;
  }

  cout << "Price: " << books[index].price << endl;
  cout << "ISBN: " << books[index].isbn << endl;
  cout << "Copies: " << books[index].copies << endl;
}

int main(int argc, char const *argv[])
{

  if (argc == 3)
  {
    list(read(argv[1], library), library);
  }
  else if (argc == 4)
  {
    int sameIndex = find(argv[3], library, read(argv[1], library));
    if (sameIndex != -1)
    {
      findBook(sameIndex, library, argv[3]);
    }
    else
    {
      cout << "ISBN not found" << endl;
    }
  }
  return 0;
}
