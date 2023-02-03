#include "Rectangle.h"

class Square : public Rectangle // child class
{
public:
  Square(int side);

  virtual ~Square();

  int getSide() const;

  virtual void setLength(int length);

  virtual void setWidth(int width);
};

int Square::getSide() const
{
  return length_;
}

Square::Square(int side) : Rectangle(side, side){}; // calling constructor of parent class

void Square::setLength(int side)
{
  length_ = side;
}

void Square::setWidth(int side)
{
  width_ = side;
}