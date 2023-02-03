#include "Book.h"

istream &operator>>(istream &is, Book &book)
{
  string title;
  string authors[Book::MAX_AUTHORS];
  int authorCount;
  string publisher;
  short yearPublish;
  bool hardcover;
  float price;
  string isbn;
  long copies;

  getline(is, title);
  book.setTitle(title);

  is >> authorCount;
  book.setAuthorCount(authorCount);
  is.ignore();

  for (int authorIndex = 0; authorIndex < book.authorCount; ++authorIndex)
  {
    getline(is, authors[authorIndex]);
  }
  book.setAuthors(authors);

  getline(is, publisher);
  book.setPublisher(publisher);

  is >> yearPublish;
  book.setYearPublish(yearPublish);

  is >> hardcover;
  book.setHardcover(hardcover);

  is >> price;
  book.setPrice(price);
  is.ignore();

  getline(is, isbn);
  book.setISBN(isbn);

  is >> copies;
  book.setCopies(copies);
  is.ignore();

  return is;
}

ostream &operator<<(ostream &os, const Book &book)
{
  os << "Title: " << book.getTitle() << endl;

  for (int authorIndex = 0; authorIndex < book.authorCount; authorIndex++)
  {
    os << "Author: " << book.getAuthors(authorIndex) << endl;
  }

  os << "Publisher: " << book.getPublisher() << endl;
  os << "Year: " << book.getYearPublish() << endl;

  if (book.getHardcover() == 0)
  {
    os << "Cover: Paperback" << endl;
  }
  else
  {
    os << "Cover: Not Paperback" << endl;
  }

  os << "Price: " << book.getPrice() << endl;
  os << "ISBN: " << book.getISBN() << endl;
  os << "Copies: " << book.getCopies() << endl;

  os << endl;

  return os;
}

Book::Book()
{
}

Book::Book(string title, string authors[], int authorCount, string publisher, short yearPublish, bool hardcover, float price, string isbn, long copies)
{
  setTitle(title);
  setAuthors(authors);
  setAuthorCount(authorCount);
  setPublisher(publisher);
  setYearPublish(yearPublish);
  setHardcover(hardcover);
  setPrice(price);
  setISBN(isbn);
  setCopies(copies);
}

void Book::setTitle(string title2)
{
  title = title2;
}

string Book::getTitle() const
{
  return title;
}

void Book::setAuthors(string authors2[])
{
  for (int i = 0; i < MAX_AUTHORS; ++i)
  {
    authors[i] = authors2[i];
  }
}

string Book::getAuthors(int index) const
{
  return authors[index];
}

void Book::setAuthorCount(int authorCount2)
{
  authorCount = authorCount2;
}

int Book::getAuthorCount() const
{
  return authorCount;
}

void Book::setPublisher(string publisher2)
{
  publisher = publisher2;
}

string Book::getPublisher() const
{
  return publisher;
}

void Book::setYearPublish(short yearPublish2)
{
  yearPublish = yearPublish2;
}

short Book::getYearPublish() const
{
  return yearPublish;
}

void Book::setHardcover(bool hardcover2)
{
  if (hardcover2 == 0)
  {
    hardcover = true;
  }
  else
  {
    hardcover = false;
  }
}

bool Book::getHardcover() const
{
  return hardcover;
}

void Book::setPrice(float price2)
{
  price = price2;
}

float Book::getPrice() const
{
  return price;
}

void Book::setISBN(string isbn2)
{
  isbn = isbn2;
}

string Book::getISBN() const
{
  return isbn;
}

void Book::setCopies(long copies2)
{
  copies = copies2;
}

long Book::getCopies() const
{
  return copies;
}