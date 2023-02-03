class Rectangle // parent class
{
public:
  Rectangle(int length, int width);

  virtual ~Rectangle(); // classes with virtual functions should have virtual destructors

  int getLength() const;

  int getWidth() const;

  virtual void setLength(int length); // virtual functions have to be implemented in both parent and child classes

  virtual void setWidth(int width) = 0; // pure virtual functions make class abstract, only defined in child class

protected: // protected is accessible to child classes
  int length_;
  int width_;
};

Rectangle::Rectangle(int length, int width)
{
  length_ = length;
  width_ = width;
}

int Rectangle::getLength() const
{
  return length_;
}

int Rectangle::getWidth() const
{
  return width_;
}