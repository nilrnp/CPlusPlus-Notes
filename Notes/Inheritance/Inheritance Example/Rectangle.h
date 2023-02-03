#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {

   public:
      Rectangle ();
      virtual ~Rectangle();

      virtual void setLength(int length);
      int getLength();

      virtual void setWidth(int width);
      int getWidth();

      virtual int getArea();

   private:
      int length_;
      int width_;
};

#endif